/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AITFireProbe.h"

@class UIView;

@interface RotatablePopoverController : _AITFireProbe
{
    struct CGRect _presentationRect;
    UIView *_presentationView;
    unsigned int _permittedArrowDirections;
    BOOL _supportsRotation;
    int _buttonIdentifier;
}

- (void)setButtonIdentifier:(int)fp8;
- (int)buttonIdentifier;
- (void)setPresentationRect:(struct CGRect)fp8;
- (struct CGRect)presentationRect;
- (void)setSupportsRotation:(BOOL)fp8;
- (BOOL)supportsRotation;
- (void)setPermittedArrowDirections:(unsigned int)fp8;
- (unsigned int)permittedArrowDirections;
- (void)setPresentationView:(id)fp8;
- (id)presentationView;
- (void)presentPopoverFromBarButtonItem:(id)fp8 animated:(BOOL)fp12;
- (void)presentPopoverAnimated:(BOOL)fp8;
- (id)delegate;
- (void)setDelegate:(id)fp8;
- (void)dealloc;
- (id)initWithContentViewController:(id)fp8;

@end

