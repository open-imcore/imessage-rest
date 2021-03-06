//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class CRRecentContactsLibrary, NSArray, NSString;

@interface CNAutocompleteRecentContactsTransform : NSObject
{
    NSString *_priorityDomainForSorting;
    NSString *_sendingAddress;
    NSArray *_otherAddressesAlreadyChosen;
    NSString *_searchString;
    CRRecentContactsLibrary *_library;
}

+ (long long)addressTypeForRecentContact:(id)arg1;
+ (id)contactAutocompleteResultForRecent:(id)arg1 factory:(id)arg2 completesChosenGroup:(BOOL)arg3;
+ (id)groupAutocompleteResultForRecent:(id)arg1 factory:(id)arg2 membersFactory:(id)arg3 chosenAddressHashes:(id)arg4 searchString:(id)arg5;
+ (id)autocompleteResultForRecent:(id)arg1 factory:(id)arg2 membersFactory:(id)arg3 chosenAddressHashes:(id)arg4 searchString:(id)arg5 library:(id)arg6;
+ (id)resultTransformWithFactory:(id)arg1 membersFactory:(id)arg2 chosenAddressHashes:(id)arg3 searchString:(id)arg4 library:(id)arg5;
+ (id)transformForRequest:(id)arg1 library:(id)arg2;

@property(retain) CRRecentContactsLibrary *library; // @synthesize library=_library;
@property(copy) NSString *searchString; // @synthesize searchString=_searchString;
@property(copy) NSArray *otherAddressesAlreadyChosen; // @synthesize otherAddressesAlreadyChosen=_otherAddressesAlreadyChosen;
@property(copy) NSString *sendingAddress; // @synthesize sendingAddress=_sendingAddress;
@property(copy) NSString *priorityDomainForSorting; // @synthesize priorityDomainForSorting=_priorityDomainForSorting;

@end

