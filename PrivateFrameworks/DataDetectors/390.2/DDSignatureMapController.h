//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DataDetectors/DDSignaturePreviewController.h>

__attribute__((visibility("hidden")))
@interface DDSignatureMapController : DDSignaturePreviewController
{
}

+ (id)localizedDynamicName;
+ (BOOL)actionValidForDataDetectorsResult:(struct __DDResult *)arg1 url:(id)arg2 textCheckingResult:(id)arg3 context:(id)arg4;
+ (struct __DDResult *)extractFromSignatureIfNeeded:(struct __DDResult *)arg1;
+ (unsigned long long)customContentType;

@end
