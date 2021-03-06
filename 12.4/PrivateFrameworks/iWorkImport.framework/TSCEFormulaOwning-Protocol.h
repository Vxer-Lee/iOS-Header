//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class TSCECalculationEngine;
@protocol TSCEReferenceResolving;

@protocol TSCEFormulaOwning <NSObject>
- (UUIDData_5fbc143e)ownerUID;
- (void)invalidateForCalcEngine:(TSCECalculationEngine *)arg1;
- (void)writeResultsForCalcEngine:(TSCECalculationEngine *)arg1;
- (CDStruct_2a4d9400)recalculateForCalcEngine:(TSCECalculationEngine *)arg1 atFormulaCoord:(struct TSUCellCoord)arg2 recalcOptions:(CDStruct_3d581f42)arg3;
- (id <TSCEReferenceResolving>)linkedResolver;
- (unsigned short)ownerKind;
@end

