# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD$

PORTNAME=	Dancer2
PORTVERSION=	0.160003
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Lightweight yet powerful web application framework

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-App-Cmd>=0:${PORTSDIR}/devel/p5-App-Cmd \
		p5-Capture-Tiny>=0.12:${PORTSDIR}/devel/p5-Capture-Tiny \
		p5-Class-Load>=0:${PORTSDIR}/devel/p5-Class-Load \
		p5-Crypt-URandom>0:${PORTSDIR}/security/p5-Crypt-URandom \
		p5-Config-Any>=0:${PORTSDIR}/devel/p5-Config-Any \
		p5-File-ShareDir-Install>=0:${PORTSDIR}/devel/p5-File-ShareDir-Install \
		p5-Hash-Merge-Simple>=0:${PORTSDIR}/devel/p5-Hash-Merge-Simple \
		p5-HTTP-Body>=0:${PORTSDIR}/www/p5-HTTP-Body \
		p5-HTTP-Date>=0:${PORTSDIR}/www/p5-HTTP-Date \
		p5-HTTP-Headers-Fast>=0:${PORTSDIR}/www/p5-HTTP-Headers-Fast \
		p5-Import-Into>=0:${PORTSDIR}/devel/p5-Import-Into \
		p5-JSON>=0:${PORTSDIR}/converters/p5-JSON \
		p5-MIME-Base64>=0:${PORTSDIR}/converters/p5-MIME-Base64 \
		p5-Moo>=0.09014:${PORTSDIR}/devel/p5-Moo \
		p5-MooX-Types-MooseLike-Numeric>=0:${PORTSDIR}/devel/p5-MooX-Types-MooseLike-Numeric \
		p5-Plack>=1.0029:${PORTSDIR}/www/p5-Plack \
		p5-Plack-Middleware-FixMissingBodyInRedirect>=0:${PORTSDIR}/www/p5-Plack-Middleware-FixMissingBodyInRedirect \
		p5-Plack-Middleware-RemoveRedundantBody>=0:${PORTSDIR}/www/p5-Plack-Middleware-RemoveRedundantBody \
		p5-Return-MultiLevel>=0:${PORTSDIR}/devel/p5-Return-MultiLevel \
		p5-Safe-Isa>=0:${PORTSDIR}/devel/p5-Safe-Isa \
		p5-Template-Tiny>=0:${PORTSDIR}/textproc/p5-Template-Tiny \
		p5-Template-Toolkit>=0:${PORTSDIR}/www/p5-Template-Toolkit \
		p5-URI>=0:${PORTSDIR}/net/p5-URI \
		p5-YAML>=0.86:${PORTSDIR}/textproc/p5-YAML \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-HTTP-Message>=0:${PORTSDIR}/www/p5-HTTP-Message \
		p5-LWP-Protocol-PSGI>=0.06:${PORTSDIR}/www/p5-LWP-Protocol-PSGI \
		p5-LWP-Protocol-https>0:${PORTSDIR}/www/p5-LWP-Protocol-https \
		p5-Test-Fatal>0:${PORTSDIR}/devel/p5-Test-Fatal \
		p5-Test-Memory-Cycle>=0:${PORTSDIR}/devel/p5-Test-Memory-Cycle \
		p5-Test-MockTime>=0:${PORTSDIR}/devel/p5-Test-MockTime \
		p5-Test-TCP>0:${PORTSDIR}/devel/p5-Test-TCP \
		${XS_BUILD_DEPENDS}

OPTIONS_DEFINE=		XS

XS_BUILD_DEPENDS=	p5-CGI-Deurl-XS>=0:${PORTSDIR}/www/p5-CGI-Deurl-XS \
			p5-JSON-XS>=0:${PORTSDIR}/converters/p5-JSON-XS \
			p5-URL-Encode-XS>=0:${PORTSDIR}/www/p5-URL-Encode-XS \
			p5-YAML-LibYAML>=0:${PORTSDIR}/textproc/p5-YAML-LibYAML
XS_RUN_DEPENDS=		${XS_BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
