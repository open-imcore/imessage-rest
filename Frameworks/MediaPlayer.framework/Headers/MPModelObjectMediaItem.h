//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPNondurableMediaItem.h>

@class MPModelObject, NSDictionary;

@interface MPModelObjectMediaItem : MPNondurableMediaItem
{
    NSDictionary *_propertyValues;
    MPModelObject *_modelObject;
    id _fallbackArtworkCatalogBlock;
}

+ (_Bool)supportsSecureCoding;

@property(copy, nonatomic) id fallbackArtworkCatalogBlock; // @synthesize fallbackArtworkCatalogBlock=_fallbackArtworkCatalogBlock;
@property(readonly, nonatomic) MPModelObject *modelObject; // @synthesize modelObject=_modelObject;
- (id)valueForProperty:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithModelObject:(id)arg1;

@end

