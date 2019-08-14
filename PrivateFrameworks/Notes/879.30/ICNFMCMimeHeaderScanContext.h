//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICNFMCMimePart, NSMutableData;

@interface ICNFMCMimeHeaderScanContext : NSObject
{
    const char *_current;
    const char *_end;
    unsigned long long _encodingHint;
    NSMutableData *_dataBuf;
    ICNFMCMimePart *_mimePart;
}

@property(retain, nonatomic) ICNFMCMimePart *mimePart; // @synthesize mimePart=_mimePart;
@property(retain, nonatomic) NSMutableData *dataBuf; // @synthesize dataBuf=_dataBuf;
@property(nonatomic) unsigned long long encodingHint; // @synthesize encodingHint=_encodingHint;
@property(nonatomic) const char *end; // @synthesize end=_end;
@property(nonatomic) const char *current; // @synthesize current=_current;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;

@end
