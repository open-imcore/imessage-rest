//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class NSData, NSMutableDictionary, NSString;

@interface MPPlaybackArchiveDisplayProperties : NSObject
{
    NSString *_title;
    NSString *_subtitle;
    NSData *_artworkImageData;
    NSMutableDictionary *_storage;
}

+ (_Bool)supportsSecureCoding;

@property(retain, nonatomic) NSMutableDictionary *storage; // @synthesize storage=_storage;
@property(readonly, copy, nonatomic) NSData *artworkImageData; // @synthesize artworkImageData=_artworkImageData;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithOptions:(unsigned long long)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 artworkImageData:(id)arg3;

@end
