# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD$

PORTNAME=	spoofer
PORTVERSION=	0.8a
CATEGORIES=	net
MASTER_SITES=	http://spoofer.caida.org/

MAINTAINER=	jadawin@FreeBSD.org
COMMENT=	Spoofer Project testing software

PLIST_FILES=	bin/spoofer
PORTDOCS=	README CHANGES

HAS_CONFIGURE=	yes

OPTIONS_DEFINE=	DOCS

.include <bsd.port.options.mk>

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.if ${PORT_OPTIONS:MDOCS}
	${MKDIR} ${STAGEDIR}${DOCSDIR}
.for f in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${f} ${STAGEDIR}${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
