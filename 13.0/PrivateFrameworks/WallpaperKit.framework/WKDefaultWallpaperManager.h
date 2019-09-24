//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, WKWallpaperBundleImporter;

@interface WKDefaultWallpaperManager : NSObject
{
    NSDictionary *__defaultWallpaperLookup;
    WKWallpaperBundleImporter *__defaultWallpaperBundleImporter;
}

+ (id)deviceEnclosureColor;
+ (id)deviceColor;
+ (id)deviceLogicalScreenClass;
+ (id)deviceProductType;
+ (id)defaultWallpaperLookupURL;
+ (id)_pathForStillWallpapers;
+ (id)defaultWallpaperManager;
@property(retain, nonatomic) WKWallpaperBundleImporter *_defaultWallpaperBundleImporter; // @synthesize _defaultWallpaperBundleImporter=__defaultWallpaperBundleImporter;
@property(retain, nonatomic) NSDictionary *_defaultWallpaperLookup; // @synthesize _defaultWallpaperLookup=__defaultWallpaperLookup;
- (void).cxx_destruct;
- (id)defaultWallpaperBundle;
- (void)_loadDefaultWallpaperFile;
- (id)init;

@end
