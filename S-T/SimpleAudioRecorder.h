//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMTimer, SimpleRecordState;

@interface SimpleAudioRecorder : NSObject
{
    _Bool _m_hasPrepare;
    MMTimer *_m_meterTimer;
    SimpleRecordState *_m_bufferState;
}

+ (void)sprintRetCode:(int)arg1;
@property(nonatomic) _Bool m_hasPrepare; // @synthesize m_hasPrepare=_m_hasPrepare;
@property(retain, nonatomic) SimpleRecordState *m_bufferState; // @synthesize m_bufferState=_m_bufferState;
@property(retain, nonatomic) MMTimer *m_meterTimer; // @synthesize m_meterTimer=_m_meterTimer;
- (void).cxx_destruct;
- (void)printRetCode:(int)arg1;
- (void)stop;
- (_Bool)record;
- (_Bool)audioQueueStop;
- (_Bool)audioQueueStart;
- (_Bool)prepareRecord;
- (_Bool)updateBuffer;
- (void)clearBuffer;
- (_Bool)updateQueue;
- (void)clearQueue;
- (_Bool)updateDataFormat;
- (long long)RecordingTime;
- (id)getState;
- (void)onMeterChange;
- (id)init;
- (void)dealloc;

@end

