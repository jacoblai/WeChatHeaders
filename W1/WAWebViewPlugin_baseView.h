//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAWebViewPlugin_embedView.h"

#import "WABaseViewDelegate.h"

@class NSString;

@interface WAWebViewPlugin_baseView : WAWebViewPlugin_embedView <WABaseViewDelegate>
{
}

- (void)onButtonClick:(id)arg1;
- (void)removeBaseView:(unsigned int)arg1;
- (void)updateBaseView:(id)arg1;
- (unsigned int)insertBaseView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
