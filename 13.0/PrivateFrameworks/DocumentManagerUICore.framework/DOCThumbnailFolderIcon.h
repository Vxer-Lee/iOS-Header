//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface DOCThumbnailFolderIcon : NSObject
{
    double _bottomInset;
    double _sharedBadgeBottomInset;
    struct CGSize _badgeSize;
    struct CGSize _sharedBadgeSize;
    NSString *_documentsBadgeName;
    NSString *_desktopBadgeName;
    NSString *_sharedBadgeName;
    NSString *_downloadsBadgeName;
    NSString *_genericSharepointBadgeName;
    UIImage *_documentsBadge;
    UIImage *_desktopBadge;
    UIImage *_sharedBadge;
    UIImage *_downloadsBadge;
    UIImage *_genericSharepointBadge;
    UIImage *_plainFolderImage;
    NSString *_imageName;
    double _imageDimension;
}

+ (id)imageWithStyle:(unsigned long long)arg1 assetImage:(id)arg2;
+ (id)_folderIconForSize:(struct CGSize)arg1 scale:(double)arg2;
+ (id)folderIconForDescriptor:(id)arg1;
+ (id)folderIcons;
+ (id)_folderIconsForImageNamePattern:(id)arg1 documentsBadgeNamePattern:(id)arg2 desktopBadgeNamePattern:(id)arg3 sharedBadgeNamePattern:(id)arg4 downloadsBadgeNamePattern:(id)arg5 genericSharepointBadgeNamePattern:(id)arg6;
@property(readonly, nonatomic) double imageDimension; // @synthesize imageDimension=_imageDimension;
@property(readonly, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(readonly, nonatomic) UIImage *plainFolderImage; // @synthesize plainFolderImage=_plainFolderImage;
- (void).cxx_destruct;
- (double)bottomInsetForFolderType:(unsigned long long)arg1;
@property(readonly, nonatomic) double bottomInset;
- (struct CGSize)badgeSizeForFolderType:(unsigned long long)arg1;
@property(readonly, nonatomic) struct CGSize badgeSize;
- (id)badgeForFolderType:(unsigned long long)arg1;
- (id)_badgedFolderIconForBadge:(id)arg1 badgeSize:(struct CGSize)arg2 bottomInset:(double)arg3 style:(unsigned long long)arg4;
- (id)badgedFolderIconForBadge:(id)arg1 style:(unsigned long long)arg2;
- (id)badgedFolderIconForFolderType:(unsigned long long)arg1 style:(unsigned long long)arg2;
- (void)resolveImage;
- (id)image;
@property(readonly, nonatomic) UIImage *genericSharepointBadge; // @synthesize genericSharepointBadge=_genericSharepointBadge;
@property(readonly, nonatomic) UIImage *downloadsBadge; // @synthesize downloadsBadge=_downloadsBadge;
@property(readonly, nonatomic) UIImage *sharedBadge; // @synthesize sharedBadge=_sharedBadge;
@property(readonly, nonatomic) UIImage *desktopBadge; // @synthesize desktopBadge=_desktopBadge;
@property(readonly, nonatomic) UIImage *documentsBadge; // @synthesize documentsBadge=_documentsBadge;
- (id)initWithImageName:(id)arg1 documentsBadgeName:(id)arg2 dekstopBadgeName:(id)arg3 sharedBadgeName:(id)arg4 downloadsBadgeName:(id)arg5 genericSharepointBadgeName:(id)arg6 imageDimension:(double)arg7 badgeDimension:(double)arg8 badgeBottomInset:(double)arg9 sharedBadgeDimension:(double)arg10 sharedBadgeBottomInset:(double)arg11;

@end
