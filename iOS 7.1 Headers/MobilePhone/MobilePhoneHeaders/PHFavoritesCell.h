/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookBeginExclusiveRead.h"

@class PHFavoritesEntry, UIImageView, UILabel;

@interface PHFavoritesCell : _ABAddressBookBeginExclusiveRead
{
    UILabel *_titleTextLabel;
    UILabel *_labelTextLabel;
    UIImageView *_iconGlyphView;
    UIImageView *_contactPhotoView;
    PHFavoritesEntry *_favoritesEntry;
}

+ (float)editingMarginWidth;
+ (id)faceTimeAudioGlyph;
+ (id)faceTimeAudioGlyphPress;
+ (id)faceTimeGlyph;
+ (id)faceTimeGlyphPress;
+ (float)height;
+ (float)marginWidth;
+ (BOOL)shouldShowContactPhotos;
- (BOOL)_drawsTopSeparatorDuringReordering;
- (void)_handleContentSizeCategoryDidChange:(id)fp8;
- (void)_handleFavoritesEntryChanged:(id)fp8;
- (void)_handleFavoritesShowsContactPhotosChanged:(id)fp8;
- (void)_populateSubviewsFromFavoritesItem;
- (void)_setReordering:(BOOL)fp8;
- (void)_updateFonts;
- (void)dealloc;
- (id)favoritesEntry;
- (id)initWithStyle:(int)fp8 reuseIdentifier:(id)fp12;
- (void)layoutSubviews;
- (void)setFavoritesEntry:(id)fp8;
- (BOOL)shouldShowContactPhotos;
- (BOOL)shouldShowIconGlyph;
- (BOOL)shouldShowTextLabel;

@end
