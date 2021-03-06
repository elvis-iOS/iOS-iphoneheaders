/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/MainChromeTopBarContentProvider.h>

@protocol RoutePickingBarDelegate;
@class RoutePickingBarCompact, RoutePickingBarRegular, MainChromeViewController, NSSet, NSString;

@interface RoutePickingBarProvider : NSObject <MainChromeTopBarContentProvider> {

	RoutePickingBarCompact* _compact;
	RoutePickingBarRegular* _regular;
	char _loading;
	MainChromeViewController* _chromeViewController;
	id<RoutePickingBarDelegate> _delegate;
	int _selectedVariant;
	NSSet* _selectableVariants;

}

@property (assign,nonatomic,__weak) id<RoutePickingBarDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int selectedVariant;                                          //@synthesize selectedVariant=_selectedVariant - In the implementation block
@property (nonatomic,retain) NSSet * selectableVariants;                                   //@synthesize selectableVariants=_selectableVariants - In the implementation block
@property (assign,getter=isLoading,nonatomic) char loading;                                //@synthesize loading=_loading - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) MainChromeViewController * chromeViewController;              //@synthesize chromeViewController=_chromeViewController - In the implementation block
-(MainChromeViewController *)chromeViewController;
-(void)setChromeViewController:(MainChromeViewController *)arg1 ;
-(id)topBarContentForVariant:(int)arg1 ;
-(int)selectedVariant;
-(id)sharePresentationSource;
-(id)directionsSearchPresentationSource;
-(id)_newRoutePickingBarOfClass:(Class)arg1 ;
-(void)updateArrivalDestinationText;
-(id)_fieldView;
-(NSSet *)selectableVariants;
-(void)setSelectableVariants:(NSSet *)arg1 ;
-(void)setSelectedVariant:(int)arg1 ;
-(void)_share;
-(void)_chosenVariantDidChange:(id)arg1 ;
-(void)_clear;
-(void)setDelegate:(id<RoutePickingBarDelegate>)arg1 ;
-(id<RoutePickingBarDelegate>)delegate;
-(void)beginEditing;
-(char)isLoading;
-(void)setLoading:(char)arg1 ;
@end

