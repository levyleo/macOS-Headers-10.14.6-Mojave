//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSException.h>

@interface CKException : NSException
{
}

- (id)error;
- (int)errorCode;
- (id)initWithName:(id)arg1 format:(id)arg2 args:(struct __va_list_tag [1])arg3;
- (id)initWithName:(id)arg1 format:(id)arg2;
- (id)initWithCode:(int)arg1 format:(id)arg2 args:(struct __va_list_tag [1])arg3;
- (id)initWithCode:(int)arg1 format:(id)arg2;

@end
