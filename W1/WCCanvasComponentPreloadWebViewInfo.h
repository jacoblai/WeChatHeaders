//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCoding.h"

@class NSString;

@interface WCCanvasComponentPreloadWebViewInfo : MMObject <NSCoding>
{
    NSString *_webviewUrl;
    double _webviewWidth;
    double _webviewHeight;
}

@property(nonatomic) double webviewHeight; // @synthesize webviewHeight=_webviewHeight;
@property(nonatomic) double webviewWidth; // @synthesize webviewWidth=_webviewWidth;
@property(retain, nonatomic) NSString *webviewUrl; // @synthesize webviewUrl=_webviewUrl;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

