//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Home/HFItem.h>

#import "NSCopying-Protocol.h"

@class HFTriggerBuilder;

@interface HOTriggerBuilderItem : HFItem <NSCopying>
{
    HFTriggerBuilder *_triggerBuilder;
    unsigned long long _nameType;
}

+ (id)settingsURLForForceDisableReasons:(unsigned long long)arg1;
+ (id)_detailedErrorDescriptionForForceDisableReasons:(unsigned long long)arg1 inHome:(id)arg2;
@property(readonly, nonatomic) unsigned long long nameType; // @synthesize nameType=_nameType;
@property(readonly, nonatomic) HFTriggerBuilder *triggerBuilder; // @synthesize triggerBuilder=_triggerBuilder;
- (void).cxx_destruct;
- (unsigned long long)_triggerType;
- (id)_forceDisableReasons;
- (id)_resultsForTriggerConditions;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithTriggerBuilder:(id)arg1 nameType:(unsigned long long)arg2;

@end
