//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MacBuddyViewController.h"

@class NSString;

@interface CreateODAccountController : MacBuddyViewController
{
    NSString *username;
    BOOL usernameValid;
    NSString *password;
    BOOL passwordValid;
    BOOL _selectedOD;
    NSString *_ODAccountDescription;
    NSString *_ODAccountUseOD;
    NSString *_ODAccountUseLocal;
}

@property(retain) NSString *ODAccountUseLocal; // @synthesize ODAccountUseLocal=_ODAccountUseLocal;
@property(retain) NSString *ODAccountUseOD; // @synthesize ODAccountUseOD=_ODAccountUseOD;
@property(retain) NSString *ODAccountDescription; // @synthesize ODAccountDescription=_ODAccountDescription;
@property BOOL selectedOD; // @synthesize selectedOD=_selectedOD;
@property(readonly) BOOL passwordValid; // @synthesize passwordValid;
@property(copy) NSString *password; // @synthesize password;
@property(readonly) BOOL usernameValid; // @synthesize usernameValid;
@property(copy) NSString *username; // @synthesize username;
- (void).cxx_destruct;
- (void)buttonAction:(id)arg1;
- (void)pressedEnterForODCredentials:(id)arg1;
- (void)forwardPaneWithHandler:(CDUnknownBlockType)arg1;
- (void)willBecomeVisible;
- (id)manager;
- (id)init;
- (id)nextViewIdentifier;

@end
