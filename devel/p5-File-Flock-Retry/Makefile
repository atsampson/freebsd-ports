# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD$

PORTNAME=	File-Flock-Retry
PORTVERSION=	0.59
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Yet another flock module

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Rinci>=1.1.0:${PORTSDIR}/devel/p5-Rinci
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-File-Slurp-Tiny>=0:${PORTSDIR}/devel/p5-File-Slurp-Tiny \
		p5-File-chdir>=0:${PORTSDIR}/devel/p5-File-chdir

USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
