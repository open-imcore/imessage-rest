//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMTypingChatItem.h"

#import "IMPluginChatItemProtocol-Protocol.h"

@class IMBalloonPluginDataSource, NSData, NSString;

@interface IMTypingPluginChatItem : IMTypingChatItem <IMPluginChatItemProtocol>
{
    NSData *_typingIndicatorIcon;
    IMBalloonPluginDataSource *_dataSource;
}

@property(retain, nonatomic) IMBalloonPluginDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) NSData *typingIndicatorIcon; // @synthesize typingIndicatorIcon=_typingIndicatorIcon;
- (id)_initWithItem:(id)arg1 dataSource:(id)arg2;
@property(readonly, retain, nonatomic) NSString *type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long hash;
@property(readonly, nonatomic) BOOL isFromMe;
@property(readonly) Class superclass;

@end

