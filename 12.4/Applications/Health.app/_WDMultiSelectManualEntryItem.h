//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WDAddDataManualEntryItem.h"

@class NSArray;

@interface _WDMultiSelectManualEntryItem : WDAddDataManualEntryItem
{
    NSArray *_tableViewCells;
    NSArray *_titles;
    long long _selectedIndex;
}

@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
- (void).cxx_destruct;
- (id)generateValue;
- (void)cellForItemTapped:(id)arg1;
- (id)tableViewCells;

@end
