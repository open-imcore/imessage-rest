//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSArray (FezAdditions)
- (id)__imArrayByApplyingBlock:(id)arg1 filter:(id)arg2;
- (id)__imArrayByApplyingBlock:(id)arg1;
- (id)__imArrayByFilteringWithBlock:(id)arg1;
- (void)__imForEach:(id)arg1;
- (BOOL)containsObject:(id)arg1 matchingComparison:(SEL)arg2;
- (long long)indexOfObject:(id)arg1 matchingComparison:(SEL)arg2;
- (BOOL)containsObjectIdenticalTo:(id)arg1;
- (id)__imFirstObject;
- (id)_copyForEnumerating;
- (BOOL)_hasSameMembers:(id)arg1;
- (id)__imDeepCopy;
- (BOOL)__imIsMutable;
- (id)__imSetFromArray;
- (id)__IMStripPotentialTokenURIs;
- (void)differencesFromArray:(id)arg1 usingComparator:(id)arg2 removedIndexes:(id )arg3 insertedIndexes:(id )arg4;
- (void)differencesFromArray:(id)arg1 removedIndexes:(id )arg2 insertedIndexes:(id )arg3;
@end

