//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WCAppAuthAppMetaInfo : MMObject
{
    unsigned int appType;
    NSString *appId;
    NSString *appName;
    NSString *appTypeDesc;
}

+ (void)initialize;
@property(nonatomic) unsigned int appType; // @synthesize appType;
@property(copy, nonatomic) NSString *appTypeDesc; // @synthesize appTypeDesc;
@property(copy, nonatomic) NSString *appName; // @synthesize appName;
@property(copy, nonatomic) NSString *appId; // @synthesize appId;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithAuthAppPBData:(id)arg1;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

@end

