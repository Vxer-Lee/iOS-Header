//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOVenueFilterItem-Protocol.h>

@protocol GEOVenueIdentifier, GEOVenueLabel;

@interface GEOVenueFilterItem : NSObject <GEOVenueFilterItem>
{
    id <GEOVenueIdentifier> _filterID;
    id <GEOVenueLabel> _label;
    _Bool _describesParentVenue;
}

@property(readonly, nonatomic) _Bool describesParentVenue; // @synthesize describesParentVenue=_describesParentVenue;
@property(readonly, nonatomic) id <GEOVenueLabel> label; // @synthesize label=_label;
@property(readonly, nonatomic) id <GEOVenueIdentifier> filterID; // @synthesize filterID=_filterID;
- (void).cxx_destruct;
- (id)initWithFilterElementInfo:(id)arg1;
- (id)initWithLabel:(id)arg1 filterID:(id)arg2;

@end
