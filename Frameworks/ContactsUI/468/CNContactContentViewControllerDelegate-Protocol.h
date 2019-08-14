//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsUI/CNContactViewControllerDelegate-Protocol.h>

@class CNContact, CNContactContentViewController, CNContactViewController, NSString, UIViewController;

@protocol CNContactContentViewControllerDelegate <CNContactViewControllerDelegate>

@optional
- (UIViewController *)contactPresentedViewController:(CNContactViewController *)arg1;
- (void)contactViewController:(CNContactContentViewController *)arg1 didDeleteContact:(CNContact *)arg2;
- (void)contactViewController:(CNContactContentViewController *)arg1 didCompleteWithContact:(CNContact *)arg2;
- (void)contactViewController:(CNContactContentViewController *)arg1 didChangeToEditMode:(BOOL)arg2;
- (BOOL)contactViewController:(CNContactContentViewController *)arg1 shouldPerformDefaultActionForContact:(CNContact *)arg2 propertyKey:(NSString *)arg3 propertyIdentifier:(NSString *)arg4;
@end
