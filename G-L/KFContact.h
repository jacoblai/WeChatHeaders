//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBaseContact.h"

#import "WCTTableCoding.h"

@class NSString;

@interface KFContact : CBaseContact <WCTTableCoding>
{
    _Bool _headImgUpdateFlag;
    unsigned int _updateTime;
    NSString *kfOpenId;
    NSString *_brand;
    NSString *_headImageUrl;
    NSString *_nickName;
}

+ (const struct WCTProperty *)headImgUpdateFlag;
+ (const struct WCTProperty *)updateTime;
+ (const struct WCTProperty *)nickName;
+ (const struct WCTProperty *)headImageUrl;
+ (const struct WCTProperty *)brand;
+ (const struct WCTProperty *)kfOpenId;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(nonatomic) _Bool headImgUpdateFlag; // @synthesize headImgUpdateFlag=_headImgUpdateFlag;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime=_updateTime;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *headImageUrl; // @synthesize headImageUrl=_headImageUrl;
@property(retain, nonatomic) NSString *brand; // @synthesize brand=_brand;
@property(retain, nonatomic) NSString *kfOpenId; // @synthesize kfOpenId;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

