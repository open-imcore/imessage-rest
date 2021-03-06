//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import <Foundation/Foundation.h>

@class NSArray, NSString;

@interface CNApplicationProxy : NSObject
{
    NSString *_applicationIdentifier;
    NSString *_teamIdentifier;
    NSString *_localizedName;
    NSArray *_activityTypes;
}

+ (BOOL)supportsSecureCoding;

@property(copy, nonatomic) NSArray *activityTypes; // @synthesize activityTypes=_activityTypes;
@property(copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(copy, nonatomic) NSString *teamIdentifier; // @synthesize teamIdentifier=_teamIdentifier;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithApplicationIdentifier:(id)arg1 teamIdentifier:(id)arg2 localizedName:(id)arg3 activityTypes:(id)arg4;
- (id)initWithLSApplicationProxy:(id)arg1;
- (id)init;

@end

