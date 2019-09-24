//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MLModel, MLUpdateTask, NSDictionary, NSError;
@protocol MLWritable;

@interface MLUpdateContext : NSObject
{
    MLUpdateTask *_task;
    MLModel<MLWritable> *_model;
    long long _event;
    NSDictionary *_metrics;
    NSDictionary *_parameters;
    NSError *_error;
}

+ (id)updateContextForEvent:(long long)arg1 metrics:(id)arg2 parameters:(id)arg3 error:(id)arg4;
+ (id)updateContextWithTask:(id)arg1 model:(id)arg2 event:(long long)arg3 metrics:(id)arg4 parameters:(id)arg5;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NSDictionary *metrics; // @synthesize metrics=_metrics;
@property(nonatomic) long long event; // @synthesize event=_event;
@property(retain, nonatomic) MLModel<MLWritable> *model; // @synthesize model=_model;
@property(retain, nonatomic) MLUpdateTask *task; // @synthesize task=_task;
- (void).cxx_destruct;
- (id)description;

@end
