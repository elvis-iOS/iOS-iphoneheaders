/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, SKUIRoundedRectButton, SKUIClientContext, SKUIColorScheme, SKUILinkButton, UIButton, NSString, UIControl;

@interface SKUIAccountButtonsView : UIView {

	UILabel* _accountCreditsLabel;
	SKUIRoundedRectButton* _appleIDButton;
	SKUIClientContext* _clientContext;
	SKUIColorScheme* _colorScheme;
	SKUILinkButton* _ecommerceButton;
	SKUIRoundedRectButton* _giftingButton;
	int _interfaceOrientation;
	UIButton* _termsAndConditionsButton;
	SKUIRoundedRectButton* _usernameButton;
	UIButton* _redeemButton;

}

@property (nonatomic,copy) NSString * accountCredits; 
@property (assign,nonatomic) int interfaceOrientation;                                                     //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (nonatomic,readonly) UIButton * appleIDButton;                                                   //@synthesize appleIDButton=_appleIDButton - In the implementation block
@property (nonatomic,readonly) UIButton * giftingButton;                                                   //@synthesize giftingButton=_giftingButton - In the implementation block
@property (nonatomic,readonly) UIButton * redeemButton;                                                    //@synthesize redeemButton=_redeemButton - In the implementation block
@property (nonatomic,readonly) UIButton * termsAndConditionsButton;                                        //@synthesize termsAndConditionsButton=_termsAndConditionsButton - In the implementation block
@property (nonatomic,readonly) UIControl * ECommerceButton;                                                //@synthesize ecommerceButton=_ecommerceButton - In the implementation block
@property (nonatomic,copy) NSString * ECommerceLinkTitle; 
@property (nonatomic,copy) SKUIColorScheme * colorScheme;                                                  //@synthesize colorScheme=_colorScheme - In the implementation block
@property (assign,getter=isGiftingHidden,nonatomic) BOOL giftingHidden; 
@property (assign,getter=isTermsAndConditionsHidden,nonatomic) BOOL termsAndConditionsHidden; 
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(int)interfaceOrientation;
-(void)setInterfaceOrientation:(int)arg1 ;
-(id)colorScheme;
-(void)setColorScheme:(id)arg1 ;
-(id)initWithClientContext:(id)arg1 ;
-(id)_newLinkButtonWithTitle:(id)arg1 ;
-(void)_layoutForIPhone;
-(void)_layoutForIPad;
-(id)_termsChevronImage;
-(id)accountCredits;
-(id)ECommerceLinkTitle;
-(void)setECommerceLinkTitle:(id)arg1 ;
-(BOOL)isGiftingHidden;
-(BOOL)isTermsAndConditionsHidden;
-(void)setAccountCredits:(id)arg1 ;
-(void)setGiftingHidden:(BOOL)arg1 ;
-(void)setTermsAndConditionsHidden:(BOOL)arg1 ;
-(id)appleIDButton;
-(id)ECommerceButton;
-(id)giftingButton;
-(id)redeemButton;
-(id)termsAndConditionsButton;
-(void).cxx_destruct;
@end

