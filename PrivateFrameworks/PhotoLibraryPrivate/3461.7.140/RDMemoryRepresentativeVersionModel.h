//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDModel.h>

@class RDMemoryRepresentativeVersionTable;

@interface RDMemoryRepresentativeVersionModel : RDModel
{
}

+ (Class)tableClass;
@property(nonatomic) long long memoryId;
@property(nonatomic) long long versionId;
@property(readonly, nonatomic) RDMemoryRepresentativeVersionTable *table;

@end
