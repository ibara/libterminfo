#	$OpenBSD$

LIB=	terminfo
SRCS=	term.c ti.c setupterm.c curterm.c tparm.c tputs.c
SRCS+=	compile.c hash.c termcap.c mi_vector_hash.c cdbr.c

SH=	/bin/sh

CLEANFILES+=	tic nbperf

tic: libterminfo.a
	${CC} ${CFLAGS} ${LDFLAGS} -o tic tic.c cdbw.c libterminfo.a

regen-database: tic
	${SH} genterms terminfo_term.h /usr/share/terminfo > compiled_terms.c

nbperf:
	${CC} ${CFLAGS} ${LDFLAGS} -o nbperf graph2.c graph3.c \
		nbperf-bdz.c nbperf-chm.c nbperf-chm3.c nbperf.c \
			mi_vector_hash.c

.include <bsd.lib.mk>
