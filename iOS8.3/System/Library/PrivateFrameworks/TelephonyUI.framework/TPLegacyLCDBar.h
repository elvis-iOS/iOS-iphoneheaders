/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:46:14 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIImageView.h>

@class UIImage, UIImageView;

@interface TPLegacyLCDBar : UIImageView {

	UIImage* _barBackground;
	UIImageView* _shadowView;

}

@property (nonatomic,retain) UIImage * barBackground;              //@synthesize barBackground=_barBackground - In the implementation block
@property (readonly) UIImageView * shadowView;                     //@synthesize shadowView=_shadowView - In the implementation block
+(float)defaultHeightForOrientation:(int)arg1 ;
+(float)defaultHeight;
+(id)backgroundImage;
+(id)shadowImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(UIImageView *)shadowView;
-(id)initWithDefaultSize;
-(void)setOrientation:(int)arg1 ;
-(id)initWithDefaultSizeForOrientation:(int)arg1 ;
-(void)setOrientation:(int)arg1 updateFrame:(char)arg2 ;
-(void)setBarBackground:(UIImage *)arg1 ;
-(CGRect)contentStretchRect;
-(UIImage *)barBackground;
@end
