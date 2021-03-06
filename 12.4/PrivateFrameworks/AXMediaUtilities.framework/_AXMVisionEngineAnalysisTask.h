//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/AXMTask.h>

@class AXMSourceNode, AXMVisionPipelineContext, NSUUID;

@interface _AXMVisionEngineAnalysisTask : AXMTask
{
    NSUUID *_identifier;
    AXMVisionPipelineContext *_context;
    AXMSourceNode *_source;
}

+ (id)itemWithSource:(id)arg1 context:(id)arg2;
@property(retain, nonatomic) AXMSourceNode *source; // @synthesize source=_source;
@property(retain, nonatomic) AXMVisionPipelineContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithSource:(id)arg1 context:(id)arg2;

@end

