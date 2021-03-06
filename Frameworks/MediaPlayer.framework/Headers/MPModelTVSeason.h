//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class MPModelTVEpisode, MPModelTVShow, NSDate, NSString;

@interface MPModelTVSeason : MPModelObject
{
}

+ (id)__downloadedDate_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__representativeEpisode_KEY;
+ (id)__show_KEY;
+ (id)__sortType_KEY;
+ (id)__libraryAddEligible_KEY;
+ (id)__libraryAdded_KEY;
+ (id)__libraryAddedDate_KEY;
+ (id)__hasExplicitContent_KEY;
+ (id)__hasCleanContent_KEY;
+ (id)__episodesCount_KEY;
+ (id)__year_KEY;
+ (id)__descriptionText_KEY;
+ (id)__number_KEY;
+ (id)kindWithEpisodeKind:(id)arg1;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (_Bool)supportsLibraryAddStatusObservation;
- (id)artworkCatalog;
- (id)humanDescription;
- (struct MPLibraryAddStatusObserverConfiguration)libraryAddStatusObserverConfiguration;

// Remaining properties
@property(copy, nonatomic) id artworkCatalogBlock; // @dynamic artworkCatalogBlock;
@property(copy, nonatomic) NSString *descriptionText; // @dynamic descriptionText;
@property(readonly, copy, nonatomic) NSDate *downloadedDate; // @dynamic downloadedDate;
@property(nonatomic) long long episodesCount; // @dynamic episodesCount;
@property(nonatomic) _Bool hasCleanContent; // @dynamic hasCleanContent;
@property(nonatomic) _Bool hasExplicitContent; // @dynamic hasExplicitContent;
@property(nonatomic, getter=isLibraryAddEligible) _Bool libraryAddEligible; // @dynamic libraryAddEligible;
@property(nonatomic, getter=isLibraryAdded) _Bool libraryAdded; // @dynamic libraryAdded;
@property(copy, nonatomic) NSDate *libraryAddedDate; // @dynamic libraryAddedDate;
@property(nonatomic) long long number; // @dynamic number;
@property(retain, nonatomic) MPModelTVEpisode *representativeEpisode; // @dynamic representativeEpisode;
@property(retain, nonatomic) MPModelTVShow *show; // @dynamic show;
@property(nonatomic) long long sortType; // @dynamic sortType;
@property(nonatomic) long long year; // @dynamic year;

@end

