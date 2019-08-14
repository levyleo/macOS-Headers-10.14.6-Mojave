//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSCollectionViewItem.h>

@class FBBackgroundView, FBFace, NSBox, NSString, NSTextField;

@interface FBDuplicateResolutionCollectionViewItem : NSCollectionViewItem
{
    NSTextField *_indexField;
    NSTextField *_sampleField;
    NSTextField *_statusField;
    NSBox *_box;
    FBBackgroundView *_backgroundView;
    NSString *_sampleString;
    long long _column;
    FBFace *_face;
}

@property(retain) FBFace *face; // @synthesize face=_face;
@property long long column; // @synthesize column=_column;
@property(copy) NSString *sampleString; // @synthesize sampleString=_sampleString;
@property(retain) FBBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain) NSBox *box; // @synthesize box=_box;
@property(retain) NSTextField *statusField; // @synthesize statusField=_statusField;
@property(retain) NSTextField *sampleField; // @synthesize sampleField=_sampleField;
@property(retain) NSTextField *indexField; // @synthesize indexField=_indexField;
- (void)setSelected:(BOOL)arg1;
- (void)awakeFromNib;

@end
