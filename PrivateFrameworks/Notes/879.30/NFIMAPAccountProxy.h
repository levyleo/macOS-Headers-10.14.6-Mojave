//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Notes/ICNFIMAPAccountProxy.h>

#import <Notes/NFAccountProxy-Protocol.h>

@class NSString;

@interface NFIMAPAccountProxy : ICNFIMAPAccountProxy <NFAccountProxy>
{
}

- (BOOL)hasNotes;
@property(copy, nonatomic) NSString *parentACAccountIdentifier;
@property(copy, nonatomic) NSString *fullName;
- (BOOL)renameMailbox:(id)arg1 newParentMailbox:(id)arg2;
- (id)newMailboxProxyWithMailbox:(id)arg1;
- (id)mailboxProxyForMailbox:(id)arg1;
- (BOOL)deleteMailboxFromServer:(id)arg1;
- (void)deleteMailboxFromPersistence:(id)arg1;
- (BOOL)shouldAddMailboxToPersistence:(id)arg1 withParent:(id)arg2;
- (void)playOfflineActions;
- (BOOL)useDefaultMailboxAsMailboxHierarchyRoot;
- (unsigned long long)maximumConnectionCount;
- (id)parentACAccount;
- (id)initWithManagedObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
