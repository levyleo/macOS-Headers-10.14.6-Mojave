//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AdCore/ADSingleton.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface ADDeviceDiagnostics : ADSingleton
{
    NSObject<OS_dispatch_queue> *_notifyDispatchQueue;
    int _notifyTokenScreen;
    double _currentScreenStatusTime;
    double _previousScreenStatusTime;
    BOOL _screenStatus;
    int _notifyTokenLocked;
    double _currentLockedStatusTime;
    double _previousLockedStatusTime;
    BOOL _lockedStatus;
    int _notifyTokenACPower;
    double _currentACPowerStatusTime;
    double _previousACPowerStatusTime;
    BOOL _ACPowerStatus;
    double _currentNetworkStateChangeTime;
    double _previousNetworkStateChangeTime;
    int _currentConnectionStatus;
    int _previousConnectionStatus;
    BOOL _verbose;
}

+ (id)sharedInstance;
+ (int)getDeviceBootTime;
+ (int)getProcessStartTime;
@property(nonatomic) BOOL verbose; // @synthesize verbose=_verbose;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *statusString;
- (void)powerStateChanged;
- (void)lockStateChanged;
- (void)screenStateChanged;
- (void)networkStateChanged;
- (id)init;

@end
