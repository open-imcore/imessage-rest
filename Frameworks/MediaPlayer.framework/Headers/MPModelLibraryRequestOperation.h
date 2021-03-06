//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelLibraryRequest, NSOperationQueue;

@interface MPModelLibraryRequestOperation : MPAsyncOperation
{
    MPModelLibraryRequest *_request;
    id _responseHandler;
    NSOperationQueue *_operationQueue;
    NSOperationQueue *_serialAccessQueue;
}


@property(retain, nonatomic) NSOperationQueue *serialAccessQueue; // @synthesize serialAccessQueue=_serialAccessQueue;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(copy, nonatomic) id responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) MPModelLibraryRequest *request; // @synthesize request=_request;
- (id)_sectionProperties;
- (void)_sanityCheckRequest;
- (id)_libraryView;
- (id)_itemProperties;
- (void)_executeRequest;
- (void)_executeLegacyRequest;
- (void)execute;

@end

