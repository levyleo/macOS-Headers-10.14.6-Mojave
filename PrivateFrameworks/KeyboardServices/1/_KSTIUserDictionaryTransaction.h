//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <KeyboardServices/NSSecureCoding-Protocol.h>

@class _KSTIUserDictionaryEntryValue;

@interface _KSTIUserDictionaryTransaction : NSObject <NSSecureCoding>
{
    _KSTIUserDictionaryEntryValue *_valueToDelete;
    _KSTIUserDictionaryEntryValue *_valueToInsert;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) _KSTIUserDictionaryEntryValue *valueToInsert; // @synthesize valueToInsert=_valueToInsert;
@property(retain, nonatomic) _KSTIUserDictionaryEntryValue *valueToDelete; // @synthesize valueToDelete=_valueToDelete;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
