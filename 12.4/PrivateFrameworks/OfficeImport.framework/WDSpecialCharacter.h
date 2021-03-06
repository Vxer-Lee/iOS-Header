//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/WDRun.h>

@class WDCharacterProperties;

__attribute__((visibility("hidden")))
@interface WDSpecialCharacter : WDRun
{
    WDCharacterProperties *mProperties;
    int mType;
}

- (id)description;
- (id)initWithParagraph:(id)arg1;
- (void)setCharacterType:(int)arg1;
- (int)characterType;
- (int)runType;
- (void)clearProperties;
- (id)properties;
- (void)dealloc;

@end

