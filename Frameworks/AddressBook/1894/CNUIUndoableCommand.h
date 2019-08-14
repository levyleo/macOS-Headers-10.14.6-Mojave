//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ABBookUndoableCommand.h"

#import <AddressBook/CNUISaveRequestCommand-Protocol.h>

@class CNContactStore, NSString;

@interface CNUIUndoableCommand : ABBookUndoableCommand <CNUISaveRequestCommand>
{
    CNContactStore *_contactStore;
}

@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (void).cxx_destruct;
- (void)visit:(id)arg1;
- (void)didExecute;
- (void)willExecute;
- (void)executeUndoWithCNSaveRequest:(id)arg1;
- (void)executeRedoWithCNSaveRequest:(id)arg1;
- (void)executeWithCNSaveRequest:(id)arg1;
- (void)executeUndo;
- (void)executeRedo;
- (void)execute;
- (id)initWithContactStore:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
