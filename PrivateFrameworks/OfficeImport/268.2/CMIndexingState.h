//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/CMState.h>

@class NSMutableDictionary, NSMutableString;

__attribute__((visibility("hidden")))
@interface CMIndexingState : CMState
{
    NSMutableDictionary *_metadata;
    NSMutableString *_textContent;
}

@property(retain) NSMutableString *textContent; // @synthesize textContent=_textContent;
@property(retain) NSMutableDictionary *metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;
- (id)init;

@end
