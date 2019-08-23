//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardUIServices/FBSServiceFacility.h>

@class FBServiceClientAuthenticator;
@protocol SBWallpaperServerDelegate;

@interface SBWallpaperServer : FBSServiceFacility
{
    id <SBWallpaperServerDelegate> _delegate;
    FBServiceClientAuthenticator *_accessAuthenticator;
}

+ (id)sharedInstance;
@property(retain, nonatomic) FBServiceClientAuthenticator *accessAuthenticator; // @synthesize accessAuthenticator=_accessAuthenticator;
@property(nonatomic) __weak id <SBWallpaperServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleSetVideoMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleFetchThumbnailMessage:(id)arg1 fromClient:(id)arg2;
- (long long)_wallpaperVariantFromXPCDictionary:(id)arg1;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (id)_init;

@end
