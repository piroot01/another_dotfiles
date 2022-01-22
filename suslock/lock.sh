#!/bin/sh
#
# /lib/elogind/system-sleep/lock.sh
# Lock before suspend integration with elogind

username=tomas
userhome=/home/$username
export XAUTHORITY="$userhome/.Xauthority"
export DISPLAY=":0.0"


case "${1}" in
	pre)
		su $username -c "slock" &
		sleep 1s;
		;;
esac
