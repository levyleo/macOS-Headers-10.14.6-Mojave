//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (BRCSignatureAdditions)
+ (id)brc_pendingPlaceholderForPackage:(BOOL)arg1;
@property(readonly, nonatomic) NSData *brc_signature;
@property(readonly, nonatomic) NSString *brc_hexadecimalString;
@property(readonly, nonatomic) BOOL brc_signatureIsValid;
@property(readonly, nonatomic) BOOL brc_signatureIsPackage;
@property(readonly, nonatomic) BOOL brc_signatureIsPendingPlaceHolder;
@end
