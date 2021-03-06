//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TXIVideoEncoder.h"

@class NSObject<OS_dispatch_queue>;

@interface TXCHWVideoEncoder : TXIVideoEncoder
{
    long long _bitrate;
    long long _realBitrate;
    long long _realFPS;
    long long _encoderInitFPS;
    long long _lastBitrate;
    unsigned long long _gopIndex;
    unsigned long long _gopFrameIndex;
    unsigned long long _frameIndex;
    unsigned long long _lastDTS;
    struct OpaqueVTCompressionSession *_compressionSession;
    double _lastIFrameTickMS;
    double _lastFPSTickMS;
    unsigned long long _encodeBytesForThisGOP;
    unsigned int _encodeFrameCountForFPS;
    unsigned int _encodeFrameCount;
    _Bool _bVBR;
    _Bool _bEnableBFrame;
    NSObject<OS_dispatch_queue> *_encodeQueue;
}

- (void).cxx_destruct;
- (void)onCodecFinished:(void *)arg1 Status:(int)arg2 InfoFlags:(unsigned int)arg3 SampleBufferRef:(struct opaqueCMSampleBuffer *)arg4;
- (void)callDelegate:(char *)arg1 length:(unsigned long long)arg2 type:(int)arg3 gopIndex:(unsigned long long)arg4 gopFrameIndex:(unsigned long long)arg5 frameIndex:(unsigned long long)arg6 refFrameIndex:(unsigned long long)arg7 pts:(unsigned long long)arg8 dts:(unsigned long long)arg9 error:(int)arg10;
- (_Bool)encodeSample:(struct opaqueCMSampleBuffer *)arg1 timestamp:(unsigned long long)arg2;
- (int)releaseEncoder;
- (int)createEncoder:(struct tagTXSVideoEncoderParam *)arg1 IsRealTime:(_Bool)arg2;
- (int)initEncoder:(struct tagTXSVideoEncoderParam *)arg1;
- (long long)encodeFrameCount;
- (long long)realFPS;
- (long long)realBitrate;
- (void)setBitrate:(long long)arg1;
- (long long)pushSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 timestamp:(unsigned long long)arg2;
- (long long)stop;
- (long long)startWith:(struct tagTXSVideoEncoderParam *)arg1;
- (void)dealloc;
- (id)init;

@end

