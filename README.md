## Just another DWM rice

This is custom dwm dotfiles and dmw buid files as well. Entire color scheme is based on `gruvbox-dark` theme.

### Sucklesses build files

The files are located in `.config/suckless/`. The status bar is powered by `dwmblocks` and locker by `slock`.

### Touchpad tapping

If you wish to use touchpad tap move `30.touchpad.conf` into `/etc/X11/xorg.conf.d`.

### Elogind suspend and slock

If you want to lock the screene while going to suspend. Copy `suslock/lock.sh` into `/lib/elogind/system-sleep/lock.sh`