//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SocialUI/SOChatViewController.h>

#import "AVAudioRecorderDelegate.h"
#import "CPKPopoverDelegate.h"
#import "NSTouchBarDelegate.h"
#import "NSUserInterfaceValidations.h"
#import "SOInputLineDelegate.h"
#import "SOTranscriptEffectPickerDelegate.h"

@class AVAudioPlayer, AVAudioRecorder, CPKPopover, IMAccount, NSAttributedString, NSButton, NSLayoutConstraint, NSPopover, NSStackView, NSString, NSTextField, NSTextStorage, NSView, SOFlexibleScrollView, SOInputLine, SOInputLineContainer, SOInputVibrantView, SOPreviewingWaveformContainerView, SORecordingWaveformContainerView, SORecordingWaveformView;

@interface SOInputLineViewController : SOChatViewController <CPKPopoverDelegate, NSTouchBarDelegate, SOTranscriptEffectPickerDelegate, NSUserInterfaceValidations, SOInputLineDelegate, AVAudioRecorderDelegate>
{
    CPKPopover *_smileyPopover;
    BOOL _delegateRespondsToInputLineTextDidChange;
    BOOL _delegateRespondsToInputLineDidEnter;
    BOOL _delegateRespondsToUndoManager;
    BOOL _alwaysHideAdditionalControls;
    BOOL _showsSmileyButton;
    BOOL _showsEffectPickerButton;
    BOOL _showAudioMessageButton;
    BOOL _showStopRecordingButton;
    int _viewControllerMode;
    id <SOInputLineViewControllerDelegate> _delegate;
    SOInputLineContainer *_inputLineContainer;
    SOFlexibleScrollView *_scrollView;
    SOInputLine *_inputLine;
    SOInputVibrantView *_vibrantView;
    double _leadingTextInputMargin;
    double _trailingTextInputMargin;
    NSButton *_smileyButton;
    NSButton *_effectPickerButton;
    NSLayoutConstraint *_minimumHeightConstraint;
    NSLayoutConstraint *_maximumHeightConstraint;
    NSLayoutConstraint *_fontSubstitutionMinimumHeight;
    NSLayoutConstraint *_smileyButtonWidthConstraint;
    NSLayoutConstraint *_effectPickerButtonWidthConstraint;
    NSLayoutConstraint *_inputBorderContentsTrailingConstraint;
    IMAccount *_watchedAccount;
    SORecordingWaveformView *_waveformView;
    NSTextField *_audioRecordingTimestamp;
    NSButton *_audioMessageButton;
    NSView *_audioRecordingView;
    SORecordingWaveformContainerView *_recordingView;
    NSButton *_stopRecordingButton;
    NSView *_audioPreviewView;
    SOPreviewingWaveformContainerView *_previewingView;
    NSButton *_cancelRecordingButton;
    NSButton *_sendRecordingButton;
    AVAudioRecorder *_recorder;
    AVAudioPlayer *_player;
    NSPopover *_effectPickerPopover;
    NSString *_expressiveSendStyleID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *expressiveSendStyleID; // @synthesize expressiveSendStyleID=_expressiveSendStyleID;
@property(nonatomic) __weak NSPopover *effectPickerPopover; // @synthesize effectPickerPopover=_effectPickerPopover;
@property(retain, nonatomic) AVAudioPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AVAudioRecorder *recorder; // @synthesize recorder=_recorder;
@property(retain, nonatomic) NSButton *sendRecordingButton; // @synthesize sendRecordingButton=_sendRecordingButton;
@property(retain, nonatomic) NSButton *cancelRecordingButton; // @synthesize cancelRecordingButton=_cancelRecordingButton;
@property(retain, nonatomic) SOPreviewingWaveformContainerView *previewingView; // @synthesize previewingView=_previewingView;
@property __weak NSView *audioPreviewView; // @synthesize audioPreviewView=_audioPreviewView;
@property(retain, nonatomic) NSButton *stopRecordingButton; // @synthesize stopRecordingButton=_stopRecordingButton;
@property(retain, nonatomic) SORecordingWaveformContainerView *recordingView; // @synthesize recordingView=_recordingView;
@property __weak NSView *audioRecordingView; // @synthesize audioRecordingView=_audioRecordingView;
@property __weak NSButton *audioMessageButton; // @synthesize audioMessageButton=_audioMessageButton;
@property(retain, nonatomic) NSTextField *audioRecordingTimestamp; // @synthesize audioRecordingTimestamp=_audioRecordingTimestamp;
@property(retain, nonatomic) SORecordingWaveformView *waveformView; // @synthesize waveformView=_waveformView;
@property(retain, nonatomic) IMAccount *watchedAccount; // @synthesize watchedAccount=_watchedAccount;
@property(nonatomic) __weak NSLayoutConstraint *inputBorderContentsTrailingConstraint; // @synthesize inputBorderContentsTrailingConstraint=_inputBorderContentsTrailingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *effectPickerButtonWidthConstraint; // @synthesize effectPickerButtonWidthConstraint=_effectPickerButtonWidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *smileyButtonWidthConstraint; // @synthesize smileyButtonWidthConstraint=_smileyButtonWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *fontSubstitutionMinimumHeight; // @synthesize fontSubstitutionMinimumHeight=_fontSubstitutionMinimumHeight;
@property(nonatomic) __weak NSLayoutConstraint *maximumHeightConstraint; // @synthesize maximumHeightConstraint=_maximumHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *minimumHeightConstraint; // @synthesize minimumHeightConstraint=_minimumHeightConstraint;
@property(retain, nonatomic) NSButton *effectPickerButton; // @synthesize effectPickerButton=_effectPickerButton;
@property(retain, nonatomic) NSButton *smileyButton; // @synthesize smileyButton=_smileyButton;
@property(nonatomic) BOOL showStopRecordingButton; // @synthesize showStopRecordingButton=_showStopRecordingButton;
@property(nonatomic) BOOL showAudioMessageButton; // @synthesize showAudioMessageButton=_showAudioMessageButton;
@property(nonatomic) int viewControllerMode; // @synthesize viewControllerMode=_viewControllerMode;
@property(nonatomic) BOOL showsEffectPickerButton; // @synthesize showsEffectPickerButton=_showsEffectPickerButton;
@property(nonatomic) BOOL showsSmileyButton; // @synthesize showsSmileyButton=_showsSmileyButton;
@property(nonatomic) BOOL alwaysHideAdditionalControls; // @synthesize alwaysHideAdditionalControls=_alwaysHideAdditionalControls;
@property(nonatomic) double trailingTextInputMargin; // @synthesize trailingTextInputMargin=_trailingTextInputMargin;
@property(nonatomic) double leadingTextInputMargin; // @synthesize leadingTextInputMargin=_leadingTextInputMargin;
@property(retain, nonatomic) SOInputVibrantView *vibrantView; // @synthesize vibrantView=_vibrantView;
@property(retain, nonatomic) SOInputLine *inputLine; // @synthesize inputLine=_inputLine;
@property(retain, nonatomic) SOFlexibleScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) SOInputLineContainer *inputLineContainer; // @synthesize inputLineContainer=_inputLineContainer;
@property(nonatomic) __weak id <SOInputLineViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)makeTouchBar;
- (void)doCommandBySelector:(SEL)arg1;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)chatDisplayControllerDidChange:(id)arg1;
- (void)chatDisplayControllerWillChange:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (void)textDidChange:(id)arg1;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (id)textView:(id)arg1 completions:(id)arg2 forPartialWordRange:(struct _NSRange)arg3 indexOfSelectedItem:(long long *)arg4;
- (id)textView:(id)arg1 menu:(id)arg2 forEvent:(id)arg3 atIndex:(unsigned long long)arg4;
- (id)textView:(id)arg1 shouldChangeTypingAttributes:(id)arg2 toAttributes:(id)arg3;
- (void)textViewDidChangeSelection:(id)arg1;
- (id)undoManagerForTextView:(id)arg1;
- (void)inputLineRequestedNextOutgoingMessage:(id)arg1;
- (void)inputLineRequestedPriorOutgoingMessage:(id)arg1;
- (BOOL)inputLine:(id)arg1 didChangeSignificantly:(int)arg2;
- (BOOL)inputLineShouldInsertNewLine:(id)arg1;
- (id)defaultTypingAttributesForInputLine:(id)arg1;
- (BOOL)inputLine:(id)arg1 canAttachFilesAtURLs:(id)arg2;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)audioRecorderDidFinishRecording:(id)arg1 successfully:(BOOL)arg2;
- (void)_appearanceChanged:(id)arg1;
- (void)_updateTouchBar:(id)arg1;
- (void)_updateEdgeInsets;
- (void)_cleanupRecording;
- (void)sendRecording;
- (void)cancelRecording;
- (void)stopRecording;
- (void)_updateVoiceMetering;
- (void)_inputLineUpdateVoiceMetering:(id)arg1;
- (void)_inputLineUpdateTimeStamp:(id)arg1;
- (void)_updateAudioTimeStamp:(id)arg1;
- (void)startRecording;
- (void)_transitionInputLineIntoMessaging;
- (void)_transitionInputLineIntoPreviewRecording;
- (void)_transitionInputLineIntoRecording;
- (void)updateAudioMessageButtonForAppearance;
- (void)_updateAudioMessageButtonVisibilty;
- (void)_updateEffectPickerButtonEnabledState;
- (void)_updateEffectPickerButtonVisibility;
- (void)_updateSmileyButtonVisibility;
- (void)_didResignWindowChange:(id)arg1;
- (void)_chatDisplayControllerSendingAccountDidChange;
- (void)_chatDisplayControllerRecipientsDidChange;
- (void)_updatePlaceholderText;
- (void)applyMessageFormatToInputLine;
- (void)resetInputLine;
- (void)clearInputLine;
- (void)stopRecording:(id)arg1;
- (void)sendRecording:(id)arg1;
- (void)cancelRecording:(id)arg1;
- (void)selectVoiceMessage:(id)arg1;
- (void)showEffectsPicker:(id)arg1;
- (void)effectPickerWasCancelled:(id)arg1;
- (void)effectPicker:(id)arg1 didPickEffect:(id)arg2;
- (id)effectPickerGetTextToSend:(id)arg1;
- (void)showSmileyPicker:(id)arg1;
- (void)showStickerPicker:(id)arg1;
- (void)showSearchPopover:(id)arg1;
- (void)showPhotosPicker:(id)arg1;
- (void)_showPlaceholderPopoverOverView:(id)arg1 withPlaceholderString:(id)arg2;
- (BOOL)characterPickerPopover:(id)arg1 didSelectCharacter:(id)arg2;
@property(readonly, getter=isRecording) BOOL recording;
@property(readonly, nonatomic) NSStackView *stackView; // @dynamic stackView;
@property(readonly, nonatomic) BOOL containsAudioMessage; // @dynamic containsAudioMessage;
@property(readonly, nonatomic) NSTextStorage *textStorage; // @dynamic textStorage;
@property(retain, nonatomic) NSAttributedString *inputLineContents; // @dynamic inputLineContents;
@property(nonatomic) double maximumHeight; // @dynamic maximumHeight;
@property(nonatomic) double minimumHeight; // @dynamic minimumHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
