//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import "CNEntitlementVerification.h"

@class NSString;

@interface CNEntitlementVerifier : NSObject
{
}

+ (BOOL)auditToken:(id)arg1 isFirstOrSecondPartyWithError:(id )arg2;
+ (BOOL)secTask:(struct __SecTask *)arg1 hasBooleanEntitlement:(id)arg2 error:(id )arg3;
+ (BOOL)auditToken:(id)arg1 hasBooleanEntitlement:(id)arg2 error:(id )arg3;
+ (BOOL)currentProcessHasBooleanEntitlement:(id)arg1 error:(id )arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long hash;
@property(readonly) Class superclass;

@end

