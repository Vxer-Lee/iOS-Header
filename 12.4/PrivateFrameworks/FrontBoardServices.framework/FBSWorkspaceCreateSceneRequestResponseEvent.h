//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSWorkspaceEvent.h>

@class NSString;

@interface FBSWorkspaceCreateSceneRequestResponseEvent : FBSWorkspaceEvent
{
    NSString *_sceneID;
}

@property(copy, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

@end
