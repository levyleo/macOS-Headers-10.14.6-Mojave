//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class NSString;
@protocol SXFontAttributes;

@protocol SXFontIndex <NSObject>
- (id <SXFontAttributes>)fontAttributesForFontName:(NSString *)arg1;
- (NSString *)fontNameForFontAttributes:(id <SXFontAttributes>)arg1;
@end
