//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OISpotlightImporter : NSObject
{
}

- (id)metadataForOfficeFileAtURL:(id)arg1 error:(id *)arg2;
- (id)metadataForXMLOfficeFileOfType:(unsigned long long)arg1 atURL:(id)arg2 error:(id *)arg3;
- (id)textContentFromExcelReader:(id)arg1;
- (id)sheetNamesFromWorkbookPart:(id)arg1;
- (id)textContentFromWordReader:(id)arg1;
- (id)textContentFromPowerPointReader:(id)arg1;
- (id)textFromElementsNamed:(const char *)arg1 skippingElementsNamed:(const char *)arg2 insertingNewlinesOnElementsNamed:(const char *)arg3 tabulationsOnElementsNamed:(const char *)arg4 inNamespaces:(const char **)arg5 inPackagePart:(id)arg6;
- (void)addPackagePropertiesFromReader:(id)arg1 toMetadata:(id)arg2;
- (id)init;

@end

