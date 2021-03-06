/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:42 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <AccessibilitySettings/PSHeaderFooterView.h>

@class UILabel, UIActivityIndicatorView;

@interface VoiceOverTextSpinnerView : UIView <PSHeaderFooterView> {

	UILabel* _text;
	UIActivityIndicatorView* _spinner;

}
-(id)initWithSpecifier:(id)arg1 ;
-(void)showSpinner;
-(void)dealloc;
-(void)layoutSubviews;
-(void)hideSpinner;
-(double)preferredHeightForWidth:(double)arg1 ;
@end

