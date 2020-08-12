//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SocialUI/SOChatViewController.h>

#import "NSPopoverDelegate.h"
#import "NSTouchBarDelegate.h"
#import "QLPreviewPanelDataSource.h"
#import "QLPreviewPanelDelegate.h"
#import "SOStickerViewerControllerDelegate.h"

@class IMAggregateAcknowledgmentChatItem, IMChat, IMMessagePartChatItem, NSOrderedSet, NSScrollView, NSString, NSTouchBarItem, SOInputLineViewController, SOStickerViewerController;

@interface SOTranscriptViewController : SOChatViewController <QLPreviewPanelDelegate, QLPreviewPanelDataSource, NSPopoverDelegate, NSTouchBarDelegate, SOStickerViewerControllerDelegate>
{
    unsigned long long _mousedownCount;
    NSTouchBarItem *_acknowledgementsTouchBarItem;
    IMMessagePartChatItem *_actionableMessage;
    SOInputLineViewController *_inputLineViewController;
    NSString *_displayedAckPickerChatItemGUID;
    IMAggregateAcknowledgmentChatItem *_groupAcknowledgmentsPoll;
    SOStickerViewerController *_stickerViewerController;
    NSOrderedSet *_selectedMessages;
    NSOrderedSet *_selectedChatItemGUIDs;
}

+ (BOOL)classIsRegistered:(Class)arg1;
+ (id)registeredTranscriptClasses;
+ (void)setDefaultTranscriptViewControllerName:(id)arg1;
+ (id)defaultTranscriptViewControllerName;
+ (void)registerTranscriptClass:(Class)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSOrderedSet *selectedChatItemGUIDs; // @synthesize selectedChatItemGUIDs=_selectedChatItemGUIDs;
@property(copy, nonatomic) NSOrderedSet *selectedMessages; // @synthesize selectedMessages=_selectedMessages;
@property(nonatomic) SOStickerViewerController *stickerViewerController; // @synthesize stickerViewerController=_stickerViewerController;
@property(readonly) IMAggregateAcknowledgmentChatItem *groupAcknowledgmentsPoll; // @synthesize groupAcknowledgmentsPoll=_groupAcknowledgmentsPoll;
@property(copy, nonatomic) NSString *displayedAckPickerChatItemGUID; // @synthesize displayedAckPickerChatItemGUID=_displayedAckPickerChatItemGUID;
@property __weak SOInputLineViewController *inputLineViewController; // @synthesize inputLineViewController=_inputLineViewController;
- (void)stickerViewerController:(id)arg1 willDeleteStickers:(id)arg2;
- (void)showStickerViewer:(id)arg1;
- (id)makeTouchBar;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)chatDisplayControllerDidChange:(id)arg1;
- (void)chatDisplayControllerWillChange:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)previewPanel:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)_updateTouchBar:(id)arg1;
- (void)_updateAcknowledgementTouchBarItem;
- (void)_acknowledgeFromDFR:(id)arg1;
- (BOOL)_anyUnsavedMessageSelected;
- (void)_commonSOTranscriptViewControllerInit;
- (void)updateQLPreviewPanel:(id)arg1;
- (void)dismissAcknowledgmentsWithAnimation:(BOOL)arg1;
- (BOOL)canShowAcknowledgmentPickerForChatItemGUID:(id)arg1;
- (BOOL)isLongClicking;
- (void)endLongClick;
- (void)beginLongClick;
- (void)endChanges;
- (void)beginChanges;
- (unsigned long long)maximumNumberOfMessagesVisibleForHeight:(double)arg1;
- (void)copySelectionIntoPasteboard:(id)arg1;
- (void)highlightSearchString:(id)arg1;
- (void)scrollToEndSmoothly:(BOOL)arg1;
@property(readonly, nonatomic) double distanceFromBottom;
@property(readonly, nonatomic) BOOL shouldPinToBottom;
- (BOOL)lastMessageIsVisible;
- (void)markAllMessagesAsRead;
- (void)_clearUnreadMessagesIfVisible:(id)arg1;
- (void)clearUnreadMessagesIfVisible;
- (void)endFullScreenEffectPlayback;
- (void)beginFullScreenEffectPlayback;
@property(retain) IMMessagePartChatItem *actionableMessage; // @synthesize actionableMessage=_actionableMessage;
- (void)deselectMessage:(id)arg1;
- (void)selectMessage:(id)arg1;
- (void)deselectAll;
- (void)_chatDisplayControllerChatDidChange:(id)arg1;
- (void)_chatDisplayControllerChatWillChange:(id)arg1;
- (void)updateAttachments;
- (void)processChatItemChanges:(id)arg1;
- (void)didFinishProcessingChatItemsChange;
- (void)chatItemsDidChange:(id)arg1;
- (void)chatDidChange:(id)arg1;
- (void)chatWillChange:(id)arg1;
@property(readonly) IMMessagePartChatItem *acknowledgeableChatItem;
@property(readonly) NSTouchBarItem *acknowledgementsTouchBarItem; // @synthesize acknowledgementsTouchBarItem=_acknowledgementsTouchBarItem;
@property(readonly, nonatomic) IMChat *chat;
@property double bottomOverlap; // @dynamic bottomOverlap;
@property(readonly, getter=isDisplayingAcknowledgmentPicker) BOOL displayingAcknowledgmentPicker;
@property double topOverlap; // @dynamic topOverlap;
@property(readonly) NSScrollView *scrollView; // @dynamic scrollView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
