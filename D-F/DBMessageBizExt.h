//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface DBMessageBizExt : NSObject <WCTTableCoding>
{
    unsigned int _msgLocalId;
    unsigned int _msgType;
    unsigned int _msgInnerType;
    unsigned int _msgExtColInt1;
    unsigned int _msgExtColInt2;
    NSString *_chatUsername;
    NSString *_bizId;
    NSString *_msgExtColString1;
    NSString *_msgExtColString2;
}

+ (const struct WCTProperty *)msgExtColString2;
+ (const struct WCTProperty *)msgExtColString1;
+ (const struct WCTProperty *)msgExtColInt2;
+ (const struct WCTProperty *)msgExtColInt1;
+ (const struct WCTProperty *)bizId;
+ (const struct WCTProperty *)msgInnerType;
+ (const struct WCTProperty *)msgType;
+ (const struct WCTProperty *)msgLocalId;
+ (const struct WCTProperty *)chatUsername;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(retain, nonatomic) NSString *msgExtColString2; // @synthesize msgExtColString2=_msgExtColString2;
@property(retain, nonatomic) NSString *msgExtColString1; // @synthesize msgExtColString1=_msgExtColString1;
@property(nonatomic) unsigned int msgExtColInt2; // @synthesize msgExtColInt2=_msgExtColInt2;
@property(nonatomic) unsigned int msgExtColInt1; // @synthesize msgExtColInt1=_msgExtColInt1;
@property(retain, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(nonatomic) unsigned int msgInnerType; // @synthesize msgInnerType=_msgInnerType;
@property(nonatomic) unsigned int msgType; // @synthesize msgType=_msgType;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId=_msgLocalId;
@property(retain, nonatomic) NSString *chatUsername; // @synthesize chatUsername=_chatUsername;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end
