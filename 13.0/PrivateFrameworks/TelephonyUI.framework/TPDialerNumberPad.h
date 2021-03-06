//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUI/TPNumberPad.h>

#import <TelephonyUI/TPDialerKeypadProtocol-Protocol.h>

@class NSString, TPDialerSoundController;
@protocol TPDialerKeypadDelegate;

@interface TPDialerNumberPad : TPNumberPad <TPDialerKeypadProtocol>
{
    _Bool _playsSounds;
    id <TPDialerKeypadDelegate> _delegate;
    TPDialerSoundController *_soundController;
}

+ (id)dialerNumberPadNumericCharacters;
+ (id)dialerNumberPadFullCharacters;
@property(retain) TPDialerSoundController *soundController; // @synthesize soundController=_soundController;
@property id <TPDialerKeypadDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool playsSounds; // @synthesize playsSounds=_playsSounds;
- (void).cxx_destruct;
- (long long)indexForHighlightedKey;
- (void)highlightKeyAtIndex:(long long)arg1;
- (void)buttonLongPressed:(id)arg1;
- (void)buttonDown:(id)arg1;
- (void)buttonUpOutside:(id)arg1;
- (void)buttonUp:(id)arg1;
- (void)buttonTapped:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

