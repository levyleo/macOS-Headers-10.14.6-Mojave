//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <StoreFoundation/ISOperationDelegate-Protocol.h>

@class ISDialogButton, ISDialogOperation;

@protocol ISDialogOperationDelegate <ISOperationDelegate>

@optional
- (BOOL)showDialogInSeperateProcessForOperation:(ISDialogOperation *)arg1;
- (void)operation:(ISDialogOperation *)arg1 selectedButton:(ISDialogButton *)arg2;
@end
