//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

@class HOAccessoryDebugModuleController;
@protocol HFHomeKitObject;

@interface HOAccessoryDebugViewController : HUItemTableViewController
{
    id <HFHomeKitObject> _homeKitObject;
    HOAccessoryDebugModuleController *_debugModuleController;
}

@property(retain, nonatomic) HOAccessoryDebugModuleController *debugModuleController; // @synthesize debugModuleController=_debugModuleController;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject; // @synthesize homeKitObject=_homeKitObject;
- (void).cxx_destruct;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (id)initWithHomeKitObject:(id)arg1;

@end
