//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSArray, NSSet;
@protocol PLHighlightItem;

@protocol PLHighlightItemPromoterRule <NSObject>
- (id <PLHighlightItem>)fallbackHighlightItemFromAllHighlightItems:(NSSet *)arg1;
- (NSArray *)highlightItemsSortedByImportance:(NSSet *)arg1;
- (_Bool)highlightItemHasMinimumRequirementToBePromoted:(id <PLHighlightItem>)arg1;
- (unsigned long long)maximumNumberOfHighlightItemsToPromote;
@end
