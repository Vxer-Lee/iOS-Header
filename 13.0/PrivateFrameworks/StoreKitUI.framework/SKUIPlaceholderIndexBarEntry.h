//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIIndexBarEntry.h>

__attribute__((visibility("hidden")))
@interface SKUIPlaceholderIndexBarEntry : SKUIIndexBarEntry
{
    struct CGSize _placeholderSize;
}

@property(readonly, nonatomic) struct CGSize placeholderSize; // @synthesize placeholderSize=_placeholderSize;
- (struct CGSize)_calculatedContentSize;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithPlaceholderSize:(struct CGSize)arg1;

@end
