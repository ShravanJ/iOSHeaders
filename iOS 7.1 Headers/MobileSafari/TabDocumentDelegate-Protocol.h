/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

@protocol TabDocumentDelegate
- (id)blankTabTitleForTabDocument:(id)fp8;
- (void)setStoreBannerPinnedToTop:(BOOL)fp8 forTabDocument:(id)fp12;
- (void)removeStoreBannerFromTabDocument:(id)fp8 animated:(BOOL)fp12;
- (void)setShowingStoreBanner:(id)fp8 isShowing:(BOOL)fp12;
- (void)tabDocumentDidCompleteCheckForStoreBanner:(id)fp8;
- (void)composeEmailWithMailToURL:(id)fp8 forTabDocument:(id)fp12;
- (void)hideAlertForTabDocument:(id)fp8;
- (void)showAlertForTabDocument:(id)fp8;
- (void)tabDocumentDidCancelRedirectToExternalApplication:(id)fp8;
- (BOOL)tabDocumentCanRedirectToExternalApplication:(id)fp8;
- (BOOL)tabDocumentCanDownloadFile:(id)fp8;
- (BOOL)tabDocumentCanClearRenderTreeSizeThresholdForReset:(id)fp8;
- (void)tabDocumentWillStartLoadFromUserClick:(id)fp8;
- (void)tabDocument:(id)fp8 didDetectReaderAvailability:(BOOL)fp12;
- (BOOL)tabDocument:(id)fp8 handleCertificateError:(id)fp12 forDataSource:(id)fp16;
- (void)tabDocument:(id)fp8 didCancelAuthenticationChallenge:(id)fp12;
- (void)tabDocument:(id)fp8 didReceiveAuthenticationChallenge:(id)fp12 fromDataSource:(id)fp16;
- (void)tabDocumentFluidProgressRocketAnimationDidComplete:(id)fp8;
- (void)tabDocumentStoppedLoadingResource:(id)fp8;
- (void)tabDocumentStartedLoadingResource:(id)fp8;
- (void)tabDocument:(id)fp8 progressChanged:(float)fp12;
- (void)tabDocumentDidChangeLocationWithinPageForMainFrame:(id)fp8;
- (void)tabDocumentDidUpdateBackForward:(id)fp8;
- (void)tabDocumentDidUpdateURL:(id)fp8;
- (void)tabDocumentDidUpdateTitle:(id)fp8;
- (void)tabDocumentProgressDidStall:(id)fp8;
- (void)tabDocumentDidUpdatePersistentState:(id)fp8;
- (void)tabDocument:(id)fp8 didFinishLoadingWithError:(BOOL)fp12;
- (void)tabDocumentDidStartLoading:(id)fp8;
@end

