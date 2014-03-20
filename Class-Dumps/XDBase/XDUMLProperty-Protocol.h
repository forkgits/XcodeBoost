//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XDUMLStructuralFeature.h"
#import "XDUMLTypedElement.h"

@class NSArray, NSString;

@protocol XDUMLProperty <XDUMLStructuralFeature, XDUMLTypedElement>
- (void)setIsReadOnly:(BOOL)arg1;
- (void)setIsComposite:(BOOL)arg1;
- (void)setAssociation:(id <XDUMLAssociation>)arg1;
- (void)setDefaultValue:(NSString *)arg1;
- (NSArray *)qualifier;
- (id <XDUMLProperty>)associationEnd;
- (unsigned long long)aggregation;
- (id <XDUMLDataType>)datatype;
- (NSArray *)subsettedProperties;
- (NSArray *)redefinedProperties;
- (id <XDUMLAssociation>)owningAssociation;
- (id <XDUMLAssociation>)association;
- (BOOL)isDerivedUnion;
- (id <XDUMLProperty>)opposite;
- (BOOL)isReadOnly;
- (BOOL)isDerived;
- (BOOL)isComposite;
- (NSString *)defaultValue;
- (id <XDUMLClass>)ownerClass;
@end
