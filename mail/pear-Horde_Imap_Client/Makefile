# $FreeBSD$

PORTNAME=	Horde_Imap_Client
PORTVERSION=	2.28.1
CATEGORIES=	mail www pear
PKGNAMEPREFIX=	pear-

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde IMAP abstraction interface

USES=	horde
USE_PHP=	hash
USE_HORDE_RUN=	Horde_Exception \
		Horde_Mail \
		Horde_Mime \
		Horde_Stream \
		Horde_Util

OPTIONS_DEFAULT=	IMAP MBSTRING SASL
OPTIONS_DEFINE=		IMAP MBSTRING SASL
IMAP_DESC=	Require PHP imap extension
MBSTRING_DESC=	Require PHP mbstring extension
SASL_DESC=	Support SASL Authentication

IMAP_USE=	PHP=imap
MBSTRING_USE=	PHP=mbstring
SASL_RUN_DEPENDS=	${PEARDIR}/Auth/SASL.php:${PORTSDIR}/security/pear-Auth_SASL

.include <bsd.port.mk>
