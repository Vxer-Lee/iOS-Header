//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXTilingLayoutInvalidationContext.h>

@class PXRelatedDataSource;

@interface PXRelatedTilingLayoutInvalidationContext : PXTilingLayoutInvalidationContext
{
    PXRelatedDataSource *_fromDataSource;
    PXRelatedDataSource *_toDataSource;
}

@property(retain, nonatomic) PXRelatedDataSource *toDataSource; // @synthesize toDataSource=_toDataSource;
@property(retain, nonatomic) PXRelatedDataSource *fromDataSource; // @synthesize fromDataSource=_fromDataSource;
- (void).cxx_destruct;

@end
