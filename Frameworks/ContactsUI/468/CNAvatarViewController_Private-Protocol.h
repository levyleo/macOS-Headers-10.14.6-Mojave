//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNContactStore, PRPersonaStore;
@protocol CNAvatarViewControllerDelegate;

@protocol CNAvatarViewController_Private <NSObject>
@property(nonatomic) __weak id <CNAvatarViewControllerDelegate> delegate;
@property(nonatomic, getter=isThreeDTouchEnabled) BOOL threeDTouchEnabled;
@property(readonly, nonatomic) PRPersonaStore *personaStore;
@property(readonly, nonatomic) CNContactStore *contactStore;
@end
