# Observation et monitoring des process
#### 1.
```bash
top -o =RES
```

#### 2.
systemd

Pour trouver le processus on peut faire les commandes suivantes : 

```bash
top -p =1
```
Renvoie la ligne associé au processus de PID 1

```bash
top -o =-PID
```
Le $-$ trie dans l'ordre croissant
Les processus sont triés dans l'ordre croissant

```bash
top | grep systemd
```

#### 3.
##### Contenu d'un ficher associé a son PID dans /proc
ls: cannot read symbolic link 'cwd': Permission denied  
ls: cannot read symbolic link 'root': Permission denied  
ls: cannot read symbolic link 'exe': Permission denied  
arch_status         fd                 net            setgroups  
attr                fdinfo             ns             smaps  
autogroup           gid_map            numa_maps      smaps_rollup  
auxv                io                 oom_adj        stack  
cgroup              ksm_merging_pages  oom_score      stat  
clear_refs          ksm_stat           oom_score_adj  statm  
cmdline             limits             pagemap        status  
comm                loginuid           patch_state    syscall  
coredump_filter     map_files          personality    task  
cpu_resctrl_groups  maps               projid_map     timens_offsets  
cpuset              mem                root           timers  
cwd                 mountinfo          sched          timerslack_ns  
environ             mounts             schedstat      uid_map  
exe                 mountstats         sessionid      wchan


##### Nombre de fd de systemd
```bash
ls /proc/1/fd
```
$$71$$


##### Description de l'espace mémoire :
/proc/pid/mem


#### 4.
Un seul : 
```bash
top | grep R
```

??

#### 5.
- $-s$
- $-g$
- $-p$
- $-C$

##### 6.
- $0$
- 


```bash

```