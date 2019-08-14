//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BAFunctionSignature : NSObject
{
    NSString *_returnType;
    NSMutableArray *_argTypes;
    NSMutableArray *_argModifiers;
    BOOL _isVariadic;
}

@property(nonatomic) BOOL isVariadic; // @synthesize isVariadic=_isVariadic;
@property(retain, nonatomic) NSMutableArray *argModifiers; // @synthesize argModifiers=_argModifiers;
@property(retain, nonatomic) NSMutableArray *argTypes; // @synthesize argTypes=_argTypes;
- (void)addArgumentWithType:(id)arg1 modifier:(id)arg2;
- (void)setArgumentType:(id)arg1 modifier:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setReturnType:(id)arg1;
- (const char *)returnType;
- (BOOL)getArgumentModifierAtIndex:(unsigned long long)arg1;
- (const char *)getArgumentTypeAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfArguments;
- (void)dealloc;
- (id)init;

@end
