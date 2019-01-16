source .bashrc

# additional environment variables
PATH=$PATH:~/usr/bin
MANPATH=$MANPATH:~/usr/share/man
PKG_CONFIG_PATH=~/usr/lib/pkgconfig:~/usr/share/pkgconfig

# proper character encoding
LANG=DE_DE
LC_CTYPE="DE_DE.UTF-8"

# clear logon message
clear

# resume/create screen session
screen -ls >/dev/null && screen -d -RR

