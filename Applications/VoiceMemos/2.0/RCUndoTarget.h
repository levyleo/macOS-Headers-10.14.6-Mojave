//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RCUndoTarget : NSObject
{
    BOOL _shouldEnableSave;
    long long _sizeOfUndoStack;
    long long _targetType;
}

@property(nonatomic) BOOL shouldEnableSave; // @synthesize shouldEnableSave=_shouldEnableSave;
@property(nonatomic) long long targetType; // @synthesize targetType=_targetType;
@property(nonatomic) long long sizeOfUndoStack; // @synthesize sizeOfUndoStack=_sizeOfUndoStack;
- (id)initWithTargetType:(long long)arg1;

@end

