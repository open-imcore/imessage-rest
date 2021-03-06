//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMChatItemRules-Protocol.h"
#import "IMInlineReplyController.h"

@class IMChat, IMChatItem, NSArray, NSMutableArray, NSString, IMMessageItem;

@interface IMTranscriptChatItemRules : NSObject
{
    IMChat *_chat;
    NSArray *_items;
    NSMutableArray *_chatItems;
    IMChatItem *_nextStaleChatItem;
}

+ (BOOL)testShouldAppendNumberChanged:(id)arg1 previousItem:(id)arg2 showAllChanges:(BOOL)arg3;
+ (BOOL)testShouldShowSMSSpamForChat:(id)arg1 items:(id)arg2;
+ (BOOL)testShouldShowReportSpamForChat:(id)arg1 items:(id)arg2;
- (id)_initWithChat:(id)arg1;
- (IMMessageItem*)_itemWithChatItemsDeleted:(id)arg1 fromItem:(id)arg2;
- (BOOL)_shouldReloadChatItem:(id)arg1 oldChatItem:(id)arg2;
- (BOOL)_shouldReloadChatItemWithAssociatedChatItems:(id)arg1 oldAssociatedChatItems:(id)arg2;
- (void)_processChatItemsForAttribution:(id)arg1;
- (void)_processChatItemsForReplayButton:(id)arg1;
- (id)_effectControlForChatItem:(id)arg1;
- (id)_attributionChatItemForChatItem:(id)arg1;
- (BOOL)_shouldDisplayAttributionInfo:(id)arg1;
- (void)_processChatItemsForBreadcrumbs:(id)arg1;
- (void)_didProcessChatItems:(id)arg1;
- (BOOL)_shouldRegenerateChatItemsForItem:(id)arg1 previousItem:(id)arg2 oldPreviousItem:(id)arg3;
- (id)_chatItemsForItem:(id)arg1 previousItem:(id)arg2;
- (id)_nextStaleChatItem;
- (void)_setNextStaleChatItem:(id)arg1;
- (id)_chatItems;
- (void)_setItems:(id)arg1;
- (NSArray*)_items;
- (BOOL)_shouldShowEffectPlayButtonForMessage:(id)arg1;
- (BOOL)shouldShowExpressiveMessageTextAsText:(id)arg1;
- (BOOL)shouldShowRaiseMessageStatus;
- (id)chatItemForIMChatItem:(id)arg1;
- (id)testChatItems;
- (IMInlineReplyController*) inlineReplyController API_AVAILABLE(macos(10.16), ios(14.0), watchos(7.0));

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long hash;
@property(readonly) Class superclass;

@end

