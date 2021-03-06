//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>



@class NSString;

@interface CNInhibitingSchedulerDecorator : NSObject
{
    id _scheduler;
    id _inhibitorFactory;
}


@property(readonly, copy, nonatomic) id inhibitorFactory; // @synthesize inhibitorFactory=_inhibitorFactory;
@property(readonly, nonatomic) id scheduler; // @synthesize scheduler=_scheduler;
@property(readonly) double timestamp;
- (id)afterDelay:(double)arg1 performBlock:(id)arg2 qualityOfService:(unsigned long long)arg3;
- (id)afterDelay:(double)arg1 performBlock:(id)arg2;
- (id)performCancelableBlock:(id)arg1 qualityOfService:(unsigned long long)arg2;
- (id)performCancelableBlock:(id)arg1;
- (void)performBlock:(id)arg1 qualityOfService:(unsigned long long)arg2;
- (void)performBlock:(id)arg1;
- (id)initWithScheduler:(id)arg1 inhibitorFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long hash;
@property(readonly) Class superclass;

@end

