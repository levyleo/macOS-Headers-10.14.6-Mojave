//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsFoundation/NSObject-Protocol.h>

@protocol CNCancelable;

@protocol CNReaderWriterScheduler <NSObject>
- (void)resume;
- (void)suspend;
- (void)performSynchronousWriterBlock:(void (^)(void))arg1;
- (void)performSynchronousReaderBlock:(void (^)(void))arg1;
- (id <CNCancelable>)performWriterBlock:(void (^)(CNCancelationToken *))arg1;
- (id <CNCancelable>)performReaderBlock:(void (^)(CNCancelationToken *))arg1;
@end
