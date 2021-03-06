//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class IDSAuthenticationCertificate, NSData, NSString;

@interface IDSAuthenticationCertificateSignature : NSObject
{
    NSString *_subscriptionIdentifier;
    IDSAuthenticationCertificate *_authenticationCertificate;
    NSData *_signature;
    NSString *_serverVerifiableEncoding;
}


@property(readonly, nonatomic) NSString *serverVerifiableEncoding; // @synthesize serverVerifiableEncoding=_serverVerifiableEncoding;
@property(readonly, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(readonly, nonatomic) IDSAuthenticationCertificate *authenticationCertificate; // @synthesize authenticationCertificate=_authenticationCertificate;
@property(readonly, nonatomic) NSString *subscriptionIdentifier; // @synthesize subscriptionIdentifier=_subscriptionIdentifier;
- (id)description;
- (id)initWithSubscriptionIdentifier:(id)arg1 authenticationCertificate:(id)arg2 signature:(id)arg3 serverVerifiableEncoding:(id)arg4;

@end

