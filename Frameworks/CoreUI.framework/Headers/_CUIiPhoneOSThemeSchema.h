//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreUI/CUIThemeSchema.h>

__attribute__((visibility("hidden")))
@interface _CUIiPhoneOSThemeSchema : CUIThemeSchema
{
}

- (id)schemaTuplesWithAvailableScalesForPart:(const id )arg1 withList:(id)arg2;
- (id)schemaTuplesWithAvailableStatesForPart:(const id )arg1 withList:(id)arg2;
- (id)schemaTuplesWithAvailableValuesForPart:(const id )arg1 withList:(id)arg2 isEffect:(BOOL)arg3;
- (id)schemaEffectRenditionsForPartDefinition:(const id )arg1;
- (id)effectRenditionsForSchemaTuples:(id)arg1;
- (id)defaultCoreUIOptionsForEffectDefinition:(const id )arg1;
- (const id )effectDefinitionWithName:(id)arg1;
- (unsigned long long)effectDefinitionCount;
- (const id )sortedEffectDefinitionAtIndex:(unsigned long long)arg1;
- (const id )_sortedEffectDefinitions;
- (const id )effectDefinitionAtIndex:(unsigned long long)arg1;
- (unsigned long long)materialDefinitionCount;
- (id)schemaRenditionsForPartDefinition:(const id )arg1;
- (id)widgetNameForPartDefinition:(const id )arg1;
- (const id )categoryForElementDefinition:(const id )arg1;
- (const id )elementDefinitionWithName:(id)arg1;
- (unsigned long long)elementDefinitionCount;
- (const id )sortedElementDefinitionAtIndex:(unsigned long long)arg1;
- (const id )_sortedElementDefinitions;
- (const id )elementDefinitionAtIndex:(unsigned long long)arg1;
- (unsigned long long)elementCategoryCount;
- (const id )elementCategoryAtIndex:(unsigned long long)arg1;
- (long long)schemaVersion;

@end

