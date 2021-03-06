//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CSBiometricMatchMonitor, CSGestureMonitor, NSDictionary, NSURL;
@protocol CSAudioFileWriter, OS_dispatch_queue;

@interface CSSpIdImplicitTraining : NSObject
{
    unsigned long long _triggerEndMachTime;
    unsigned long long _triggerStartMachTime;
    unsigned long long _extraSamplesAtBegining;
    unsigned long long _numSamplesAdded;
    unsigned long long _discardedPaylodSamples;
    _Bool _implicitRecordingInProgress;
    NSURL *_lastCachedUtterance;
    id <CSAudioFileWriter> _uttLogger;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_recordingContext;
    NSDictionary *_voiceTriggerEventInfo;
    CSBiometricMatchMonitor *_biometricMonitor;
    CSGestureMonitor *_gestureMonitor;
}

+ (id)sharedInstance;
@property(retain, nonatomic) CSGestureMonitor *gestureMonitor; // @synthesize gestureMonitor=_gestureMonitor;
@property(retain, nonatomic) CSBiometricMatchMonitor *biometricMonitor; // @synthesize biometricMonitor=_biometricMonitor;
@property(retain, nonatomic) NSDictionary *voiceTriggerEventInfo; // @synthesize voiceTriggerEventInfo=_voiceTriggerEventInfo;
@property(retain, nonatomic) NSDictionary *recordingContext; // @synthesize recordingContext=_recordingContext;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <CSAudioFileWriter> uttLogger; // @synthesize uttLogger=_uttLogger;
@property(retain, nonatomic) NSURL *lastCachedUtterance; // @synthesize lastCachedUtterance=_lastCachedUtterance;
- (void).cxx_destruct;
- (_Bool)_isUtteranceHandheld;
- (unsigned long long)_getBiometricMatchResultForTriggerTimeStamp:(unsigned long long)arg1;
- (unsigned long long)_getNumberOfWavFilesAt:(id)arg1;
- (void)recordingStoppedForReason:(long long)arg1;
- (void)processImplicitTrainingUtteranceWithVoiceTriggerEventInfo:(id)arg1;
- (void)processAudioChunk:(id)arg1;
- (void)processImplicitTrainingUtterance:(id)arg1 forVoiceProfileId:(id)arg2 withRecordDeviceInfo:(id)arg3 withRecordCtxt:(id)arg4 withVoiceTriggerCtxt:(id)arg5 withOtherCtxt:(id)arg6 withCompletion:(CDUnknownBlockType)arg7;
- (id)init;

@end

