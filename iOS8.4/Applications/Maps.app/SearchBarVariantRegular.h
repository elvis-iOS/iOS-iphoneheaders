/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:37 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/SearchBar.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <Maps/CollectionsTableViewControllerDelegate.h>
#import <Maps/RecentsViewControllerDelegate.h>
#import <Maps/TextFieldAnimationDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol SearchBarVariantRegularViewControllerProvider;
@class UIView, UIBarButtonItem, NSArray, UIToolbar, RecentsViewController, UINavigationController, UIPopoverController, PopoverRevealViewController, NSString;

@interface SearchBarVariantRegular : SearchBar <UINavigationControllerDelegate, UIPopoverPresentationControllerDelegate, CollectionsTableViewControllerDelegate, RecentsViewControllerDelegate, TextFieldAnimationDelegate, UIPopoverControllerDelegate, UITextFieldDelegate> {

	UIView* _searchView;
	UIBarButtonItem* _searchFieldBarButtonItem;
	UIBarButtonItem* _directionsBarButtonItem;
	UIBarButtonItem* _shareBarButtonItem;
	NSArray* _toolbarItems;
	UIToolbar* _toolbar;
	RecentsViewController* _recentsViewController;
	UINavigationController* _recentsAndSuggestionsNavController;
	UIPopoverController* _directionsPopoverController;
	PopoverRevealViewController* _popoverRevealViewController;
	UINavigationController* _directionsNavController;
	char _shouldSwitchPopoverToSuggestionsOnNewSearchResults;
	id<SearchBarVariantRegularViewControllerProvider> _viewControllerProvider;

}

@property (assign,nonatomic,__weak) id<SearchBarVariantRegularViewControllerProvider> viewControllerProvider;              //@synthesize viewControllerProvider=_viewControllerProvider - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)searchFieldWidth;
-(id)_recentsViewController;
-(int)searchMode;
-(void)recentsViewController:(id)arg1 choseHistoryItem:(id)arg2 ;
-(void)recentsViewController:(id)arg1 choseBookmark:(id)arg2 ;
-(char)recentsViewControllerShouldPresentToOrFromSelectionAlert:(id)arg1 ;
-(void)recentsViewControllerDidDismissClearHistorySheet:(id)arg1 ;
-(void)recentsViewControllerDidSelectCollectionsButton:(id)arg1 ;
-(void)performInitialSetup;
-(void)_searchFieldSubmitted:(id)arg1 ;
-(void)_directionsButtonTapped:(id)arg1 ;
-(id<SearchBarVariantRegularViewControllerProvider>)viewControllerProvider;
-(char)_isRecentsAndSuggestionsPopoverVisible;
-(void)_dismissVisblePopovers;
-(void)_presentPopover;
-(char)textFieldShowsRightView:(id)arg1 ;
-(id)toolbarItemsForToolbar:(id)arg1 ;
-(id)presentationSourceForDirectionsSearch;
-(id)presentationSourceForShareSheet;
-(void)showCompletionsTable;
-(void)hideCompletionsTable;
-(void)updatePopoverViewControllerForSearchField;
-(void)presentCompletionsPopoverForSearchField;
-(void)dismissCompletionsPopoverForSearchField;
-(id)searchFieldBarButtonItem;
-(char)isShowingCollections;
-(void)setViewControllerProvider:(id<SearchBarVariantRegularViewControllerProvider>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(char)isActive;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(int)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(char)arg3 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(id)searchString;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)setSearchString:(id)arg1 ;
-(void)_shareButtonTapped:(id)arg1 ;
@end
