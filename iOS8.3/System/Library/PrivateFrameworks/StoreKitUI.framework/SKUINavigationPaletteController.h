/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:38:55 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUINavigationBarSectionController.h>

@class SKUINavigationBarContext, SKUINavigationPaletteView, SKUIPaletteViewElement, SKUIViewElementLayoutContext;

@interface SKUINavigationPaletteController : SKUINavigationBarSectionController {

	SKUINavigationBarContext* _navigationBarContext;
	SKUINavigationPaletteView* _paletteView;
	SKUIPaletteViewElement* _viewElement;
	SKUIViewElementLayoutContext* _viewLayoutContext;

}
-(id)view;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)willAppearInNavigationBar;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(void)reloadSectionViews;
-(id)initWithPaletteViewElement:(id)arg1 ;
@end
