//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class ICStoreURLRequest, NSObject;
@protocol MPStoreSocialRequestOperationDataSource, OS_dispatch_queue;

@interface MPStoreSocialRequestOperation : MPAsyncOperation
{
    NSObject *_accessQueue;
    ICStoreURLRequest *_request;
    id _dataSource;
    id _responseHandler;
}

+ (id)_urlStringForKey:(id)arg1 inBag:(id)arg2;
+ (id)_stringRepresentationForHTTPMethod:(long long)arg1;
+ (id)_stringRepresentationForHTTPBodyType:(long long)arg1;

@property(copy, nonatomic) id responseHandler; // @synthesize responseHandler=_responseHandler;
@property(readonly, nonatomic) id dataSource; // @synthesize dataSource=_dataSource;
- (id)_requestURLFromBagDictionary:(id)arg1;
- (void)execute;
- (void)cancel;
- (id)initWithDataSource:(id)arg1;

@end

