//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TImageView.h"

@class TViewOptionsWindowController;

@interface TFileBasedImageView : TImageView
{
    TViewOptionsWindowController *_controller;
    struct TFENode _imageNode;
}

@property(nonatomic) struct TFENode imageNode; // @synthesize imageNode=_imageNode;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)performDragOperation:(id)arg1;
- (void)handleClick;
- (void)mouseDown:(id)arg1;
- (void)delete:(id)arg1;
- (void)cut:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)initCommon;

@end
