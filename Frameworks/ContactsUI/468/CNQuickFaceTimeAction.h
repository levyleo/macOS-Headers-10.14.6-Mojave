//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsUI/CNQuickPropertyAction.h>

__attribute__((visibility("hidden")))
@interface CNQuickFaceTimeAction : CNQuickPropertyAction
{
    BOOL _audioOnly;
}

+ (id)defaultFaceTimeAudioTitle;
+ (id)defaultFaceTimeTitle;
@property(nonatomic) BOOL audioOnly; // @synthesize audioOnly=_audioOnly;
- (void)performWithCompletionBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)score;
- (id)subtitleForContext:(long long)arg1;
- (id)titleForContext:(long long)arg1;
- (id)_coreDuetInteractionMechanisms;
- (id)_coreDuetValue;
- (id)category;
- (id)identifier;

@end
