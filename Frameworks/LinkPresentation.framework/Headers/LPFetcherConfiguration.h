//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import <Foundation/Foundation.h>

@class WKWebView;


@interface LPFetcherConfiguration : NSObject
{
    WKWebView *_webViewForProcessSharing;
    long long _maximumResponseCount;
}


@property(nonatomic) long long maximumResponseCount; // @synthesize maximumResponseCount=_maximumResponseCount;
@property(retain, nonatomic) WKWebView *webViewForProcessSharing; // @synthesize webViewForProcessSharing=_webViewForProcessSharing;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
