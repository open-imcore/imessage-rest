//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPAVRoutingControllerDelegate-Protocol.h>

@class AVPlayer, AVPlayerItem, AVQueuePlayer, MPAVRoute, MPAVRoutingController, NSArray, NSError, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface MPQueuePlayer : NSObject
{
    NSObject *_accessQueue;
    unsigned long long _allowsExternalPlaybackRevisionID;
    MPAVRoutingController *_routingController;
    AVPlayerItem *_currentItem;

    _Bool _isExternalPlaybackActive;
    _Bool _pausedForPlaybackQueueTransaction;
    MPAVRoute *_lastPickedRoute;
    id _playbackQueueCommitHandler;
    long long _playbackQueueTransactionCount;
    AVQueuePlayer *_player;
    NSMutableArray *_queuedOperations;
    float _rate;
    float _rateBeforePlaybackQueueTransaction;
    _Bool _routeDidChangeDuringPlaybackQueueTransaction;
    long long _status;
    long long _defaultItemEQPresetType;
    _Bool _outputObscuredDueToInsufficientExternalProtection;
    unsigned long long _usesAudioOnlyModeForExternalPlaybackRevisionID;
    unsigned long long _usesExternalPlaybackWhileExternalScreenIsActiveRevisionID;
    float _rawRate;
}


@property(readonly, nonatomic) float rawRate; // @synthesize rawRate=_rawRate;
@property(nonatomic) long long defaultItemEQPresetType; // @synthesize defaultItemEQPresetType=_defaultItemEQPresetType;
@property(copy, nonatomic) id playbackQueueCommitHandler; // @synthesize playbackQueueCommitHandler=_playbackQueueCommitHandler;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (float)_userVolume;
- (void)_setWantsVolumeChangesWhenPausedOrInactive:(_Bool)arg1;
- (void)_setUserVolume:(float)arg1;
- (void)_setStoppingFadeOutDuration:(float)arg1;
- (void)_setPreferredLanguageList:(id)arg1;
- (void)_setExpectedAssetTypes:(id)arg1;
@property(copy, nonatomic) NSString *externalPlaybackVideoGravity;
- (void)_setEQPreset:(int)arg1;
- (void)_setClientName:(id)arg1;
- (void)_setCALayerDestinationIsTVOut:(_Bool)arg1;
- (_Bool)_resumePlayback:(double)arg1;
- (void)_currentItemDidChangeNotification:(id)arg1;
- (_Bool)_CALayerDestinationIsTVOut;
@property(readonly, nonatomic) _Bool outputObscuredDueToInsufficientExternalProtection;
@property(readonly, nonatomic) id playerAVAudioSession;
@property(readonly, nonatomic) _Bool usesExternalPlaybackWhileExternalScreenIsActive;
@property(readonly, nonatomic) _Bool usesAudioOnlyModeForExternalPlayback;
@property(readonly, nonatomic) long long status;
- (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(_Bool)arg1 shouldIgnorePlaybackQueueTransactions:(_Bool)arg2;
- (void)setUsesAudioOnlyModeForExternalPlayback:(_Bool)arg1 shouldIgnorePlaybackQueueTransactions:(_Bool)arg2;
@property(nonatomic) float rate;
- (void)setMediaSelectionCriteria:(id)arg1 forMediaCharacteristic:(id)arg2;
- (void)setAllowsExternalPlayback:(_Bool)arg1 shouldIgnorePlaybackQueueTransactions:(_Bool)arg2;
@property(nonatomic) long long actionAtItemEnd;
- (void)seekToTime:(id)arg1 toleranceBefore:(id)arg2 toleranceAfter:(id)arg3 completionHandler:(id)arg4;
- (void)seekToTime:(id)arg1 toleranceBefore:(id)arg2 toleranceAfter:(id)arg3;
- (void)seekToTime:(id)arg1;
- (void)setCurrentPlaybackQueueTransactionDisplayTime:(id)arg1;
- (void)removeTimeObserver:(id)arg1;
- (void)removeAllItems;
- (void)removeItem:(id)arg1;
- (void)prepareItem:(id)arg1 withCompletionHandler:(id)arg2;
@property(readonly, nonatomic) AVPlayer *_player;
- (void)play;
- (void)pause;
@property(readonly, nonatomic) NSArray *items;
@property(readonly, nonatomic, getter=isExternalPlaybackActive) _Bool externalPlaybackActive;
- (void)insertItem:(id)arg1 afterItem:(id)arg2;
@property(readonly, nonatomic) long long _externalProtectionStatus;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) long long externalPlaybackType;
- (id )currentTime;
@property(readonly, nonatomic) AVPlayerItem *currentItem;
- (void)commitPlaybackQueueTransaction;
@property(readonly, nonatomic) _Bool isPlaybackQueueTransactionActive;
- (void)beginPlaybackQueueTransactionAndPause:(_Bool)arg1;
@property(readonly, nonatomic) _Bool allowsExternalPlayback;
- (void)advanceToNextItem;
- (id)addPeriodicTimeObserverForInterval:(id)arg1 queue:(id)arg2 usingBlock:(id)arg3;
- (id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long hash;
@property(readonly) Class superclass;

@end

