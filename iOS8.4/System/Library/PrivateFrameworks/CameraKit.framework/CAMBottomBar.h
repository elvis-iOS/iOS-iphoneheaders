/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>
#import <CameraKit/CAMExpandableMenuButtonDelegate.h>

@protocol CAMBottomBarDelegate;
@class UIView, CAMModeDial, CAMImageWell, CAMShutterButton, CAMFilterButton, CAMFlipButton, CAMElapsedTimeView, CAMHDRButton, CAMTimerButton, CAMSlalomIndicatorView, UIButton, CAMExpandableMenuButton;

@interface CAMBottomBar : UIView <CAMExpandableMenuButtonDelegate> {

	BOOL __HDRButtonExpanded;
	BOOL __timerButtonExpanded;
	id<CAMBottomBarDelegate> _delegate;
	long long _orientation;
	long long _backgroundStyle;
	UIView* _backgroundView;
	CAMModeDial* _modeDial;
	CAMImageWell* _imageWell;
	CAMShutterButton* _stillDuringVideoButton;
	CAMShutterButton* _shutterButton;
	CAMFilterButton* _filterButton;
	CAMFlipButton* _flipButton;
	CAMElapsedTimeView* _elapsedTimeView;
	CAMHDRButton* _HDRButton;
	CAMTimerButton* _timerButton;
	CAMSlalomIndicatorView* _slalomIndicatorView;
	UIButton* _cancelButton;
	CAMExpandableMenuButton* __expandedMenuButton;
	UIView* __shutterButtomBottomLayoutSpacer;
	UIView* __imageWellBottomLayoutSpacer;
	UIView* __filterButtonBottomLayoutSpacer;
	UIView* __slalomIndicatorBottomLayoutSpacer;
	UIView* __stillDuringVideoButtonBottomLayoutSpacer;
	UIView* __elapsedTimeViewCenteringLayoutSpacer;
	UIView* __hdrButtonCenteringLayoutSpacer;

}

@property (assign,nonatomic,__weak) id<CAMBottomBarDelegate> delegate;                                                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long orientation;                                                                                //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) long long backgroundStyle;                                                                            //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,readonly) UIView * backgroundView;                                                                            //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) CAMModeDial * modeDial;                                                                               //@synthesize modeDial=_modeDial - In the implementation block
@property (nonatomic,retain) CAMImageWell * imageWell;                                                                             //@synthesize imageWell=_imageWell - In the implementation block
@property (nonatomic,retain) CAMShutterButton * stillDuringVideoButton;                                                            //@synthesize stillDuringVideoButton=_stillDuringVideoButton - In the implementation block
@property (nonatomic,retain) CAMShutterButton * shutterButton;                                                                     //@synthesize shutterButton=_shutterButton - In the implementation block
@property (nonatomic,retain) CAMFilterButton * filterButton;                                                                       //@synthesize filterButton=_filterButton - In the implementation block
@property (nonatomic,retain) CAMFlipButton * flipButton;                                                                           //@synthesize flipButton=_flipButton - In the implementation block
@property (nonatomic,retain) CAMElapsedTimeView * elapsedTimeView;                                                                 //@synthesize elapsedTimeView=_elapsedTimeView - In the implementation block
@property (nonatomic,retain) CAMHDRButton * HDRButton;                                                                             //@synthesize HDRButton=_HDRButton - In the implementation block
@property (nonatomic,retain) CAMTimerButton * timerButton;                                                                         //@synthesize timerButton=_timerButton - In the implementation block
@property (nonatomic,retain) CAMSlalomIndicatorView * slalomIndicatorView;                                                         //@synthesize slalomIndicatorView=_slalomIndicatorView - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                                                              //@synthesize cancelButton=_cancelButton - In the implementation block
@property (setter=_setExpandedMenuButton:,nonatomic,retain) CAMExpandableMenuButton * _expandedMenuButton;                         //@synthesize _expandedMenuButton=__expandedMenuButton - In the implementation block
@property (assign,setter=_setHDRButtonExpanded:,getter=_isHDRButtonExpanded,nonatomic) BOOL _HDRButtonExpanded;                    //@synthesize _HDRButtonExpanded=__HDRButtonExpanded - In the implementation block
@property (assign,setter=_setTimerButtonExpanded:,getter=_isTimerButtonExpanded,nonatomic) BOOL _timerButtonExpanded;              //@synthesize _timerButtonExpanded=__timerButtonExpanded - In the implementation block
@property (nonatomic,readonly) UIView * _shutterButtomBottomLayoutSpacer;                                                          //@synthesize _shutterButtomBottomLayoutSpacer=__shutterButtomBottomLayoutSpacer - In the implementation block
@property (nonatomic,readonly) UIView * _imageWellBottomLayoutSpacer;                                                              //@synthesize _imageWellBottomLayoutSpacer=__imageWellBottomLayoutSpacer - In the implementation block
@property (nonatomic,readonly) UIView * _filterButtonBottomLayoutSpacer;                                                           //@synthesize _filterButtonBottomLayoutSpacer=__filterButtonBottomLayoutSpacer - In the implementation block
@property (nonatomic,readonly) UIView * _slalomIndicatorBottomLayoutSpacer;                                                        //@synthesize _slalomIndicatorBottomLayoutSpacer=__slalomIndicatorBottomLayoutSpacer - In the implementation block
@property (nonatomic,readonly) UIView * _stillDuringVideoButtonBottomLayoutSpacer;                                                 //@synthesize _stillDuringVideoButtonBottomLayoutSpacer=__stillDuringVideoButtonBottomLayoutSpacer - In the implementation block
@property (nonatomic,readonly) UIView * _elapsedTimeViewCenteringLayoutSpacer;                                                     //@synthesize _elapsedTimeViewCenteringLayoutSpacer=__elapsedTimeViewCenteringLayoutSpacer - In the implementation block
@property (nonatomic,readonly) UIView * _hdrButtonCenteringLayoutSpacer;                                                           //@synthesize _hdrButtonCenteringLayoutSpacer=__hdrButtonCenteringLayoutSpacer - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<CAMBottomBarDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<CAMBottomBarDelegate>)delegate;
-(long long)orientation;
-(UIView *)backgroundView;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(void)updateConstraints;
-(void)setOrientation:(long long)arg1 ;
-(void)setBackgroundStyle:(long long)arg1 ;
-(long long)backgroundStyle;
-(void)setBackgroundStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_updateBackgroundStyleAnimated:(BOOL)arg1 ;
-(void)_commonCAMBottomBarInitialization;
-(void)_removeAllConstraints;
-(void)_updateImageWellInsetsForOrientation;
-(CAMModeDial *)modeDial;
-(UIView *)_shutterButtomBottomLayoutSpacer;
-(CAMImageWell *)imageWell;
-(UIView *)_imageWellBottomLayoutSpacer;
-(CAMFilterButton *)filterButton;
-(UIView *)_filterButtonBottomLayoutSpacer;
-(CAMSlalomIndicatorView *)slalomIndicatorView;
-(UIView *)_slalomIndicatorBottomLayoutSpacer;
-(CAMShutterButton *)stillDuringVideoButton;
-(UIView *)_stillDuringVideoButtonBottomLayoutSpacer;
-(void)_setupHorizontalBackgroundViewConstraints;
-(void)_setupHorizontalModeDialConstraints;
-(void)_setupHorizontalShutterButtonConstraints;
-(void)_setupHorizontalImageWellConstraints;
-(void)_setupHorizontalFilterButtonConstraints;
-(void)_setupHorizontalSlalomIndicatorConstraints;
-(void)_setupHorizontalStillDuringVideoButtonConstraints;
-(void)_setupHorizontalCancelButtonConstraints;
-(CAMFlipButton *)flipButton;
-(CAMElapsedTimeView *)elapsedTimeView;
-(UIView *)_elapsedTimeViewCenteringLayoutSpacer;
-(void)_setupVerticalBackgroundViewConstraints;
-(void)_setupVerticalFlipButtonConstraints;
-(void)_setupVerticalElapsedTimeViewConstraints;
-(void)_setupVerticalShutterButtonConstraints;
-(void)_setupVerticalModeDialConstraints;
-(void)_setupVerticalImageWellConstraints;
-(void)_setupVerticalSlalomIndicatorConstraints;
-(void)_setupVerticalCancelButtonConstraints;
-(void)_setupHorizontalConstraints;
-(void)_setupVerticalConstraints;
-(id)_currentMenuButtons;
-(CAMExpandableMenuButton *)_expandedMenuButton;
-(void)_layoutMenuButtons:(id)arg1 apply:(BOOL)arg2 withExpandedMenuButton:(id)arg3 collapsingMenuButton:(id)arg4 collapsingFrame:(CGRect*)arg5 ;
-(void)_layoutForHorizontalOrientation;
-(void)_layoutForVerticalOrientation;
-(CGRect)expandedFrameForMenuButton:(id)arg1 ;
-(void)_updateHiddenViewsForButtonExpansionAnimated:(BOOL)arg1 ;
-(BOOL)_shouldHideElapsedTimeView;
-(BOOL)_shouldHideHDRButton;
-(BOOL)_shouldHideFlipButton;
-(BOOL)_shouldHideTimerButton;
-(BOOL)_isTimerButtonExpanded;
-(BOOL)_isHDRButtonExpanded;
-(CGRect)collapsedFrameForMenuButton:(id)arg1 ;
-(void)_setExpandedMenuButton:(id)arg1 ;
-(void)_setTimerButtonExpanded:(BOOL)arg1 ;
-(void)_setHDRButtonExpanded:(BOOL)arg1 ;
-(void)collapseMenuButton:(id)arg1 animated:(BOOL)arg2 ;
-(void)expandMenuButton:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithOrientation:(long long)arg1 ;
-(void)setModeDial:(CAMModeDial *)arg1 ;
-(void)setImageWell:(CAMImageWell *)arg1 ;
-(void)setStillDuringVideoButton:(CAMShutterButton *)arg1 ;
-(void)setFilterButton:(CAMFilterButton *)arg1 ;
-(void)setFlipButton:(CAMFlipButton *)arg1 ;
-(void)setElapsedTimeView:(CAMElapsedTimeView *)arg1 ;
-(void)setSlalomIndicatorView:(CAMSlalomIndicatorView *)arg1 ;
-(void)setHDRButton:(CAMHDRButton *)arg1 ;
-(void)setTimerButton:(CAMTimerButton *)arg1 ;
-(CAMHDRButton *)HDRButton;
-(CAMTimerButton *)timerButton;
-(UIView *)_hdrButtonCenteringLayoutSpacer;
-(CAMShutterButton *)shutterButton;
-(void)setShutterButton:(CAMShutterButton *)arg1 ;
@end
