//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface EJFontDescriptor : NSObject
{
    NSString *name;
    float size;
    _Bool bold;
    _Bool italic;
    unsigned long long hash;
}

+ (id)descriptorWithName:(id)arg1 size:(float)arg2 bold:(_Bool)arg3 italic:(_Bool)arg4;
@property(readonly, nonatomic) _Bool italic; // @synthesize italic;
@property(readonly, nonatomic) _Bool bold; // @synthesize bold;
@property(readonly, nonatomic) float size; // @synthesize size;
@property(readonly, nonatomic) NSString *name; // @synthesize name;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

