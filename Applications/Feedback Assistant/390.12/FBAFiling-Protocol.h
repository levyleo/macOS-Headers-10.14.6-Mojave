//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBAFileMatcher, FBAKnownOperation, NSString, NSURL;

@protocol FBAFiling <NSObject>

@optional
- (void)gatherForRequirement:(FBAFileMatcher *)arg1 completionHandler:(void (^)(void))arg2;
- (void)deleteExistingFileWithName:(NSString *)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
- (NSURL *)attachmentDirectory;
- (BOOL)URLIsAcceptableSize:(NSURL *)arg1;
- (BOOL)requirementInProgress:(FBAFileMatcher *)arg1;
- (FBAKnownOperation *)operationForRequirement:(FBAFileMatcher *)arg1;
@end
