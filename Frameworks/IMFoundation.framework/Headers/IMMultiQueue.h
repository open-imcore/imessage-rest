//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NSMutableDictionary, NSObject;

@interface IMMultiQueue : NSObject
{
    NSMutableDictionary *_queueMap;
    NSObject *_queue;
}

- (id)loggableOverviewForKey:(id)arg1;
- (id)loggableOverview;
- (BOOL)_addBlock:(id)arg1 withGUID:(id)arg2 forKey:(id)arg3 description:(id)arg4;
- (BOOL)addBlock:(id)arg1 forKey:(id)arg2 description:(id)arg3;
- (BOOL)addBlock:(id)arg1 withTimeout:(double)arg2 forKey:(id)arg3 description:(id)arg4;
- (void)_popEnqueuedBlockWithGUID:(id)arg1 key:(id)arg2;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (id)init;

@end

