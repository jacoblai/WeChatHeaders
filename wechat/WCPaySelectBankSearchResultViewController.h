//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@class NSArray;

@interface WCPaySelectBankSearchResultViewController : WCPayBaseViewController
{
    id <WCPaySelectBankSearchResultViewControllerDelegate> _delegate;
    NSArray *_results;
}

@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(nonatomic) __weak id <WCPaySelectBankSearchResultViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)tableViewForHeader;
- (void)clickInfoCell:(id)arg1;
- (void)makeSearchBankCell:(id)arg1 CellInfo:(id)arg2;
- (void)reloadData;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;

@end
