//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface CUIThemeSchema : NSObject
{
}

+ (id)schemaForPlatform:(long long)arg1;
+ (id)defaultSchema;
- (id)schemaMaterialRenditionsForPartDefinition:(const id )arg1;
- (unsigned long long)partDefinitionCountForMaterialDefinition:(const id )arg1;
- (unsigned long long)materialDefinitionCount;
- (const id )materialDefinitionWithName:(id)arg1;
- (const id )sortedMaterialDefinitionAtIndex:(unsigned long long)arg1;
- (const id )materialDefinitionAtIndex:(unsigned long long)arg1;
- (id)schemaEffectRenditionsForPartDefinition:(const id )arg1;
- (unsigned long long)partDefinitionCountForEffectDefinition:(const id )arg1;
- (unsigned long long)effectDefinitionCount;
- (const id )effectDefinitionWithName:(id)arg1;
- (const id )sortedEffectDefinitionAtIndex:(unsigned long long)arg1;
- (const id )effectDefinitionAtIndex:(unsigned long long)arg1;
- (const id )categoryForElementDefinition:(const id )arg1;
- (void)enumerateAvailableValuesForThemeAttribute:(int)arg1 inPartDefinition:(const id )arg2 usingBlock:(id)arg3;
- (void)enumerateAvailableThemeAttributesInPartDefinition:(const id )arg1 usingBlock:(id)arg2;
- (id)schemaRenditionsForPartDefinition:(const id )arg1;
- (const id )partDefinitionForWidgetName:(id)arg1;
- (id)widgetNameForPartDefinition:(const id )arg1;
- (const id )partDefinitionWithName:(id)arg1 forElementDefinition:(const id )arg2;
- (const id )elementDefinitionWithName:(id)arg1;
- (unsigned long long)dimensionDefinitionCountForPartDefinition:(const id )arg1;
- (unsigned long long)partDefinitionCountForElementDefinition:(const id )arg1;
- (const id )sortedElementDefinitionAtIndex:(unsigned long long)arg1;
- (unsigned long long)elementDefinitionCount;
- (const id )elementDefinitionAtIndex:(unsigned long long)arg1;
- (unsigned long long)elementCategoryCount;
- (const id )elementCategoryAtIndex:(unsigned long long)arg1;
- (long long)schemaVersion;

@end

