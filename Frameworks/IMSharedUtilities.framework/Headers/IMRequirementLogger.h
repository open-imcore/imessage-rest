//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface IMRequirementLogger : NSObject
{
    unsigned char _loggingLevel;
    BOOL _throwFailures;
    const char *_categoryOverride;
}

+ (id)sharedInstance;
+ (void)__setSingleton__im:(id)arg1;
+ (id)__singleton__im;
@property BOOL throwFailures; // @synthesize throwFailures=_throwFailures;
@property unsigned char loggingLevel; // @synthesize loggingLevel=_loggingLevel;
- (struct IMRequirementFailed_t)requirementDidFail:(const char *)arg1;
- (void)dealloc;
@property const char *categoryOverride; // @synthesize categoryOverride=_categoryOverride;
- (id)description;
- (void)updateSettingsFromUserDefaults;
- (id)init;

@end
