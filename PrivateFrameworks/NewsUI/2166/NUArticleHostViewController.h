//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <NewsUI/NUBarCompressible-Protocol.h>
#import <NewsUI/NULoadingDelegate-Protocol.h>
#import <NewsUI/NUPageable-Protocol.h>
#import <NewsUI/SXAnalyticsReporting-Protocol.h>

@class FCArticle, FCIssue, FCObservable, NFMultiDelegate, NSHashTable, NSString, UIScrollView, UIView;
@protocol NUAnalyticsReporting, NUArticleViewControllerFactory, NUErrorMessageFactory, NULoadingDelegate, NULoadingViewProviding, NUSettings;

@interface NUArticleHostViewController : UIViewController <NULoadingDelegate, SXAnalyticsReporting, NUPageable, NUBarCompressible>
{
    NSString *_pageIdentifier;
    id <NULoadingDelegate> _loadingDelegate;
    FCObservable *_articleViewStyler;
    FCArticle *_article;
    FCIssue *_issue;
    id <NUArticleViewControllerFactory> _articleViewControllerFactory;
    id <NUSettings> _settings;
    UIViewController *_contentTypeViewController;
    UIView<NULoadingViewProviding> *_loadingView;
    NFMultiDelegate *_multiLoadingDelegate;
    id <NUErrorMessageFactory> _errorMessageFactory;
    id <NUAnalyticsReporting> _analyticsReporting;
}

@property(readonly, nonatomic) id <NUAnalyticsReporting> analyticsReporting; // @synthesize analyticsReporting=_analyticsReporting;
@property(readonly, nonatomic) id <NUErrorMessageFactory> errorMessageFactory; // @synthesize errorMessageFactory=_errorMessageFactory;
@property(readonly, nonatomic) NFMultiDelegate *multiLoadingDelegate; // @synthesize multiLoadingDelegate=_multiLoadingDelegate;
@property(retain, nonatomic) UIView<NULoadingViewProviding> *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIViewController *contentTypeViewController; // @synthesize contentTypeViewController=_contentTypeViewController;
@property(readonly, copy, nonatomic) id <NUSettings> settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) id <NUArticleViewControllerFactory> articleViewControllerFactory; // @synthesize articleViewControllerFactory=_articleViewControllerFactory;
@property(readonly, nonatomic) FCIssue *issue; // @synthesize issue=_issue;
@property(readonly, nonatomic) FCArticle *article; // @synthesize article=_article;
@property(readonly, nonatomic) FCObservable *articleViewStyler; // @synthesize articleViewStyler=_articleViewStyler;
@property(nonatomic) __weak id <NULoadingDelegate> loadingDelegate; // @synthesize loadingDelegate=_loadingDelegate;
@property(readonly, copy, nonatomic) NSString *pageIdentifier; // @synthesize pageIdentifier=_pageIdentifier;
- (void).cxx_destruct;
- (void)loadArticleAndEmbedArticleViewController;
- (void)reportEvent:(id)arg1;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)loadingDidUpdateProgress:(double)arg1;
- (void)loadingDidFinishWithError:(id)arg1;
- (void)loadingDidStart;
- (void)loadingWillStart;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
@property(readonly, nonatomic) NSHashTable *loadingListeners;
- (id)initWithArticle:(id)arg1 articleViewControllerFactory:(id)arg2 settings:(id)arg3 errorMessageFactory:(id)arg4;
- (id)initWithArticle:(id)arg1 articleViewControllerFactory:(id)arg2 settings:(id)arg3 errorMessageFactory:(id)arg4 analyticsReporting:(id)arg5;
- (id)initWithArticle:(id)arg1 issue:(id)arg2 articleViewControllerFactory:(id)arg3 settings:(id)arg4 errorMessageFactory:(id)arg5 analyticsReporting:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
