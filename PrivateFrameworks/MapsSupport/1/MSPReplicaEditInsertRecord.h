//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapsSupport/MSPReplicaEdit.h>

@protocol MSPReplicaRecord;

@interface MSPReplicaEditInsertRecord : MSPReplicaEdit
{
    id <MSPReplicaRecord> _recordWithInformationToInsert;
}

@property(readonly, nonatomic) id <MSPReplicaRecord> recordWithInformationToInsert; // @synthesize recordWithInformationToInsert=_recordWithInformationToInsert;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithRecordToInsert:(id)arg1 identifier:(id)arg2;
- (id)_initWithIdentifierOfAffectedRecord:(id)arg1;

@end
