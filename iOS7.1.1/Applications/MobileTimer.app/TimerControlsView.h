/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class TimerTimeView, UIDatePicker;

@interface TimerControlsView : UIView {

	TimerTimeView* _timeView;
	UIDatePicker* _timePicker;
	int _state;

}

@property (assign,nonatomic) int state;                                      //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,@dynamic) double countDownDuration; 
-(void)handleLocaleChange;
-(void)setTimerToneName:(id)arg1 ;
-(void)dealloc;
-(int)state;
-(void)setState:(int)arg1 ;
-(id)initWithTarget:(id)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)setTime:(double)arg1 ;
-(double)countDownDuration;
-(void)setCountDownDuration:(double)arg1 ;
@end

