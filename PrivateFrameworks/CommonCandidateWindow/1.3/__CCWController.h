//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface __CCWController : NSObject
{
    struct __CCWObject *_ccwObject;
    BOOL centerTextFlag;
}

@property BOOL centerTextFlag; // @synthesize centerTextFlag;
- (void)stepperClicked:(id)arg1;
- (void)goRight:(id)arg1;
- (void)goLeft:(id)arg1;
- (void)scrollerClicked:(id)arg1;
- (void)buttonClicked:(id)arg1;
- (struct __CCWObject *)ccwObject;
- (id)initWithCCWObject:(struct __CCWObject *)arg1;

@end
