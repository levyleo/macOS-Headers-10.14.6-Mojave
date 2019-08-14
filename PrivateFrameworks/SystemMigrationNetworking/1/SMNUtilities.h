//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SMNUtilities : NSObject
{
}

+ (BOOL)readCompletelyFromFd:(int)arg1 buffer:(void *)arg2 length:(unsigned long long)arg3;
+ (BOOL)writeCompletelyToFd:(int)arg1 buffer:(const void *)arg2 length:(unsigned long long)arg3;
+ (void)acceptSocketConnection:(int *)arg1 ofFamily:(int)arg2 shouldAcceptBlock:(CDUnknownBlockType)arg3 didAcceptBlock:(CDUnknownBlockType)arg4;
+ (int)connectSocketAddress:(id)arg1;
+ (id)humanReadableIPAddress:(struct sockaddr *)arg1;
+ (BOOL)isBSDInterfaceNameThunderbolt:(id)arg1;
+ (id)humanReadableInterfaceType:(int)arg1;
+ (int)findAvailablePortFrom:(int)arg1 addressFamily:(int)arg2 keepBound:(BOOL)arg3 fd:(int *)arg4;

@end
