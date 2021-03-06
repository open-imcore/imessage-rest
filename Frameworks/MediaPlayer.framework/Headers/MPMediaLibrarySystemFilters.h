//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPMediaLibraryView;

@interface MPMediaLibrarySystemFilters : NSObject
{
    MPMediaLibraryView *_libraryView;
    _Bool _shouldExcludePurchaseHistoryContent;
}

+ (id)filtersForLibrary:(id)arg1;
+ (id)systemFiltersPerLibrary;
+ (id)globalSerialQueue;

- (void)_updateFilters;
- (void)_cloudLibraryAvailabilityDidChange:(id)arg1;
- (_Bool)shouldExcludePurchaseHistoryContent;
- (id)_initWithLibrary:(id)arg1;

@end

