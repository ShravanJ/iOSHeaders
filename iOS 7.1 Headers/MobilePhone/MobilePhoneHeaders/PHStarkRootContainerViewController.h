/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookBeginExclusiveRead.h"

#import "UINavigationControllerDelegate-Protocol.h"

@class PHStarkMainMenuContainerViewController, UINavigationController;

@interface PHStarkRootContainerViewController : _ABAddressBookBeginExclusiveRead <UINavigationControllerDelegate>
{
    UINavigationController *_wrapperNavigationController;
    PHStarkMainMenuContainerViewController *_mainMenuContainerViewController;
}

- (void)dealloc;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;
- (void)loadView;
- (id)mainMenuContainerViewController;
- (void)navigationController:(id)fp8 willShowViewController:(id)fp12 animated:(BOOL)fp16;
- (void)setMainMenuContainerViewController:(id)fp8;
- (void)setWrapperNavigationController:(id)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (id)wrapperNavigationController;

@end

