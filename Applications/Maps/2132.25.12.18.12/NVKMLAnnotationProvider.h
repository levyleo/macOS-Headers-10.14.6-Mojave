//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MIKMLWindowControllerDelegate-Protocol.h"
#import "NVAnnotationProviding-Protocol.h"

@class NSMutableSet, NSString;
@protocol NVAnnotationDisplaying;

__attribute__((visibility("hidden")))
@interface NVKMLAnnotationProvider : NSObject <MIKMLWindowControllerDelegate, NVAnnotationProviding>
{
    NSMutableSet *_annotations;
    NSMutableSet *_overlays;
    id <NVAnnotationDisplaying> _annotationDisplayer;
}

@property(retain, nonatomic) id <NVAnnotationDisplaying> annotationDisplayer; // @synthesize annotationDisplayer=_annotationDisplayer;
- (void).cxx_destruct;
- (id)viewForAnnotation:(id)arg1;
- (id)rendererForOverlay:(id)arg1;
- (void)KMLWindowController:(id)arg1 wantsRegionVisible:(CDStruct_02837cd9)arg2;
- (void)KMLWindowController:(id)arg1 removeOverlays:(id)arg2;
- (void)KMLWindowController:(id)arg1 displayOverlays:(id)arg2;
- (void)KMLWindowController:(id)arg1 removeAnnotations:(id)arg2;
- (void)KMLWindowController:(id)arg1 displayAnnotations:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
