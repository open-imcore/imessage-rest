//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMTranscriptChatItem.h"

@class IMHandle;

@interface IMParticipantChangeChatItem : IMTranscriptChatItem
{
    IMHandle *_sender;
    IMHandle *_otherHandle;
}

@property(readonly, nonatomic) IMHandle *otherHandle; // @synthesize otherHandle=_otherHandle;
@property(readonly, nonatomic) IMHandle *sender; // @synthesize sender=_sender;
- (id)_initWithItem:(id)arg1 sender:(id)arg2 otherHandle:(id)arg3;
@property(readonly, nonatomic) long long changeType;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

