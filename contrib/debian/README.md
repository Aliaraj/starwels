
Debian
====================
This directory contains files used to package starwelsd/starwels-qt
for Debian-based Linux systems. If you compile starwelsd/starwels-qt yourself, there are some useful files here.

## starwels: URI support ##


starwels-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install starwels-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your starwels-qt binary to `/usr/bin`
and the `../../share/pixmaps/starwels128.png` to `/usr/share/pixmaps`

starwels-qt.protocol (KDE)

