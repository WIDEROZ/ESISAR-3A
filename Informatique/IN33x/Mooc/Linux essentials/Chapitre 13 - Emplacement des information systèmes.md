# /proc
> [!Attention]
> root ne peut pas écrire dans les fichiers de proc
> Si on veut écrire des changements temporaires (jusqu'au redémarrage du PC) dans le kernel il faut modifier des fichiers dans : /proc/sys
> Si on veut que cela soit permanent il faut écrire dans le fichier : /etc/

- /proc/cmdline : Informations donnés au kernel lorsqu'il à été boot
- /proc/meminfo : Information sur la mémoire utilisé par le kernel
- /proc/modules : Modules supplémentaires utilisés par le kernel

# Après le boot
#### System-V
- /sbin/init : Après que le kernel ait fini le boot le processus init est lancé

#### Systemd
- /bin/systemd -> /lib/systemd/systemd : Après que le kernel ait fini le boot le processus init est lancé

#### Arbre des processus
```bash
pstree
```

# ```ps```
