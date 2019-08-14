//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ExchangeWebServices/XSDefinition.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface XSComplexTypeDefinition : XSDefinition
{
    NSMutableArray *_attributes;
    NSMutableArray *_elements;
    NSMutableDictionary *_elementAttributes;
    NSMutableDictionary *_attributeAttributes;
    NSMutableArray *_namespaces;
    NSMutableDictionary *_properties;
    NSString *_contentPropertyName;
}

+ (id)_descriptionForValue:(id)arg1 prefix:(id)arg2;
+ (id)descriptionForValue:(id)arg1;
@property(readonly, copy, nonatomic) NSString *contentPropertyName; // @synthesize contentPropertyName=_contentPropertyName;
- (void).cxx_destruct;
- (id)_attributeForName:(id)arg1 ofAttributeWithName:(id)arg2;
- (void)_setAttribute:(id)arg1 forName:(id)arg2 ofAttributeWithName:(id)arg3;
- (id)_attributeForName:(id)arg1 ofElementWithName:(id)arg2;
- (void)_setAttribute:(id)arg1 forName:(id)arg2 ofElementWithName:(id)arg3;
- (id)_attributeForName:(id)arg1 ofNodeWithName:(id)arg2 attributes:(id)arg3;
- (void)_setAttribute:(id)arg1 forName:(id)arg2 ofNodeWithName:(id)arg3 attributes:(id)arg4;
- (BOOL)flattenMultiValueElementWithName:(id)arg1;
- (unsigned long long)minCountForElementName:(id)arg1;
- (unsigned long long)maxCountForElementName:(id)arg1;
- (void)addNamespaceWithURI:(id)arg1;
- (void)setIsSpecifiedKey:(id)arg1 onElementWithName:(id)arg2;
- (void)setContentPropertyName:(id)arg1 type:(Class)arg2;
- (void)addElementWithName:(id)arg1 namespaceURI:(id)arg2 type:(Class)arg3 maxOccurs:(unsigned long long)arg4 minOccurs:(unsigned long long)arg5 flattenMultiValue:(BOOL)arg6;
- (void)addElementWithName:(id)arg1 namespaceURI:(id)arg2 type:(Class)arg3 maxOccurs:(unsigned long long)arg4 minOccurs:(unsigned long long)arg5;
- (void)setProperty:(id)arg1 forName:(id)arg2;
- (void)addUnboundedElementWithName:(id)arg1 namespaceURI:(id)arg2 type:(Class)arg3;
- (void)addElementWithName:(id)arg1 namespaceURI:(id)arg2 type:(Class)arg3 isSpecifiedKey:(id)arg4;
- (void)addElementWithName:(id)arg1 namespaceURI:(id)arg2 type:(Class)arg3;
- (id)isSpecifiedKeyForElementName:(id)arg1;
- (id)isSpecifiedKeyForAttributeName:(id)arg1;
- (void)addAttributeWithName:(id)arg1 type:(Class)arg2 isSpecifiedKey:(id)arg3;
- (void)addAttributeWithName:(id)arg1 type:(Class)arg2;
@property(readonly, copy, nonatomic) NSArray *namespaces;
@property(readonly, copy, nonatomic) NSArray *elements;
@property(readonly, copy, nonatomic) NSArray *attributes;
- (id)propertyForName:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
