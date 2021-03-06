//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCTagSettings;

@interface FRArticleTextZoomManager : NSObject
{
    FCTagSettings *_tagSettings;
}

+ (id)sharedArticleTextZoomManager;
@property(retain, nonatomic) FCTagSettings *tagSettings; // @synthesize tagSettings=_tagSettings;
- (void).cxx_destruct;
- (void)decreaseTextSizeForTagID:(id)arg1;
- (_Bool)canDecreaseTextSizeForTagID:(id)arg1;
- (void)increaseTextSizeForTagID:(id)arg1;
- (_Bool)canIncreaseTextSizeForTagID:(id)arg1;
- (long long)currentTextSizeForTagID:(id)arg1;
- (long long)articleTextSizeForTagID:(id)arg1;
- (id)fontCategoryForTagID:(id)arg1;
- (id)init;

@end

