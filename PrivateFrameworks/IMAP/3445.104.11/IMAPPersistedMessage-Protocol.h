//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IMAP/IMAPMessage-Protocol.h>
#import <IMAP/MCChanging-Protocol.h>

@class NSData, NSString;

@protocol IMAPPersistedMessage <IMAPMessage, MCChanging>
@property(readonly, nonatomic) long long libraryID;
@property(copy) NSString *remoteID;
- (void)appendMimeData:(NSData *)arg1 partNumber:(NSString *)arg2;
- (void)setData:(NSData *)arg1 isPartial:(BOOL)arg2;
@end
