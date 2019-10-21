libterminfo
===========
`libterminfo` is a port of the
[NetBSD](https://www.netbsd.org/) terminfo library.

It is designed to be lightweight and embeddable into programs
where you do not want or have ncurses.

`libterminfo` is known to work with
[mg](https://github.com/ibara/mg/).

It comes with a `Makefile` designed for
[OpenBSD](https://www.openbsd.org/)
and a `Makefile.POSIX` for everything else.

`libterminfo` has a built-in termcap database with entries
for ansi, dumb, rxvt-unicode-256color, screen, screen-256color,
st, tmux, tmux-256color, vt100, vt220, wsvt25, xtern, and
xterm-256color terminals, which should handle the vast majority
of cases. `libterminfo` comes with the tools needed to add
additional termcap entries, if desired.

License
-------
BSD. See individual files for details.
