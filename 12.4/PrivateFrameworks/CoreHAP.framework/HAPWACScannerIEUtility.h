//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSData, NSDictionary;

@interface HAPWACScannerIEUtility : HMFObject
{
    NSData *_ieData;
    const char *_iePtr;
    const char *_src;
    const char *_end;
    const char *_ptr;
    unsigned long long _len;
    _Bool _supportsHomeKit;
    _Bool _supportsPairSetupWAC;
    _Bool _supportsMFiAuthICV2;
    _Bool _supportsSTAOnly;
    _Bool _supportsAudioOnly;
    _Bool _supports2pt4GHzNetworks;
    _Bool _supports5GHzNetworks;
    _Bool _supportsTokenAuth;
    _Bool _pairedWithHomeKit;
}

@property(readonly, nonatomic) _Bool pairedWithHomeKit; // @synthesize pairedWithHomeKit=_pairedWithHomeKit;
@property(readonly, nonatomic) _Bool supportsTokenAuth; // @synthesize supportsTokenAuth=_supportsTokenAuth;
@property(readonly, nonatomic) _Bool supports5GHzNetworks; // @synthesize supports5GHzNetworks=_supports5GHzNetworks;
@property(readonly, nonatomic) _Bool supports2pt4GHzNetworks; // @synthesize supports2pt4GHzNetworks=_supports2pt4GHzNetworks;
@property(readonly, nonatomic) _Bool supportsAudioOnly; // @synthesize supportsAudioOnly=_supportsAudioOnly;
@property(readonly, nonatomic) _Bool supportsSTAOnly; // @synthesize supportsSTAOnly=_supportsSTAOnly;
@property(readonly, nonatomic) _Bool supportsMFiAuthICV2; // @synthesize supportsMFiAuthICV2=_supportsMFiAuthICV2;
@property(readonly, nonatomic) _Bool supportsPairSetupWAC; // @synthesize supportsPairSetupWAC=_supportsPairSetupWAC;
@property(readonly, nonatomic) _Bool supportsHomeKit; // @synthesize supportsHomeKit=_supportsHomeKit;
- (void).cxx_destruct;
@property(readonly, copy) NSDictionary *setupDictionary;
- (void)dealloc;
- (id)initWithIEData:(id)arg1;

@end

