/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AITFireProbe.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, TopHitCompletionPromotionRecognizer, TopHitCompletionView, URLCompletionItem;

@interface UnifiedField : _AITFireProbe <UIGestureRecognizerDelegate>
{
    BOOL _lastEditWasADeletion;
    NSString *_pendingTopHitNavigationText;
    struct CGSize _placeholderSize;
    URLCompletionItem *_topHit;
    TopHitCompletionView *_topHitCompletionView;
    TopHitCompletionPromotionRecognizer *_topHitCompletionPromotionRecognizer;
    int _cursorPositioning;
}

- (void)setCursorPositioning:(int)fp8;
- (int)cursorPositioning;
- (id).cxx_construct;
- (id)_findPleasingWordBoundaryFromPosition:(id)fp8;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)layoutSubviews;
- (void)setPlaceholder:(id)fp8;
- (struct CGRect)editRect;
- (float)placeholderHorizontalInset;
- (void)_layoutTopHitCompletionView;
- (void)topHitDidBecomeReady;
- (void)_setTopHit:(id)fp8;
- (id)_topHit;
- (void)_promoteTopHitCompletion;
- (id)_topHitCompletionString;
- (BOOL)gestureRecognizer:(id)fp8 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)fp12;
- (BOOL)gestureRecognizer:(id)fp8 shouldReceiveTouch:(id)fp12;
- (void)_removeTopHitCompletionView;
- (void)_cancelPendingTopHitNavigation;
- (BOOL)_caretHiddenDueToTopHit;
- (void)cut:(id)fp8;
- (void)copy:(id)fp8;
- (id)_textForPasteboard;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)fp8;
- (void)setAttributedText:(id)fp8;
- (void)setText:(id)fp8;
- (BOOL)keyboardInputShouldDelete:(id)fp8;
- (BOOL)keyboardInput:(id)fp8 shouldInsertText:(id)fp12 isMarkedText:(BOOL)fp16;
- (id)_topHitForCurrentText;
- (BOOL)_waitingForTopHitForCurrentText;
- (void)_textDidChangeFromTyping;
- (void)_updateReturnKey;
- (void)_endEditingWithCurrentText;
- (id)_clearButtonImageForState:(unsigned int)fp8;
- (unsigned int)_unifiedFieldInputType;
- (id)placeholderColor;
- (void)setPlaceholderColor:(id)fp8;
- (id)defaultPlaceholderColor;
- (id)textWithoutWhitespace;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8;

@end
