//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CPDefinitionNode.h"

@class NSAttributedString;

@interface CPDefinitionComment : CPDefinitionNode
{
    NSAttributedString *mAttributedString;
}

+ (id)definitionWithAttributedString:(id)arg1;
- (void)setAttributedString:(id)arg1;
- (id)attributedString;
- (id)initWithAttributedString:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
