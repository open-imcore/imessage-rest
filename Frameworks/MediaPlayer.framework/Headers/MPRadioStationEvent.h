//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPMutableRadioStationEvent-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface MPRadioStationEvent : NSObject
{
    NSString *_title;
    NSString *_descriptionText;
    NSDate *_startTime;
    NSDate *_endTime;
}

+ (_Bool)supportsSecureCoding;

@property(copy, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(copy, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBlock:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long hash;
@property(readonly) Class superclass;

@end

