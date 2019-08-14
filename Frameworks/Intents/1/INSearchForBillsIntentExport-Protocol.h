//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INBillPayee, INDateComponentsRange;

@protocol INSearchForBillsIntentExport <NSObject, JSExport>
@property(copy) INDateComponentsRange *dueDateRange;
@property long long status;
@property long long billType;
@property(copy) INDateComponentsRange *paymentDateRange;
@property(copy) INBillPayee *billPayee;
- (id)init;
@end
