#include "emulator.h"

void execute_instruction(struct machine *mach, uint32_t insn);

void emulate(FILE *fp_in, FILE *fp_out)
{
    /* Création et initialisation de la machine émulée */
    struct machine *mach = malloc(sizeof *mach);
    machine_init(mach);

    /* Chargement des instructions assemblées dans la mémoire */
    int insn_count = 0;
    uint32_t insn;
    while(fscanf(fp_in, "%x", &insn) > 0) {
        machine_suw(mach, 4 * insn_count, insn);
        insn_count++;
    }

    /* Boucle de lecture - décodage - exécution des instructions */
    // TODO: Boucle :
    // 1. Lire l'opcode à l'adresse mach->PC avec une fonction machine_...()
    // 2. Si l'opcode vaut 0, on arrête l'émulation
    // 3. Sinon, l'afficher (pour debugger), l'exécuter, et continuer
    uint64_t dMem = mach->memory[mach->PC];
    while(dMem != 0){
        ////printf("Tot %ld\n", dMem);
        ////printf("part 1 : %ld\n", dMem & 0x00000000ffffffff);
        ////printf("part 2 : %ld\n", (dMem & 0xffffffff00000000)>>32);
        uint32_t word = machine_luw(mach, mach->PC);
        //printf("trad : %d\n",word);
        if(word != 0) execute_instruction(mach, word);
        else mach->PC += 4;

        dMem = mach->memory[(mach->PC)/8];
    }

    /* Affiche de l'état final dans fp_out */
    // TODO: Afficher dans fp_out (avec fprintf()) la valeur finale des
    // registres (mach->regs[0..31]) sous la forme spécifiée dans l'énoncé

    for(int i = 0; i < 32; i++){
        fprintf(fp_out, "x%d: %ld\n", i, mach-> regs[i]); 
    }

    free(mach);
}

void B_type(uint32_t insn, int *rs1, int *rs2, int *imm)
{
    *rs1 = (insn >> 15) & 0x1f;
    *rs2 = (insn >> 20) & 0x1f;
    *imm = (((int32_t)insn >> 31) << 12)
           | (((insn >> 7) & 1) << 11)
           | (((insn >> 25) & 0x3f) << 5)
           | (((insn >> 8) & 0xf) << 1);
    //printf(":: B type (rs1=%d rs2=%d imm=%d)\n", *rs1, *rs2, *imm);
}

void J_type(uint32_t insn, int *rd, int *imm)
{
    *rd = (insn >> 7) & 0x1f;
    *imm = (((int32_t)insn >> 31) << 20)
           | (((insn >> 12) & 0xff) << 12)
           | (((insn >> 20) & 1) << 11)
           | (((insn >> 21) & 0x3ff) << 1);

    //printf(":: J type (rd=%d imm=%d)\n", *rd, *imm);
}


void R_type(uint32_t insn, int *rd, int *rs1, int *rs2)
{
    // TODO: Décoder un opcode R-type
    *rd = (insn >> 7) & 0x1f;
    *rs1 = (insn >> 15) & 0x1f;
    *rs2 = (insn >> 20) & 0x1f;
    //printf(":: R type (rd=%d rs1=%d rs2=%d)\n", *rd, *rs1, *rs2);
}

void I_type(uint32_t insn, int *rd, int *rs1, int *imm)
{
    // TODO: Décoder un opcode I-type (/!\ extension de signe)
    *rd = (insn >> 7) & 0x1f;
    *rs1 = (insn >> 15) & 0x1f;
    *imm = ((int32_t)insn >> 20);
    //printf(":: I type (rd=%d rs1=%d imm=%d)\n", *rd, *rs1, *imm);
}

void S_type(uint32_t insn, int *rs1, int *rs2, int *imm)
{
    // TODO: Décoder un opcode S-type (/!\ recollage imm + extension de signe)
    *rs1 = (insn >> 15) & 0x1f;
    *rs2 = (insn >> 20) & 0x1f;
    *imm = (((int32_t)insn >> 25) << 5)
           | ((insn >> 7) & 0x1f);
    //printf(":: S type (rs1=%d rs2=%d imm=%d)\n", *rs1, *rs2, *imm);
}

/* ---------- Etape 5 ---------- */
void U_type(uint32_t insn, int *rd, int *imm)
{
    *rd = (insn >> 7) & 0x1f;
    *imm = ((int32_t)insn >> 12);
    //printf(":: U type (rd=%d imm=%d)\n",*rd, *imm);
}



// TODO: do_addi(), do_add(), etc. toutes sur le même modèle

void do_bge(struct machine *mach, uint32_t insn)
{
    int rs1, rs2, imm;
    B_type(insn, &rs1, &rs2, &imm);
    printf(":: bge\n");

    if(mach->regs[rs1] >= mach->regs[rs2])
        mach->PC += imm;
    else
        mach->PC += 4;
}

void do_jal(struct machine *mach, uint32_t insn)
{
    int rd, imm;
    J_type(insn, &rd, &imm);
    printf(":: jal\n");

    if(rd != 0)
        mach->regs[rd] = mach->PC + 4;
    mach->PC += imm;
}

void do_addi(struct machine *mach, uint32_t insn)
{
    int rd, rs1, imm;
    I_type(insn, &rd, &rs1, &imm);
    printf(":: addi\n");

    mach->regs[rd] = mach->regs[rs1] + imm;
    mach->PC += 4;
}

void do_add(struct machine *mach, uint32_t insn)
{
    int rd, rs1, rs2;
    R_type(insn, &rd, &rs1, &rs2);
    printf(":: add\n");

    mach->regs[rd] = mach->regs[rs1] + mach->regs[rs2];
    mach->PC += 4;
}

void do_sub(struct machine *mach, uint32_t insn)
{
    int rd, rs1, rs2;
    R_type(insn, &rd, &rs1, &rs2);
    printf(":: sub\n");

    mach->regs[rd] = mach->regs[rs1] - mach->regs[rs2];
    mach->PC += 4;
}

void do_beq(struct machine *mach, uint32_t insn)
{
    int rs1, rs2, imm;
    B_type(insn, &rs1, &rs2, &imm);
    printf(":: beq\n");

    if(mach->regs[rs1] == mach->regs[rs2])
        mach->PC += imm;
    else
        mach->PC += 4;
}

void do_bne(struct machine *mach, uint32_t insn)
{
    int rs1, rs2, imm;
    B_type(insn, &rs1, &rs2, &imm);
    printf(":: bne\n");

    if(mach->regs[rs1] != mach->regs[rs2])
        mach->PC += imm;
    else
        mach->PC += 4;
}

void do_blt(struct machine *mach, uint32_t insn)
{
    int rs1, rs2, imm;
    B_type(insn, &rs1, &rs2, &imm);
    printf(":: blt\n");

    if(mach->regs[rs1] < mach->regs[rs2])
        mach->PC += imm;
    else
        mach->PC += 4;
}

void do_ld(struct machine *mach, uint32_t insn)
{
    int rd, rs1, imm;
    I_type(insn, &rd, &rs1, &imm);
    printf(":: ld\n");


    mach->regs[rd] = machine_ld(mach, mach->regs[rs1]+imm);
    mach->PC += 4;
}

void do_sd(struct machine *mach, uint32_t insn)
{
    int rs1, rs2, imm;
    S_type(insn, &rs1, &rs2, &imm);
    printf(":: sd\n");

    machine_sd(mach, mach->regs[rs1]+imm, mach->regs[rs2]);
    mach->PC += 4;
}


/* ---------- Etape 5 ---------- */

void do_auipc(struct machine *mach, uint32_t insn)
{
    int rd, imm;
    U_type(insn, &rd, &imm);
    printf(":: auipc\n");


    mach->regs[rd] = mach->PC + (imm << 12);
    mach->PC += 4;
}

void do_srli(struct machine *mach, uint32_t insn){
    int rd, rs1, imm;
    I_type(insn, &rd, &rs1, &imm);

    mach->regs[rd] = mach->regs[rs1] >> imm;
    mach->PC += 4;
}

void do_lw(struct machine *mach, uint32_t insn)
{
    int rd, rs1, imm;
    I_type(insn, &rd, &rs1, &imm);
    printf(":: lw\n");


    mach->regs[rd] = machine_luw(mach, mach->regs[rs1]+imm);
    mach->PC += 4;
}

void do_ecall(struct machine *mach, uint32_t insn)
{
    int rd, rs1, imm;
    I_type(insn, &rd, &rs1, &imm);
    printf(":: ecall\n");

    fprintf(stderr, "%c", (char)(mach->regs[10]));

    mach->PC += 4;
}

void do_and(struct machine *mach, uint32_t insn)
{
    int rd, rs1, rs2;
    R_type(insn, &rd, &rs1, &rs2);
    printf(":: and\n");

    mach->regs[rd] = mach->regs[rs1] & mach->regs[rs2];
    mach->PC += 4;
}

void do_jalr(struct machine *mach, uint32_t insn)
{
    int rd, rs1, imm;
    I_type(insn, &rd, &rs1, &imm);
    printf(":: jalr\n");

    if (rd != 0){
        mach->regs[rd] = mach->PC + 4;
    }
    mach->PC = (mach->regs[rs1] + imm);
    
}


void execute_instruction(struct machine *mach, uint32_t insn)
{
    if((insn & 0x0000707f) == 0x00005063) /* bge */
        do_bge(mach, insn);
    else if((insn & 0x0000007f) == 0x0000006f) /* jal */
        do_jal(mach, insn);
    else if((insn & 0x0000707f) == 0x00000013)  /* addi */
        do_addi(mach, insn);
    else if((insn & 0xfe00707f) == 0x00000033)  /* add */
        do_add(mach, insn);
    else if((insn & 0xfe00707f) == 0x40000033)  /* sub */
        do_sub(mach, insn);
    else if((insn & 0x0000707f) == 0x00000063)  /* beq */
        do_beq(mach, insn);
    else if((insn & 0x0000707f) == 0x00001063)  /* bne */
        do_bne(mach, insn);
    else if((insn & 0x0000707f) == 0x00004063)  /* blt */
        do_blt(mach, insn);
    else if((insn & 0x0000707f) == 0x00003003)  /* ld */
        do_ld(mach, insn);
    else if((insn & 0x0000707f) == 0x00003023)  /* sd */
        do_sd(mach, insn);
    else if((insn & 0x0000007f) == 0x00000017)  /* aupic */
        do_auipc(mach, insn);
    else if((insn & 0x0000707f) == 0x00005013)  /* srli */
        do_srli(mach, insn);
    else if((insn & 0x0000707f) == 0x00002003)  /* lw */
        do_lw(mach, insn);
    else if((insn & 0x0010007f) == 0x00000073)  /* ecall */
        do_ecall(mach, insn);
    else if((insn & 0x0000707f) == 0x00007033)  /* and */
        do_and(mach, insn);
    else if((insn & 0x0000707f) == 0x00000067)  /* jalr */
        do_jalr(mach, insn);
    else {
        fprintf(stderr, "error: invalid instruction %08x at PC=%08x\n",
            insn, mach->PC);
        exit(1);
    }
}
