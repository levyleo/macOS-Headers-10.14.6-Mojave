//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFetchRequest;

@interface RMFetchResultsRequest : NSObject
{
    NSFetchRequest *_fetchRequest;
}

+ (id)requestWithFetchRequest:(id)arg1;
@property(readonly, nonatomic) NSFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
- (void).cxx_destruct;
- (id)description;
- (id)initWithEntity:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3;
- (id)initWithEntity:(id)arg1 predicate:(id)arg2;
- (id)initWithEntity:(id)arg1;
- (id)initWithFetchRequest:(id)arg1;

@end
