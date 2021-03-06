/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIViewController.h>
#import <MobileTimer/TimerPadControlsViewDelegate.h>
#import <MobileTimer/StateManagement.h>
#import <MobileTimer/SoundPickerDelegate.h>
#import <MobileTimer/TimerControlsTarget.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class TimerControlsView, SoundPicker, NSString, NSTimer, CADisplayLink, UIPopoverController;

@interface TimerViewController : UIViewController <TimerPadControlsViewDelegate, StateManagement, SoundPickerDelegate, TimerControlsTarget, UIPopoverControllerDelegate> {

	TimerControlsView* _timerControlsView;
	SoundPicker* _soundPicker;
	NSString* _soundIdentifier;
	NSTimer* _timer;
	CADisplayLink* _displayLink;
	double _time;
	UIPopoverController* _soundPopoverController;

}
-(id)updateSelectedSoundUIForIdentifier:(id)arg1 ;
-(void)timerTick:(id)arg1 ;
-(void)displayLinkTick:(id)arg1 ;
-(void)startUpdatingTimerUI;
-(void)stopUpdatingTimerUI;
-(void)prepareUIForState:(int)arg1 ;
-(void)handleEnterBackground;
-(void)updateSelectedSoundUI;
-(void)showSoundPicker:(id)arg1 ;
-(void)soundPicker:(id)arg1 confirmedSoundWithIdentifier:(id)arg2 ;
-(void)dismissSoundPicker:(id)arg1 ;
-(void)soundPicker:(id)arg1 willPlaySoundWithIdentifier:(id)arg2 ;
-(void)startTimer:(id)arg1 ;
-(void)cancelTimer:(id)arg1 ;
-(void)pauseResumeTimer:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidUnload;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(id)defaultPNGName;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)saveState;
-(void)reloadState;
@end

