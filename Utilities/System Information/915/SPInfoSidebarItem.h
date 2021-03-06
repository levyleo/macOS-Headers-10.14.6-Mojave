//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, NSString;

@interface SPInfoSidebarItem : NSObject
{
    BOOL _hidden;
    BOOL _selectable;
    id _representedObject;
    NSImage *_icon;
    NSString *_title;
    NSString *_subtitle;
}

@property(getter=isSelectable) BOOL selectable; // @synthesize selectable=_selectable;
@property(getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property(copy) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy) NSString *title; // @synthesize title=_title;
@property(retain) NSImage *icon; // @synthesize icon=_icon;
@property(retain) id representedObject; // @synthesize representedObject=_representedObject;
- (void)dealloc;
- (id)init;

@end

