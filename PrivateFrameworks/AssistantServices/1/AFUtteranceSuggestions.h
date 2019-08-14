//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol AFUtteranceSuggestionsDelegate, OS_dispatch_queue;

@interface AFUtteranceSuggestions : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_suggestedUtterances;
    NSString *_languageCode;
    id <AFUtteranceSuggestionsDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <AFUtteranceSuggestionsDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
- (void).cxx_destruct;
- (void)setSuggestedUtterances:(id)arg1;
- (void)getSuggestedUtterancesWithCompletion:(CDUnknownBlockType)arg1;
- (id)_suggestionsFilePath;
- (id)initWithLanguageCode:(id)arg1 delegate:(id)arg2;

@end
