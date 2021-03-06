//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WALoadingViewController.h"

#import "IWALocalCacheMgrExt.h"

@class UILabel, UIView;

@interface WAGameLoadingViewController : WALoadingViewController <IWALocalCacheMgrExt>
{
    UIView *_fakeNavBar;
    UIView *_backgroundView;
    UILabel *_progressLabel;
}

- (void).cxx_destruct;
- (void)startEnterAppAnimation;
- (void)onUpdateAppPkgComplete:(_Bool)arg1 withAppInfoData:(id)arg2 errorCode:(unsigned int)arg3 errorMsg:(id)arg4;
- (void)onUpdateAppPkgProgress:(float)arg1 remainingTime:(unsigned long long)arg2 withAppInfoData:(id)arg3;
- (void)dealloc;
- (id)initWithContact:(id)arg1 pagePath:(id)arg2;

@end

