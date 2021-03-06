/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <StoreKitUI/SKUIMenuViewControllerDelegate.h>
#import <StoreKitUI/SKUIPopupMenuDelegate.h>
#import <StoreKitUI/SKUISortDataRequestDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class SKUIPillsControl, SKUIMenuViewController, UIPopoverController, SKUIFocusedTouchGestureRecognizer, SKUIPickerWrapperView, UIView, SKUIPopupMenuHeaderView, NSMutableIndexSet, SKUIMenuPageComponent;

@interface SKUIMenuPageSection : SKUIStorePageSection <SKUIMenuViewControllerDelegate, SKUIPopupMenuDelegate, SKUISortDataRequestDelegate, UIPickerViewDataSource, UIPickerViewDelegate, UIPopoverControllerDelegate> {

	SKUIPillsControl* _pillsControl;
	SKUIMenuViewController* _moreListMenuViewController;
	UIPopoverController* _moreListPopoverController;
	SKUIFocusedTouchGestureRecognizer* _pickerDismissGestureRecognizer;
	SKUIPickerWrapperView* _pickerWrapper;
	UIView* _pickerBackgroundView;
	BOOL _pinned;
	SKUIPopupMenuHeaderView* _popupHeaderView;
	int _selectedIndex;
	NSMutableIndexSet* _sortRequestIndexSet;

}

@property (nonatomic,@dynamic,readonly) SKUIMenuPageComponent * pageComponent; 
-(void)dealloc;
-(int)numberOfComponentsInPickerView:(id)arg1 ;
-(int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(id)initWithPageComponent:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(int)numberOfCells;
-(id)popPinnedHeaderView;
-(void)restorePinnedHeaderView:(id)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(void)collectionViewWillApplyLayoutAttributes:(id)arg1 ;
-(id)_contentChildView;
-(void)sortDataRequest:(id)arg1 didFinishWithLockups:(id)arg2 ;
-(void)_setSelectedIndex:(int)arg1 ;
-(void)_showMoreList;
-(id)_pillsControl;
-(id)_popupHeaderView;
-(void)_pillAction:(id)arg1 ;
-(void)_loadSortDataIfNecessaryForMenuIndex:(int)arg1 reason:(int)arg2 ;
-(void)_showPickerView;
-(void)_showPopoverController;
-(void)_dismissPickerViewAction:(id)arg1 ;
-(void)popupMenuHeader:(id)arg1 didSelectMenuItemAtIndex:(int)arg2 ;
-(void).cxx_destruct;
-(void)menuViewController:(id)arg1 didSelectItemAtIndex:(int)arg2 ;
-(id)cellForIndexPath:(id)arg1 ;
@end

