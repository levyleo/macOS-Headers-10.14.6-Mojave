//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface TIWordSearchController : NSObject
{
    NSMapTable *_inputModeToWordSearchMapping;
}

+ (id)sharedWordSearchController;
@property(retain, nonatomic) NSMapTable *inputModeToWordSearchMapping; // @synthesize inputModeToWordSearchMapping=_inputModeToWordSearchMapping;
- (void).cxx_destruct;
- (id)wordSearchForInputMode:(id)arg1;
- (void)setWordSearch:(id)arg1 forInputMode:(id)arg2;
- (id)init;

@end

