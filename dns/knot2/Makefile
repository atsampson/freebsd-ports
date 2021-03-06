# Created by: Leo Vandewoestijne <freebsd@dns-lab.com>
# $FreeBSD$

PORTNAME=	knot
DISTVERSION=	2.0.0-beta
CATEGORIES=	dns ipv6
MASTER_SITES=	https://secure.nic.cz/files/knot-dns/ \
		http://dns-lab.com/downloads/knot-dns/
PKGNAMESUFFIX=	2

MAINTAINER=	freebsd@dns-lab.com
COMMENT=	High performance authoritative-only DNS server

LICENSE=	GPLv3

LIB_DEPENDS=	libgnutls.so:${PORTSDIR}/security/gnutls \
		libjansson.so:${PORTSDIR}/devel/jansson \
		liblmdb.so:${PORTSDIR}/databases/lmdb \
		libnettle.so:${PORTSDIR}/security/nettle \
		liburcu.so:${PORTSDIR}/sysutils/liburcu

CONFLICTS=	knot-1.* knot1-[0-6].*

USES=		alias libtool pkgconfig tar:xz
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-rundir=/var/run/knot \
		--with-storage=/var/db/knot \
		--with-pkgconfigdir=${PREFIX}/libdata/pkgconfig

.if defined(BATCH) || defined(PACKAGE_BUILDING)
CONFIGURE_ARGS+=	--disable-silent-rules
.endif

INSTALL_TARGET=	install-strip

USE_RC_SUBR=	${PORTNAME}
SUB_FILES=	pkg-message

USERS=		knot
GROUPS=		knot
SUB_LIST+=	USERS="${USERS}" GROUPS="${GROUPS}"

PORTDOCS=	AUTHORS COPYING ChangeLog INSTALL NEWS README THANKS

OPTIONS_DEFINE=			DNSTAP FASTPARSER IDN

DNSTAP_DESC=			dnstap support (see dnstap.info)
DNSTAP_CONFIGURE_ENABLE=	dnstap
DNSTAP_LIB_DEPENDS=		libfstrm.so:${PORTSDIR}/devel/fstrm \
				libprotobuf-c.so:${PORTSDIR}/devel/protobuf-c

FASTPARSER_DESC=		Fast zone parser (demanding compilation)
FASTPARSER_CONFIGURE_ENABLE=	fastparser

IDN_CONFIGURE_WITH=		libidn
IDN_LIB_DEPENDS=		libidn.so:${PORTSDIR}/dns/libidn

post-patch:
	@${REINPLACE_CMD} 's|$$(INSTALL) -d $$(DESTDIR)/\@run_dir\@|#$$(INSTALL) -d $$(DESTDIR)/\@run_dir\@|' \
		${WRKSRC}/src/Makefile.in
	@${REINPLACE_CMD} 's|$$(INSTALL) -d $$(DESTDIR)/\@storage_dir\@|#$$(INSTALL) -d $$(DESTDIR)/\@storage_dir\@|' \
		${WRKSRC}/src/Makefile.in
	@${RM} -rf ${WRKSRC}/src/zscanner/scanner.c

post-install:
	${MV} ${STAGEDIR}${ETCDIR}/knot.sample.conf \
		${STAGEDIR}${ETCDIR}/knot.conf.sample
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.mk>
