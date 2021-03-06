//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

@class CNCancelationToken;

@interface _CNGeneratorObservable : CNObservable
{
    id _state;
    id _condition;
    id _nextState;
    id _resultSelector;
    id _delay;
    id _scheduler;
    id _cancelable;
}


- (void)updateState;
- (void)sendCurrentStateToObserver:(id)arg1;
- (BOOL)isCanceled;
- (BOOL)isFinished;
- (void)scheduleNextResultForObserver:(id)arg1;
- (void)sendResultsToObserver:(id)arg1;
- (id)subscribe:(id)arg1;
- (id)initWithInitialState:(id)arg1 condition:(id)arg2 nextState:(id)arg3 resultSelector:(id)arg4 delay:(id)arg5 scheduler:(id)arg6;

@end

