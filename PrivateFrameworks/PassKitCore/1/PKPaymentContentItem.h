//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSAttributedString, NSURLRequest;

@interface PKPaymentContentItem : NSObject <NSSecureCoding>
{
    NSURLRequest *_imageRequest;
    struct CGImage *_image;
    NSAttributedString *_title;
    NSAttributedString *_label;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSAttributedString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSAttributedString *title; // @synthesize title=_title;
@property(nonatomic) struct CGImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSURLRequest *imageRequest; // @synthesize imageRequest=_imageRequest;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqualToPaymentContentItem:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
