//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSFormatter, NSString;

@interface HFAccessorySettingsEntity : NSObject
{
    BOOL _requiresDependenciesToShowSetting;
    BOOL _previewAccessory;
    BOOL _alwaysShowGroup;
    BOOL _wantsSeparateSectionPerGroup;
    NSString *_keyPath;
    NSString *_sortKey;
    NSString *_localizedHeader;
    NSString *_localizedFooter;
    NSString *_overrideLocalizedTitleKey;
    NSArray *_booleanKeyPathDependencies;
    NSDictionary *_userInfo;
    long long _interfaceModality;
    NSString *_previewValueKeyPath;
    NSFormatter *_previewValueFormatter;
    NSFormatter *_footerTitleFormatter;
    NSString *_adapterIdentifier;
}

+ (id)settingsAtURL:(id)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) NSString *adapterIdentifier; // @synthesize adapterIdentifier=_adapterIdentifier;
@property(readonly, nonatomic) BOOL wantsSeparateSectionPerGroup; // @synthesize wantsSeparateSectionPerGroup=_wantsSeparateSectionPerGroup;
@property(readonly, nonatomic) BOOL alwaysShowGroup; // @synthesize alwaysShowGroup=_alwaysShowGroup;
@property(readonly, copy, nonatomic) NSFormatter *footerTitleFormatter; // @synthesize footerTitleFormatter=_footerTitleFormatter;
@property(readonly, copy, nonatomic) NSFormatter *previewValueFormatter; // @synthesize previewValueFormatter=_previewValueFormatter;
@property(readonly, copy, nonatomic) NSString *previewValueKeyPath; // @synthesize previewValueKeyPath=_previewValueKeyPath;
@property(readonly, nonatomic) BOOL previewAccessory; // @synthesize previewAccessory=_previewAccessory;
@property(readonly, nonatomic) BOOL requiresDependenciesToShowSetting; // @synthesize requiresDependenciesToShowSetting=_requiresDependenciesToShowSetting;
@property(readonly, nonatomic) long long interfaceModality; // @synthesize interfaceModality=_interfaceModality;
@property(readonly, copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, copy, nonatomic) NSArray *booleanKeyPathDependencies; // @synthesize booleanKeyPathDependencies=_booleanKeyPathDependencies;
@property(readonly, copy, nonatomic) NSString *overrideLocalizedTitleKey; // @synthesize overrideLocalizedTitleKey=_overrideLocalizedTitleKey;
@property(readonly, copy, nonatomic) NSString *localizedFooter; // @synthesize localizedFooter=_localizedFooter;
@property(readonly, copy, nonatomic) NSString *localizedHeader; // @synthesize localizedHeader=_localizedHeader;
@property(readonly, copy, nonatomic) NSString *sortKey; // @synthesize sortKey=_sortKey;
@property(readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)description;

@end
