//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@protocol WAAppActionSheetDelegate <NSObject>

@optional
- (UIImage *)takeCurrentSnapshot;
- (void)onWAActionSheetDidDismiss;
- (void)onWAActionSheetWillDismiss;
- (void)onWAActionSheetInfoClicked;
- (void)onWAActionSheetDestruct;
- (void)onWAActionSheetClickButtonWithButtonTitle:(NSString *)arg1;
- (void)onWAActionSheetCancel;
@end
