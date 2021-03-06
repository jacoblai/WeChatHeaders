//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ForwardMessageLogicDelegate.h"
#import "IWACommentMgrExt.h"
#import "WAContactMgrExtension.h"
#import "WCActionSheetDelegate.h"

@class CContact, ForwardMessageLogicController, MMTableViewInfo, NSString, UIView, WACommentPreloadInfo, WACommentScoreView, WACommentScoreViewModel, WAContactGetter;

@interface WAProfileViewController : MMUIViewController <ForwardMessageLogicDelegate, WAContactMgrExtension, WCActionSheetDelegate, IWACommentMgrExt>
{
    _Bool _isGameWhatsNewScene;
    _Bool _isEnterStatisticUploaded;
    unsigned int _fromAppVersion;
    unsigned int _enterProfileTimeStamp;
    NSString *_username;
    MMTableViewInfo *_tableViewInfo;
    UIView *_headerView;
    UIView *_footerView;
    WAContactGetter *_contactGetter;
    CContact *_contact;
    ForwardMessageLogicController *_forwardLogic;
    unsigned long long _enterScene;
    NSString *_sceneNote;
    unsigned long long _exposeFrom;
    NSString *_pagePath;
    unsigned long long _fromDebugMode;
    unsigned long long _preScene;
    NSString *_preSceneNote;
    WACommentScoreView *_scoreView;
    WACommentScoreViewModel *_scoreViewModel;
    WACommentPreloadInfo *_commentPreloadInfo;
}

@property(retain, nonatomic) WACommentPreloadInfo *commentPreloadInfo; // @synthesize commentPreloadInfo=_commentPreloadInfo;
@property(retain, nonatomic) WACommentScoreViewModel *scoreViewModel; // @synthesize scoreViewModel=_scoreViewModel;
@property(retain, nonatomic) WACommentScoreView *scoreView; // @synthesize scoreView=_scoreView;
@property(copy, nonatomic) NSString *preSceneNote; // @synthesize preSceneNote=_preSceneNote;
@property(nonatomic) unsigned long long preScene; // @synthesize preScene=_preScene;
@property(nonatomic) unsigned int enterProfileTimeStamp; // @synthesize enterProfileTimeStamp=_enterProfileTimeStamp;
@property(nonatomic) _Bool isEnterStatisticUploaded; // @synthesize isEnterStatisticUploaded=_isEnterStatisticUploaded;
@property(nonatomic) unsigned int fromAppVersion; // @synthesize fromAppVersion=_fromAppVersion;
@property(nonatomic) unsigned long long fromDebugMode; // @synthesize fromDebugMode=_fromDebugMode;
@property(copy, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property(nonatomic) unsigned long long exposeFrom; // @synthesize exposeFrom=_exposeFrom;
@property(copy, nonatomic) NSString *sceneNote; // @synthesize sceneNote=_sceneNote;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) WAContactGetter *contactGetter; // @synthesize contactGetter=_contactGetter;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
@property(nonatomic) _Bool isGameWhatsNewScene; // @synthesize isGameWhatsNewScene=_isGameWhatsNewScene;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (void)onFetchComments:(id)arg1 mergedComments:(id)arg2 isNoMoreData:(_Bool)arg3 andScore:(unsigned int)arg4 totalCount:(unsigned int)arg5 withRetCode:(int)arg6 appid:(id)arg7;
- (void)onModifyWeAppContact:(id)arg1;
- (id)getCurrentViewController;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (void)onShareWeApp:(id)arg1;
- (void)onOpenWeApp:(id)arg1;
- (double)getCategoryDisplayWidth;
- (double)getCellTitleWidth;
- (id)getBrandCellTitleString;
- (id)getCategoryCellTitleString;
- (void)updateWeappContact;
- (void)openBrandContact:(id)arg1;
- (void)onCommentCell:(id)arg1 indexPath:(id)arg2;
- (void)onBrandContactCell:(id)arg1 indexPath:(id)arg2;
- (void)onDevInfoCell:(id)arg1 indexPath:(id)arg2;
- (id)makeTableFooterView;
- (id)makeTableHeaderView;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)makeBrandContactCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeDevInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeSignatureCell:(id)arg1 cellInfo:(id)arg2;
- (id)genBusinessScopeLabelWithText:(id)arg1 titleLabel:(id)arg2;
- (double)caculateHeightForBrandCell;
- (double)caculateHeightForBusinessScope;
- (id)genCategoryString;
- (void)makeCommentCell:(id)arg1 CellInfo:(id)arg2;
- (double)heightForCommentCell;
- (_Bool)shouldShowCommentSection;
- (void)reloadTableViewInfo;
- (void)reloadTableView;
- (void)initTableViewInfo;
- (void)viewDidLayoutSubviews;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onMore;
- (void)onReturn;
- (void)initCustomNavigationBar;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)dealloc;
- (id)initWithUsername:(id)arg1 scene:(unsigned long long)arg2 sceneNote:(id)arg3 exposeFrom:(unsigned long long)arg4 fromPagePath:(id)arg5 fromWeappDebugMode:(unsigned long long)arg6 fromWeappVersion:(unsigned int)arg7 sourceType:(unsigned long long)arg8 sourceInfo:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

