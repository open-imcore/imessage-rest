//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import <Foundation/Foundation.h>

@class LPGlyphStyle, LPPadding, LPPointUnit, NSColor, NSFont;


@interface LPTextViewStyle : NSObject
{
    BOOL _shouldScaleMaximumLinesWithDynamicType;
    unsigned int _maximumLines;
    NSColor *_color;
    NSFont *_font;
    long long _textAlignment;
    LPPointUnit *_firstLineLeading;
    LPPointUnit *_lastLineDescent;
    LPGlyphStyle *_leadingGlyph;
    LPPadding *_padding;
}


@property(nonatomic) BOOL shouldScaleMaximumLinesWithDynamicType; // @synthesize shouldScaleMaximumLinesWithDynamicType=_shouldScaleMaximumLinesWithDynamicType;
@property(readonly, retain, nonatomic) LPPadding *padding; // @synthesize padding=_padding;
@property(retain, nonatomic) LPGlyphStyle *leadingGlyph; // @synthesize leadingGlyph=_leadingGlyph;
@property(retain, nonatomic) LPPointUnit *lastLineDescent; // @synthesize lastLineDescent=_lastLineDescent;
@property(retain, nonatomic) LPPointUnit *firstLineLeading; // @synthesize firstLineLeading=_firstLineLeading;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) unsigned int maximumLines; // @synthesize maximumLines=_maximumLines;
@property(retain, nonatomic) NSFont *font; // @synthesize font=_font;
@property(retain, nonatomic) NSColor *color; // @synthesize color=_color;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

