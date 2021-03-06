//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassroomKit/CATOperation.h>

@class LKUser;

@interface LUIFetchUserImageOperation : CATOperation
{
    LKUser *_user;
    unsigned long long _imageSize;
}

@property(nonatomic) unsigned long long imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) LKUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)fetchImage;
- (void)main;
- (_Bool)isAsynchronous;
- (id)initWithUser:(id)arg1 imageSize:(unsigned long long)arg2;

@end

