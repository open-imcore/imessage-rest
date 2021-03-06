//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import <Foundation/Foundation.h>

@interface CUILayoutInformation : NSObject
{

    double _baselineOffsetFromBottom;

    BOOL _canStretchHorizontally;
    BOOL _canStretchVertically;
}

+ (id)layoutInformation;
@property(nonatomic) BOOL canStretchVertically; // @synthesize canStretchVertically=_canStretchVertically;
@property(nonatomic) BOOL canStretchHorizontally; // @synthesize canStretchHorizontally=_canStretchHorizontally;
 // @synthesize contentRectInsets=_contentRectInsets;
@property(nonatomic) double baselineOffsetFromBottom; // @synthesize baselineOffsetFromBottom=_baselineOffsetFromBottom;
 // @synthesize alignmentRectInsets=_alignmentRectInsets;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGRect)alignmentRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)contentRectForAlignmentRect:(struct CGRect)arg1;
- (struct CGRect)frameForAlignmentRect:(struct CGRect)arg1;
- (struct CGRect)alignmentRectForFrame:(struct CGRect)arg1;
- (id)init;

@end

