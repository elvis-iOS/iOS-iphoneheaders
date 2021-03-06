/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:34:04 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class CAGradientLayer;

@interface ASTGestureRecorderGradientView : UIView

@property (nonatomic,retain,readonly) CAGradientLayer * gradientLayer; 
+(Class)layerClass;
-(void)configureGradientAnimatedWithTopColor:(id)arg1 bottomColor:(id)arg2 duration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)configureGradientWithTopColor:(id)arg1 bottomColor:(id)arg2 ;
-(id)_copyColorsArrayWithTopColor:(id)arg1 bottomColor:(id)arg2 ;
-(void)_configureGradientWithTopColor:(id)arg1 bottomColor:(id)arg2 locations:(id)arg3 animated:(char)arg4 duration:(double)arg5 completion:(/*^block*/id)arg6 ;
-(id)_copyLocationsArrayWithTopColorLocation:(float)arg1 bottomColorLocation:(float)arg2 ;
-(void)configureGradientWithTopColor:(id)arg1 bottomColor:(id)arg2 topColorLocation:(float)arg3 bottomColorLocation:(float)arg4 ;
-(void)configureGradientAnimatedWithTopColor:(id)arg1 bottomColor:(id)arg2 topColorLocation:(float)arg3 bottomColorLocation:(float)arg4 duration:(double)arg5 completion:(/*^block*/id)arg6 ;
-(CAGradientLayer *)gradientLayer;
@end

