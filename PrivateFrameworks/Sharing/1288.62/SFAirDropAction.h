//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSString;

@interface SFAirDropAction : NSObject <NSSecureCoding>
{
    BOOL _requiresUnlockedUI;
    BOOL _shouldUpdateUserResponse;
    NSString *_localizedTitle;
    NSString *_singleItemLocalizedTitle;
    NSString *_actionIdentifier;
    NSString *_transferIdentifier;
    unsigned long long _minRequiredTransferState;
    unsigned long long _maxTransferState;
    CDUnknownBlockType _actionHandler;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(nonatomic) BOOL shouldUpdateUserResponse; // @synthesize shouldUpdateUserResponse=_shouldUpdateUserResponse;
@property(nonatomic) BOOL requiresUnlockedUI; // @synthesize requiresUnlockedUI=_requiresUnlockedUI;
@property(nonatomic) unsigned long long maxTransferState; // @synthesize maxTransferState=_maxTransferState;
@property(nonatomic) unsigned long long minRequiredTransferState; // @synthesize minRequiredTransferState=_minRequiredTransferState;
@property(readonly, copy, nonatomic) NSString *transferIdentifier; // @synthesize transferIdentifier=_transferIdentifier;
@property(readonly, copy, nonatomic) NSString *actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
@property(copy, nonatomic) NSString *singleItemLocalizedTitle; // @synthesize singleItemLocalizedTitle=_singleItemLocalizedTitle;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
- (void).cxx_destruct;
- (void)triggerAction;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransferIdentifier:(id)arg1 actionIdentifier:(id)arg2 title:(id)arg3 singleItemTitle:(id)arg4;

@end
