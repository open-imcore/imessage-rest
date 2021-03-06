//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NSObject;

@interface RadiosPreferences : NSObject
{
    struct __SCPreferences *_prefs;
    int _applySkipCount;
    id _delegate;
    BOOL _isCachedAirplaneModeValid;
    BOOL _cachedAirplaneMode;
    NSObject *_dispatchQueue;
    NSObject *radios_prefs_log;
    BOOL notifyForExternalChangeOnly;
}

@property(nonatomic) BOOL notifyForExternalChangeOnly; // @synthesize notifyForExternalChangeOnly;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void)setCallback:(id)arg1 withContext:(id)arg2;
- (void)setValue:(void *)arg1 forKey:(id)arg2;
- (void *)getValueWithLockForKey:(id)arg1;
- (void *)getValueForKey:(id)arg1;
- (void)synchronize;
- (void)notifyTarget:(unsigned int)arg1;
- (void)initializeSCPrefs:(id)arg1;
- (void)refresh;
- (void)setTelephonyState:(BOOL)arg1 fromBundleID:(id)arg2;
- (BOOL)telephonyStateWithBundleIdentifierOut:(id )arg1;
- (void)setAirplaneModeWithoutMirroring:(BOOL)arg1;
@property(nonatomic) BOOL airplaneMode;
- (void)dealloc;
- (oneway void)release;
- (id)init;
- (id)initWithQueue:(id)arg1;

@end

