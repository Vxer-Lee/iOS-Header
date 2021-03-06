//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/AVVideoCompositionInstruction-Protocol.h>

@class NSArray, NSString;

@interface PUPerspectiveTransformVideoCompositionInstruction : NSObject <AVVideoCompositionInstruction>
{
    CDStruct_e83c9415 _timeRange;
    CDStruct_8e0628e6 _perspectiveTransform;
    struct CGAffineTransform _preferredTransform;
}

@property(nonatomic) struct CGAffineTransform preferredTransform; // @synthesize preferredTransform=_preferredTransform;
@property(nonatomic) CDStruct_8e0628e6 perspectiveTransform; // @synthesize perspectiveTransform=_perspectiveTransform;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(readonly, nonatomic) int passthroughTrackID;
@property(readonly, nonatomic) NSArray *requiredSourceTrackIDs;
@property(readonly, nonatomic) _Bool containsTweening;
@property(readonly, nonatomic) _Bool enablePostProcessing;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

