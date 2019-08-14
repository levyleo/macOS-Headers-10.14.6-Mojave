//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AUModelProtocol-Protocol.h"

@class AUBaseModel, AUDocument, AUSetupController, NSMutableArray, NSMutableDictionary, NSString;
@protocol AUModelDelegate;

@interface AUDataModel : NSObject <AUModelProtocol>
{
    id <AUModelDelegate> delegate;
    AUBaseModel *base;
    AUSetupController *setupController;
    AUDocument *document;
    NSMutableDictionary *flatSettingsDict;
    BOOL modelChanged;
    BOOL _dataLoaded;
    BOOL _ignoreModelChanged;
    BOOL _loadedOnceFlag;
    NSMutableArray *_ignoredProperties;
    NSMutableArray *_observedProperties;
}

@property(nonatomic) BOOL loadedOnceFlag; // @synthesize loadedOnceFlag=_loadedOnceFlag;
@property(nonatomic) BOOL dataLoaded; // @synthesize dataLoaded=_dataLoaded;
@property(nonatomic) BOOL modelChanged; // @synthesize modelChanged;
@property(retain, nonatomic) NSMutableDictionary *flatSettingsDict; // @synthesize flatSettingsDict;
@property(retain, nonatomic) AUSetupController *setupController; // @synthesize setupController;
@property(nonatomic) AUDocument *document; // @synthesize document;
@property(nonatomic) AUBaseModel *base; // @synthesize base;
@property(nonatomic) id delegate; // @synthesize delegate;
- (void)loadDataForKeyPath:(id)arg1;
- (id)createError:(int)arg1 forSetting:(int)arg2;
- (id)errors;
- (BOOL)valid;
- (BOOL)saveData;
- (void)loadData;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingModelChangeProperties;
- (void)startObservingModelChangePropertiesWithIgnoreList:(id)arg1;
- (BOOL)canUpdateModelChanged;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
