//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXCollectionContent_deprecated.h"

@class IPXAbstractCollection_deprecated;

@interface IPXAbstractCollectionContent : IPXCollectionContent_deprecated
{
    IPXAbstractCollection_deprecated *_owningCollection;
    BOOL _isLoading;
}

- (void).cxx_destruct;
- (CDUnknownBlockType)objectArrangingComparator;
- (void)_assignOwningCollection:(id)arg1;
@property(readonly) IPXAbstractCollection_deprecated *owningCollection;
- (BOOL)isLoading;
- (void)setContent:(id)arg1;
- (id)init;

@end
