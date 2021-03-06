//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class CXCallObserver, NSDate;

@interface IMCallMonitor : NSObject
{
    CXCallObserver *_callCenter;
    BOOL _wasOnCall;
    NSDate *_lastCallDate;
}

+ (id)sharedInstance;
@property(readonly, retain, nonatomic) NSDate *dateLastCallEnded; // @synthesize dateLastCallEnded=_lastCallDate;
@property(readonly, nonatomic) BOOL isOnCall;
- (void)dealloc;
- (id)init;

@end

