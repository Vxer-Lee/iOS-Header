//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXMemoriesRelatedDiagnosticsHelper : NSObject
{
}

+ (id)_curationFullsetForMemory:(id)arg1;
+ (id)_datesAndAssetCountDictionaryForAssetCollection:(id)arg1;
+ (id)_featureVectorInfoGroupedByKeyForFeatureVector:(id)arg1;
+ (id)_sanitizedGraphDataDictionaryForArchivingDictionary:(id)arg1 memoryLocalIdentifier:(id)arg2;
+ (id)getSummaryFromProviderItem:(id)arg1;
+ (_Bool)generateSectionTitles:(out id *)arg1 andTableContent:(out id *)arg2 forIndex:(long long)arg3 sourceMemory:(id)arg4 sourceDictionary:(id)arg5;
+ (id)preprocessDictionary:(id)arg1 forMemoryWithLocalIdentifier:(id)arg2 algorithmsVersion:(unsigned short)arg3 inPhotoLibrary:(id)arg4;

@end
