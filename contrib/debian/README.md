
Debian
====================
This directory contains files used to package linkcoind/linkcoin-qt
for Debian-based Linux systems. If you compile linkcoind/linkcoin-qt yourself, there are some useful files here.

## linkcoin: URI support ##


linkcoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install linkcoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your linkcoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/linkcoin128.png` to `/usr/share/pixmaps`

linkcoin-qt.protocol (KDE)

