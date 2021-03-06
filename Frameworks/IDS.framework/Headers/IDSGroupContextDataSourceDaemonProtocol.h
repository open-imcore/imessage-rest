//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class ENGroup, ENGroupID, NSData, _ENGroupInfo;

@protocol IDSGroupContextDataSourceDaemonProtocol
- (void)validateCachedGroup:(ENGroup *)arg1 isParentOfGroup:(ENGroup *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)participantsForCypher:(id)arg1 completion:(void (^)(NSArray *, BOOL))arg2;
- (void)groupFromPublicDataRepresentation:(NSData *)arg1 completion:(void (^)(ENGroup *, NSError *))arg2;
- (void)publicDataRepresentationForGroup:(ENGroup *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)fetchGroupWithID:(ENGroupID *)arg1 completion:(void (^)(ENGroup *, NSError *))arg2;
- (void)upsertGroupWithInfo:(_ENGroupInfo *)arg1 previousGroup:(ENGroup *)arg2 completion:(void (^)(ENGroup *, NSError *))arg3;
@end

