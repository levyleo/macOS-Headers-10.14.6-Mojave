//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Automator/AMAppleScriptAction.h>

@class AMApplicationDefinition;

@interface AMNewFindItemsAction : AMAppleScriptAction
{
    AMApplicationDefinition *_applicationDefinition;
}

@property(retain) AMApplicationDefinition *applicationDefinition; // @synthesize applicationDefinition=_applicationDefinition;
- (void).cxx_destruct;
- (void)updateName;
- (void)updateNameForApplication:(id)arg1 findingName:(id)arg2;
- (void)awakeFromNib;
- (id)initWithDefinition:(id)arg1 fromArchive:(BOOL)arg2;

@end
