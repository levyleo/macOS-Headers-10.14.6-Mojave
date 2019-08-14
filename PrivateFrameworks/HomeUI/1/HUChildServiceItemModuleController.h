//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeUI/HUItemTableModuleController.h>

#import <HomeUI/HUEditableCheckmarkDelegate-Protocol.h>

@class HFItemBuilder, HUChildServiceEditorItemModule, NSMapTable, NSString;
@protocol HFServiceLikeBuilder, HUChildServiceModuleControllerDelegate;

@interface HUChildServiceItemModuleController : HUItemTableModuleController <HUEditableCheckmarkDelegate>
{
    id <HUChildServiceModuleControllerDelegate> _delegate;
    HUChildServiceEditorItemModule *_childServiceItemModule;
    HFItemBuilder<HFServiceLikeBuilder> *_activelyEditingNameServiceBuilder;
    NSMapTable *_identifyButtonMap;
}

@property(retain, nonatomic) NSMapTable *identifyButtonMap; // @synthesize identifyButtonMap=_identifyButtonMap;
@property(retain, nonatomic) HFItemBuilder<HFServiceLikeBuilder> *activelyEditingNameServiceBuilder; // @synthesize activelyEditingNameServiceBuilder=_activelyEditingNameServiceBuilder;
@property(retain, nonatomic) HUChildServiceEditorItemModule *childServiceItemModule; // @synthesize childServiceItemModule=_childServiceItemModule;
@property(nonatomic) __weak id <HUChildServiceModuleControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)checkmarkTappedInCell:(id)arg1 forItem:(id)arg2;
- (void)_identifyButtonPressed:(id)arg1 forEvent:(id)arg2;
- (id)defaultTextForTextField:(id)arg1 item:(id)arg2;
- (id)currentTextForTextField:(id)arg1 item:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1 item:(id)arg2;
- (void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1 item:(id)arg2;
- (BOOL)shouldManageTextFieldForItem:(id)arg1;
- (unsigned long long)didSelectItem:(id)arg1;
- (BOOL)canSelectDisabledItem:(id)arg1;
- (BOOL)canSelectItem:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (Class)cellClassForItem:(id)arg1;
- (id)initWithModule:(id)arg1;
- (id)initWithModule:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
