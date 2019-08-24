//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@protocol EQKitLayoutContext;

@protocol EQKitLayout <NSObject>
- (void)renderIntoContext:(struct CGContext *)arg1 offset:(struct CGPoint)arg2;
- (struct CGRect)erasableBounds;
- (double)naturalAlignmentOffset;
- (double)vsize;
- (double)width;
- (double)depth;
- (double)height;
- (_Bool)layoutWithContext:(id <EQKitLayoutContext>)arg1;
@end
