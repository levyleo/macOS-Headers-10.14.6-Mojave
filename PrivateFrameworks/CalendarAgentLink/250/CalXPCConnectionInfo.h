//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, Protocol;

@interface CalXPCConnectionInfo : NSObject
{
    NSString *_machServiceName;
    Protocol *_remoteObjectProtocol;
    id _exportedObject;
    Protocol *_exportedObjectProtocol;
    NSString *_lifecycleNotification;
}

+ (id)infoForMachServiceName:(id)arg1 remoteObjectProtocol:(id)arg2 exportedObject:(id)arg3 exportedObjectProtocol:(id)arg4 lifecycleNotification:(id)arg5;
@property(copy, nonatomic) NSString *lifecycleNotification; // @synthesize lifecycleNotification=_lifecycleNotification;
@property(retain, nonatomic) Protocol *exportedObjectProtocol; // @synthesize exportedObjectProtocol=_exportedObjectProtocol;
@property(retain, nonatomic) id exportedObject; // @synthesize exportedObject=_exportedObject;
@property(retain, nonatomic) Protocol *remoteObjectProtocol; // @synthesize remoteObjectProtocol=_remoteObjectProtocol;
@property(copy, nonatomic) NSString *machServiceName; // @synthesize machServiceName=_machServiceName;
- (void).cxx_destruct;
- (id)description;
- (BOOL)hasRequiredFields;
- (id)initWithMachServiceName:(id)arg1 remoteObjectProtocol:(id)arg2 exportedObject:(id)arg3 exportedObjectProtocol:(id)arg4 lifecycleNotification:(id)arg5;

@end
