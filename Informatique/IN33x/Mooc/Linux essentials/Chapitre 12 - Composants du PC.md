## CPU
Pour voir les infos sur le CPU : 
```bash
arch
```

## RAM
Pour voir le nombre de ram dispo. avec la swap incluse : 
```bash
free
```

#### Options
- -m : Arrondi au mégaoctet
- -g : Arrondi au gigaoctet

## Bus
```bash
lspci
lsusb
```

## Disques durs
```bash
parted
gparted
```
Interface pour visualiser les disque durs (non graphique / graphique)

### MBR (Master Boot Record) partitioning
```bash
fdisk
cfdisk
sfdisk
```

## GPT (GUID Partitioning Table) partitioning
```bash
gdisk
cgdisk
sgdisk
```