//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelPlaylistEntriesShareEligibilityRequest;

@interface MPModelPlaylistEntriesShareEligibilityRequestOperation : MPAsyncOperation
{
    MPModelPlaylistEntriesShareEligibilityRequest *_request;
    id _responseHandler;
}


@property(copy, nonatomic) id responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) MPModelPlaylistEntriesShareEligibilityRequest *request; // @synthesize request=_request;
- (void)execute;

@end

