//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "EQZone.h"

@interface EQScript : EQZone
{
    unsigned long long mScriptPosition;
}

+ (id)scriptWith:(id)arg1 scriptPosition:(unsigned long long)arg2;
+ (unsigned long long)textFormats;
+ (double)scriptFactorForDepth:(struct _EQDepth)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)appendOperationToString:(id)arg1;
- (void)appendToString:(id)arg1 info:(id)arg2;
- (void)updateDepth;
- (void)setContentPosition;
- (unsigned long long)scriptPosition;
- (id)script;
- (id)initWithParent:(id)arg1 scriptPosition:(unsigned long long)arg2 script:(id)arg3;
- (void)finishZoneForFormat:(unsigned long long)arg1;
- (id)prefixForFormat:(unsigned long long)arg1;
- (id)LaTeXExpression;

@end
