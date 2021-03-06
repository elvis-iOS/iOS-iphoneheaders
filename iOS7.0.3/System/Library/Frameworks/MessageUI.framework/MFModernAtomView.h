/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIDefaultKeyboardInput.h>

@class MFModernAtomIconView, UIColor, UIView, MFModernAtomBackgroundView, UILabel, UIActivityIndicatorView, UIFont, NSString;

@interface MFModernAtomView : UIDefaultKeyboardInput {

	MFModernAtomIconView* _badgeIconView;
	MFModernAtomIconView* _accessoryIconView;
	UIColor* _effectiveTintColor;
	unsigned _disabledPresentationOptions;
	UIView* _baselineView;
	MFModernAtomBackgroundView* _background;
	UIView* _compositingView;
	UIView* _titleLabelFillView;
	UILabel* _label;
	UIActivityIndicatorView* _activityIndicator;
	float _scalingFactor;
	BOOL _isPrimaryAddressAtom;
	BOOL _separatorHidden;
	BOOL _selected;
	UIFont* _titleFont;
	unsigned _presentationOptions;

}

@property (nonatomic,copy) NSString * title; 
@property (assign,getter=isSelected,nonatomic) BOOL selected;                            //@synthesize selected=_selected - In the implementation block
@property (nonatomic,retain) UIFont * titleFont;                                         //@synthesize titleFont=_titleFont - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                     //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned presentationOptions;                               //@synthesize presentationOptions=_presentationOptions - In the implementation block
@property (nonatomic,readonly) unsigned effectivePresentationOptions; 
@property (assign,nonatomic) int separatorStyle; 
@property (assign,nonatomic) BOOL separatorHidden;                                       //@synthesize separatorHidden=_separatorHidden - In the implementation block
@property (assign,nonatomic) BOOL hidesVIPIndicator; 
@property (assign,nonatomic) BOOL isPrimaryAddressAtom;                                  //@synthesize isPrimaryAddressAtom=_isPrimaryAddressAtom - In the implementation block
@property (nonatomic,readonly) UIColor * effectiveTintColor; 
@property (nonatomic,readonly) CGPoint baselinePoint; 
@property (nonatomic,readonly) MFModernAtomBackgroundView * backgroundView; 
@property (nonatomic,readonly) MFModernAtomIconView * badgeIconView;                     //@synthesize badgeIconView=_badgeIconView - In the implementation block
@property (nonatomic,readonly) MFModernAtomIconView * accessoryIconView;                 //@synthesize accessoryIconView=_accessoryIconView - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
+(float)horizontalPadding;
+(id)_defaultTintColor;
+(id)_defaultLabelAttributes;
+(id)primaryAtomFont;
+(id)_defaultLabelAttributesWithFont:(id)arg1 ;
+(id)_failureTintColor;
+(id)_SMSTintColor;
+(id)_badgeImagesForPresentationOptions:(unsigned)arg1 iconOrder:(const unsigned*)arg2 orderingLength:(unsigned)arg3 tintColor:(id)arg4 large:(BOOL)arg5 variant:(int)arg6 ;
+(CGPoint)defaultBaselinePoint;
+(id)defaultFont;
+(float)defaultHeight;
-(id)initWithFrame:(CGRect)arg1 presentationOptions:(unsigned)arg2 separatorStyle:(int)arg3 ;
-(void)_invalidatePresentationOptions;
-(float)scalingFactor;
-(id)effectiveTintColor;
-(void)_setEffectiveTintColor:(id)arg1 ;
-(unsigned)presentationOptions;
-(int)_preferredIconVariant;
-(BOOL)isPrimaryAddressAtom;
-(void)_updateActivityIndicator;
-(void)_updateCompositingFilters;
-(void)_setPresentationOption:(unsigned)arg1 enabled:(BOOL)arg2 ;
-(float)preferredWidthWithSizeConstraints:(CGSize)arg1 ;
-(float)_leftPadding;
-(float)_rightPadding;
-(void)_updateFontIfNecessary;
-(BOOL)separatorHidden;
-(float)_rightInset;
-(float)_leftInset;
-(float)preferredWidth;
-(void)setScalingFactor:(float)arg1 ;
-(void)setIsPrimaryAddressAtom:(BOOL)arg1 ;
-(void)setPresentationOptions:(unsigned)arg1 ;
-(void)appendPresentationOption:(unsigned)arg1 ;
-(void)clearPresentationOption:(unsigned)arg1 ;
-(unsigned)effectivePresentationOptions;
-(BOOL)hidesVIPIndicator;
-(void)setHidesVIPIndicator:(BOOL)arg1 ;
-(id)accessoryIconView;
-(id)badgeIconView;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(void)tintColorDidChange;
-(id)title;
-(CGSize)intrinsicContentSize;
-(id)titleLabel;
-(void)setSeparatorStyle:(int)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(int)separatorStyle;
-(id)backgroundView;
-(id)viewForBaselineLayout;
-(CGPoint)baselinePoint;
-(id)titleFont;
-(id)activityIndicator;
-(void)setSeparatorHidden:(BOOL)arg1 ;
-(void)setTitleFont:(id)arg1 ;
@end

