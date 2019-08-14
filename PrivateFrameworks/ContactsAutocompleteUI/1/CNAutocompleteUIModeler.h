//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol CNAutocompleteResultWindowDelegate;

@interface CNAutocompleteUIModeler : NSObject
{
    BOOL _returnAutocompleteResults;
    id <CNAutocompleteResultWindowDelegate> _delegate;
    NSMutableArray *_model;
}

+ (id)mixedModelWithResults:(id)arg1 includeAddress:(BOOL)arg2 onlyEmailFormat:(BOOL)arg3 delegate:(id)arg4;
@property BOOL returnAutocompleteResults; // @synthesize returnAutocompleteResults=_returnAutocompleteResults;
@property(retain) NSMutableArray *model; // @synthesize model=_model;
@property(retain) id <CNAutocompleteResultWindowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addResults:(id)arg1 sectionLabel:(id)arg2;
- (void)addFoundOnServersResults:(id)arg1;
- (void)addFoundInMailResults:(id)arg1;
- (void)addNormalResults:(id)arg1;
- (id)partitionResults:(id)arg1;
- (id)mixedModelWithResults:(id)arg1;
- (id)initWithDelegate:(id)arg1 includeAddress:(BOOL)arg2 onlyEmailFormat:(BOOL)arg3;

@end
