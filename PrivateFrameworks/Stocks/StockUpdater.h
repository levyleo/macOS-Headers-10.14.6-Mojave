//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Stocks/YQLRequest.h>

@class NSArray, NSError;
@protocol StockUpdaterDelegate;

@interface StockUpdater : YQLRequest
{
    NSError *_lastError;
    BOOL _isComprehensive;
    BOOL _forceUpdate;
    id <StockUpdaterDelegate> _delegate;
    NSArray *_requestStocks;
    NSArray *_pendingStocks;
    CDUnknownBlockType _updateCompletionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType updateCompletionHandler; // @synthesize updateCompletionHandler=_updateCompletionHandler;
@property(retain, nonatomic) NSArray *pendingStocks; // @synthesize pendingStocks=_pendingStocks;
@property(retain, nonatomic) NSArray *requestStocks; // @synthesize requestStocks=_requestStocks;
@property(readonly, nonatomic) BOOL forceUpdate; // @synthesize forceUpdate=_forceUpdate;
@property(readonly, nonatomic) BOOL isComprehensive; // @synthesize isComprehensive=_isComprehensive;
@property(nonatomic) __weak id <StockUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)aggregateDictionaryDomain;
- (void)failWithError:(id)arg1;
- (void)didParseData;
- (BOOL)hadError;
- (void)_parseExchangeDictionaries:(id)arg1;
- (void)_parseQuoteDictionaries:(id)arg1 withDataSourceDictionaries:(id)arg2;
- (void)parseData:(id)arg1;
- (BOOL)_updateStocks:(id)arg1 comprehensive:(BOOL)arg2 forceUpdate:(BOOL)arg3;

@end
