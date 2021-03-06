//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import "CNObserver.h"

@class CNObservableContractEnforcement, CNVirtualScheduler, NSArray, NSMutableArray, NSString;

@interface CNTestableObserver : NSObject
{
    CNVirtualScheduler *_scheduler;
    NSMutableArray *_results;
    CNObservableContractEnforcement *_enforcement;
}

+ (id)observerWithScheduler:(id)arg1;

@property(readonly) NSArray *results; // @synthesize results=_results;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidComplete;
- (void)observerDidReceiveResult:(id)arg1;
@property(readonly) NSArray *resultValues;
- (id)initWithScheduler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long hash;
@property(readonly) Class superclass;

@end

