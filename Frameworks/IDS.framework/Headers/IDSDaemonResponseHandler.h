//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NSObject;

@interface IDSDaemonResponseHandler : NSObject
{
    id _block;
    NSObject *_queue;
}


@property(readonly, nonatomic) NSObject *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) id block; // @synthesize block=_block;
- (id)initWithBlock:(id)arg1 queue:(id)arg2;

@end

