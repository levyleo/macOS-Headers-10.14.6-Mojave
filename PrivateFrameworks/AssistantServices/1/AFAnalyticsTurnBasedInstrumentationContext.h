//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSUUID, SISchemaClientTurnContext;

@interface AFAnalyticsTurnBasedInstrumentationContext : NSObject <NSSecureCoding>
{
    struct NSUUID *_turnIdentifier;
    SISchemaClientTurnContext *_turnContext;
}

+ (BOOL)supportsSecureCoding;
+ (id)newTurnBasedContextWithPreviousTurnID:(struct NSUUID *)arg1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)createNextTurnBasedContext;
- (void)emitInstrumentation:(id)arg1;
- (void)emitInstrumentation:(id)arg1 machAbsoluteTime:(unsigned long long)arg2;
@property(readonly, nonatomic) NSUUID *turnIdentifier;
- (id)initWithTurnIdentifier:(struct NSUUID *)arg1;
- (id)init;

@end

