//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NSString;

@protocol CNEntitlementVerification
+ (BOOL)auditToken:(id)arg1 isFirstOrSecondPartyWithError:(id )arg2;
+ (BOOL)auditToken:(id)arg1 hasBooleanEntitlement:(NSString *)arg2 error:(id )arg3;
+ (BOOL)currentProcessHasBooleanEntitlement:(NSString *)arg1 error:(id )arg2;
@end

