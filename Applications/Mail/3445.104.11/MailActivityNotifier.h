//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface MailActivityNotifier : NSObject
{
    NSDate *_activityStartDate;
}

@property(retain, nonatomic) NSDate *activityStartDate; // @synthesize activityStartDate=_activityStartDate;
- (void).cxx_destruct;
- (void)_activityCompletionDidChange:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

@end
