//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNLikenessEditorPresentationStrategy-Protocol.h>

@class NSPopover, NSString;

@interface CNLikenessEditorPresentationPopoverStrategy : NSObject <CNLikenessEditorPresentationStrategy>
{
    NSPopover *_popover;
}

+ (id)strategy;
@property(retain) NSPopover *popover; // @synthesize popover=_popover;
- (void).cxx_destruct;
- (void)close;
- (void)presentController:(id)arg1 onView:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
