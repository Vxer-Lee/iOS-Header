//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MKMapView, NVMainWindowController, VKMapView;

__attribute__((visibility("hidden")))
@interface StateCapture : NSObject
{
    unsigned long long _handle;
    MKMapView *_mapView;
    NVMainWindowController *_mainWindowController;
    VKMapView *_vkMapView;
}

+ (struct os_state_data_s *)stateDataForDictionary:(id)arg1 title:(id)arg2;
+ (id)sharedManager;
@property(readonly) VKMapView *vkMapView; // @synthesize vkMapView=_vkMapView;
@property(readonly) NVMainWindowController *mainWindowController; // @synthesize mainWindowController=_mainWindowController;
@property(readonly) MKMapView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (struct os_state_data_s *)_stateCapture;
- (void)unregisterHandlerforStateCapture;
- (void)registerHandlerforStateCapture;

@end
