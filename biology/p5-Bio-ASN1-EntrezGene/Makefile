# Created by: Mauricio Herrera Cuadra <mauricio@arareko.net>
# $FreeBSD$

PORTNAME=	Bio-ASN1-EntrezGene
PORTVERSION=	1.70
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES=	biology perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:CJFIELDS
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Regular expression-based Perl Parser for NCBI Entrez Gene

BUILD_DEPENDS=	p5-bioperl>=0:${PORTSDIR}/biology/p5-bioperl
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
