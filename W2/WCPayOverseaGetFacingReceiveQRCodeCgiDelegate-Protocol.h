//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WCPayOverseaGetFacingReceiveQRCodeResponse;

@protocol WCPayOverseaGetFacingReceiveQRCodeCgiDelegate <NSObject>
- (void)onWCPayOverseaGetFacingRecevieQRCodeResponseCgiError:(int)arg1 errorMsg:(NSString *)arg2;
- (void)onWCPayOverseaGetFacingRecevieQRCodeResponseBizError:(WCPayOverseaGetFacingReceiveQRCodeResponse *)arg1 errorCode:(int)arg2 errorMsg:(NSString *)arg3;
- (void)onWCPayOverseaGetFacingRecevieNotFixQRCodeResponseOK:(WCPayOverseaGetFacingReceiveQRCodeResponse *)arg1;
- (void)onWCPayOverseaGetFacingRecevieNotFixQRCodeLocalResponse:(WCPayOverseaGetFacingReceiveQRCodeResponse *)arg1;
- (void)onWCPayOverseaGetFacingReceiveFixQRCodeResponseOK:(WCPayOverseaGetFacingReceiveQRCodeResponse *)arg1;
@end

