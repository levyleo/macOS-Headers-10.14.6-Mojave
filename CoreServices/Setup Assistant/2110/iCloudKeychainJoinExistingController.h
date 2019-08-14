//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "iCloudViewControllerBase.h"

@class NSArray, NSNumber, NSString;

@interface iCloudKeychainJoinExistingController : iCloudViewControllerBase
{
    BOOL _displayedApprovalSheet;
    BOOL _showingiCSCOption;
    NSNumber *_radioSelection;
    NSArray *_optionsArray;
    NSString *_instructionString;
}

@property BOOL showingiCSCOption; // @synthesize showingiCSCOption=_showingiCSCOption;
@property(retain) NSString *instructionString; // @synthesize instructionString=_instructionString;
@property(retain) NSArray *optionsArray; // @synthesize optionsArray=_optionsArray;
@property(retain) NSNumber *radioSelection; // @synthesize radioSelection=_radioSelection;
@property BOOL displayedApprovalSheet; // @synthesize displayedApprovalSheet=_displayedApprovalSheet;
- (void).cxx_destruct;
- (long long)_whatToDoBasedOnCurrentSelection;
- (void)_initializeOptions;
- (void)willBecomeVisible;
- (void)forwardPaneWithHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)previousViewIdentifier;
- (id)nextViewIdentifier;

@end
