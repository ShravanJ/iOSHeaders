/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AITFireProbe.h"

@class NSArray, NSDictionary, NSMutableString, NSSet, NSString, SearchEngineController, WBSURLSuffixChecker;

@interface SearchEngineInfo : _AITFireProbe
{
    NSString *_shortName;
    NSString *_scriptName;
    int _searchID;
    NSString *_searchURLTemplate;
    NSString *_suggestionsURLTemplate;
    NSDictionary *_topLevelDomains;
    NSString *_carrierInfo;
    NSString *_safeSearchSuffix;
    NSDictionary *_safeSearchURLQueryParameters;
    NSMutableString *_searchURL;
    SearchEngineController *_controller;
    WBSURLSuffixChecker *_suffixChecker;
    NSString *_queryKey;
    BOOL _usesSearchTermsFromFragment;
    NSSet *_homepageURLs;
    NSArray *_hostSuffixes;
    NSArray *_pathPrefixes;
}

+ (id)engineFromDictionary:(id)fp8 withController:(id)fp12;
- (id)safeSearchSuffix;
- (BOOL)usesSearchTermsFromFragment;
- (id)pathPrefixes;
- (id)hostSuffixes;
- (id)homepageURLs;
- (id)safeSearchURLQueryParameters;
- (void)setTopLevelDomains:(id)fp8;
- (id)topLevelDomains;
- (void)setSuggestionsURLTemplate:(id)fp8;
- (id)suggestionsURLTemplate;
- (void)setShortName:(id)fp8;
- (id)shortName;
- (void)setSearchURLTemplate:(id)fp8;
- (id)searchURLTemplate;
- (void)setSearchURL:(id)fp8;
- (id)searchURL;
- (void)setScriptName:(id)fp8;
- (id)scriptName;
- (void)setController:(id)fp8;
- (id)controller;
- (void)setCarrierInfo:(id)fp8;
- (id)carrierInfo;
- (void)dealloc;
- (id)displayName;
- (id)description;
- (id)safeSearchURLForSearchURL:(id)fp8;
- (BOOL)isHomepageURL:(id)fp8;
- (id)queryForSearchURL:(id)fp8;
- (id)_queryForSearchURLBasedOnTemplate:(id)fp8;
- (BOOL)isValidSearchURL:(id)fp8;
- (id)searchURLForQuery:(id)fp8;
- (void)setSearchURL;
- (id)getTopLevelDomainFor:(id)fp8;
- (int)searchID;
- (id)initWithName:(id)fp8 scriptName:(id)fp12 searchID:(int)fp16 searchTemplate:(id)fp20 homepageURLs:(id)fp24 hostSuffixes:(id)fp28 pathPrefixes:(id)fp32 usesSearchTermsFromFragment:(BOOL)fp36 suggestionsTemplate:(id)fp40 topLevelDomains:(id)fp44 safeSearchSuffix:(id)fp48 safeSearchURLQueryParameters:(id)fp52 controller:(id)fp56;

@end
