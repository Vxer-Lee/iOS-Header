//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (MSPAdditions)
@property(readonly) _Bool _maps_isFileNotFoundError;
@property(readonly) _Bool _maps_isCloudKitTokenExpirationError;
@property(readonly) _Bool _maps_isCloudKitErrorContainingNotFoundMarkersOnly;
- (_Bool)_maps_isCloudKitErrorWithCode:(long long)arg1 partialErrorsPolicy:(long long)arg2;
@end
