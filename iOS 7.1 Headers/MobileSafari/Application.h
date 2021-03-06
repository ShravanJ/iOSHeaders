/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AITFireProbe.h"

#import "PageLoadTestRunnerDelegate-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"

@class BrowserController, NSString, NSTimer;

@interface Application : _AITFireProbe <PageLoadTestRunnerDelegate, UIApplicationDelegate>
{
    BrowserController *_controller;
    BOOL _finishedLaunching;
    BOOL _isHidingBrowserPanelForSuspend;
    BOOL _isHandlingMemoryWarning;
    NSTimer *_memoryWarningTimer;
    double _memoryWarningSleepInterval;
    int _memoryWarningState;
    BOOL _isReadingDefaults;
    BOOL _shouldReadDefaultsOnResume;
    NSString *_defaultPNGName;
    BOOL _isRunningShowBookmarksTest;
    BOOL _startedBookmarksTest;
    BOOL _isRunningCanvasTest;
}

+ (id)sharedTestRunner;
+ (void)commandLineTestOption:(int)fp8 arg:(const char *)fp12;
- (BOOL)finishedLaunching;
- (BOOL)isHidingBrowserPanelForSuspend;
- (id)window;
- (void)finishedTest:(id)fp8 extraResults:(id)fp12;
- (void)applicationWillTerminate;
- (void)applicationDidFinishLaunching:(id)fp8;
- (void)_setHandlingURL:(BOOL)fp8 url:(id)fp12;
- (void)_reloadSearchEngines;
- (void)userDefaultsDidChange:(id)fp8;
- (void)applicationOpenURL:(id)fp8;
- (void)_saveNSURLCacheToDiskInBackground:(BOOL)fp8;
- (void)applicationDidEnterBackground:(id)fp8;
- (void)applicationWillEnterForeground:(id)fp8;
- (void)clearReaderViewsExceptMultiplePageReader:(BOOL)fp8;
- (void)applicationDidBecomeActive:(id)fp8;
- (void)applicationWillResignActive:(id)fp8;
- (void)applicationResume:(struct __GSEvent *)fp8;
- (BOOL)applicationSuspend:(struct __GSEvent *)fp8 settings:(id)fp12;
- (void)_applicationWillSuspend;
- (void)_resumeForEventsOnly:(BOOL)fp8;
- (void)_readDefaults;
- (void)_suspendForEventsOnly:(BOOL)fp8;
- (id)nameOfDefaultImageToUpdateAtSuspension;
- (void)dealloc;
- (id)lastPageLoadTime;
- (id)lastPageVisualLayoutTime;
- (id)linksOnActivePage;
- (id)activeURL;
- (id)setNotifyPageLoadDidFinish:(id)fp8;
- (id)loadURLInNewWindow:(id)fp8;
- (id)loadURL:(id)fp8;
- (void)stopLoading;
- (void)scrollDocumentDown;
- (id)isAtEndOfPage;
- (id)isLoading;
- (void)_dumpMemoryStatistics:(BOOL)fp8;
- (void)reduceMemoryOnApplicationSuspendIfNeeded;
- (void)didReceiveMemoryWarning;
- (void)_handleMemoryWarningLevel;
- (void)_stopMemoryWarningTimer;
- (void)_startMemoryWarningTimer;
- (BOOL)isStillUnderMemoryPressure;
- (BOOL)_adjustMemoryPressureStatus:(BOOL)fp8;
- (BOOL)_purgeLowPriorityNavigationSnapshots;
- (void)_handleMemoryWarningBackground;
- (void)_handleMemoryWarningCriticalPriority;
- (BOOL)_handleMemoryWarningHighPriority:(id)fp8;
- (BOOL)_handleMemoryWarningMediumPriority:(id)fp8;
- (BOOL)_hibernateOneDocumentFrom:(id)fp8;
- (void)_hibernateTabDocument:(id)fp8;
- (void)_handleMemoryWarningLowPriority;
- (void)_incrementMemoryWarningState;
- (void)categorizeInMemoryImportantDocuments:(id)fp8 unimportantDocuments:(id)fp12;
- (void)_addTabDocumentToArrayInLastViewedTimeOrder:(id)fp8 documents:(id)fp12;
- (void)initMemoryJetsamInfo;
- (void)setHandlingMemoryWarning:(BOOL)fp8;
- (BOOL)isHandlingMemoryWarning;
- (BOOL)didStartBookmarksTest;
- (BOOL)isRunningCanvasTest;
- (BOOL)isRunningShowBookmarksTest;
- (void)finishedBookmarksTest;
- (void)startBookmarksTest;
- (BOOL)prepareBookmarksTest;
- (void)finishedCanvasTestWithURL:(id)fp8 forTabDocument:(id)fp12;
- (void)_pollCanvasTest:(id)fp8;
- (BOOL)startCanvasTest:(id)fp8;
- (void)failedPurpleTestWithError:(id)fp8;
- (void)finishedPurpleTest:(id)fp8;
- (void)startedPurpleTest;
- (void)setupTabViewBringUpTest;
- (void)startTabViewBringUpTest;
- (void)loadBlankPageforKeyboardTests;
- (void)startKeyboardRotationTest;
- (void)startKeyboardBringupTest;
- (void)startKeyboardSplitAndMergeTest;
- (BOOL)runTest:(id)fp8 options:(id)fp12;
- (id)_numberOption:(id)fp8;
- (void)checkExtendedLaunchPageLoad:(id)fp8 forTabDocument:(id)fp12;
- (id)_extendLaunchTest;
- (BOOL)disableRestoreTabState;
- (void)startCommandLineTest;
- (void)pageLoadTestRunnerFinished:(id)fp8;
- (BOOL)_isTaskFootprintReachedLimit;

@end

