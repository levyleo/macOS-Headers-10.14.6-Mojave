//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXPasteboardItemData.h"

@class RDFaceTile, RDPerson, RDVersion;

@interface IPXFaceTilePasteboardItemData : IPXPasteboardItemData
{
    RDVersion *_version;
    RDFaceTile *_faceTile;
    RDPerson *_person;
}

@property(readonly, nonatomic) RDPerson *person; // @synthesize person=_person;
- (void).cxx_destruct;
- (void)pasteboard:(id)arg1 item:(id)arg2 provideDataForType:(id)arg3;
- (id)version;
@property(readonly, nonatomic) RDFaceTile *faceTile;
- (id)types;
- (id)initWithPerson:(id)arg1;

@end
