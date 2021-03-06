//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class IDSXPCConnection, NSMutableDictionary, NSObject;

@interface IDSXPCDaemonController : NSObject
{
    IDSXPCConnection *_connection;
    NSObject *_queue;
    NSMutableDictionary *_collaboratorPromiseDictionary;
    BOOL _sync;
    NSMutableDictionary *_syncCollaboratorDictionary;
}

+ (void)performDaemonControllerTask:(id)arg1;
+ (id)weakSharedInstance;

@property(retain, nonatomic) NSMutableDictionary *syncCollaboratorDictionary; // @synthesize syncCollaboratorDictionary=_syncCollaboratorDictionary;
@property(retain, nonatomic) NSMutableDictionary *collaboratorPromiseDictionary; // @synthesize collaboratorPromiseDictionary=_collaboratorPromiseDictionary;
@property(retain, nonatomic) NSObject *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) IDSXPCConnection *connection; // @synthesize connection=_connection;
- (id)_sync_collaboratorWithIdentifier:(id)arg1 errorHandler:(id)arg2 resolverBlock:(id)arg3;
- (id)_collaboratorWithIdentifier:(id)arg1 interface:(id)arg2 timeout:(double)arg3 errorHandler:(id)arg4 resolverBlock:(id)arg5;
- (id)_timingOutDaemonProxyWithTimeout:(double)arg1 errorHandler:(id)arg2;
- (id)_daemonProxyWithErrorHandler:(id)arg1;
- (void)performTask:(id)arg1;
- (id)interalTestingCollaboratorWithErrorHandler:(id)arg1;
- (id)registrationCollaboratorWithErrorHandler:(id)arg1;
- (id)opportunisticCollaboratorWithErrorHandler:(id)arg1;
- (id)reunionSyncCollaboratorWithErrorHandler:(id)arg1;
- (id)pairedDeviceManagerCollaboratorWithErrorHandler:(id)arg1;
- (id)pairingCollaboratorWithTimeout:(double)arg1 errorHandler:(id)arg2;
- (id)pairingCollaboratorWithErrorHandler:(id)arg1;
- (void)activateWithCompletion:(id)arg1;
- (void)dealloc;
- (id)_initWithQueue:(id)arg1 isSync:(BOOL)arg2;
- (id)initSyncControllerWithQueue:(id)arg1;
- (id)initWithQueue:(id)arg1;

@end

