/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Podcasts/MTSourceListDelegate.h>
#import <Podcasts/MTSearchDisplayControllerDelegate.h>
#import <Podcasts/MTPodcastsMasterDetailViewControllerDelegate.h>
#import <UIKit/UIToolbarDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <Podcasts/MTRefreshControlDelegate.h>

@protocol MTMasterDetailViewControllerDelegate;
@class UITabBarItem, MTLibraryGridViewController, UIViewController, UIToolbar, MTSearchDisplayController, UISegmentedControl, UIBarButtonItem, MTSearchBar, UIButton, UILabel, MTPodcastsTabTitleView, UINavigationBar, _UINavigationControllerPalette, MTContentUnavailableView, MTLibrary, UINavigationController, MTAllPropertyChangesQueryObserver, NSAttributedString, NSString;

@interface MTPodcastsTabViewController : UIViewController <MTSourceListDelegate, MTSearchDisplayControllerDelegate, MTPodcastsMasterDetailViewControllerDelegate, UIToolbarDelegate, UISearchBarDelegate, MTRefreshControlDelegate> {

	UITabBarItem* _tabBarItem;
	MTLibraryGridViewController* _gridViewController;
	UIViewController* _listViewController;
	UIToolbar* _embeddedToolbar;
	MTSearchDisplayController* _sdc;
	UISegmentedControl* _switchSegment;
	UIBarButtonItem* _switchItem;
	char _disableControls;
	MTSearchBar* _searchBar;
	MTSearchBar* _navSearchBar;
	UIButton* _cancelButton;
	UILabel* _updatedLabel;
	MTPodcastsTabTitleView* _titleView;
	UINavigationBar* _searchNavBar;
	_UINavigationControllerPalette* _searchPalette;
	MTContentUnavailableView* _emptyView;
	char _empty;
	char _showRefreshingItem;
	char _showingSearchController;
	char _hidingNavItems;
	char _refreshing;
	MTLibrary* _library;
	id<MTMasterDetailViewControllerDelegate> _delegate;
	UINavigationController* _rootNavigationController;
	MTAllPropertyChangesQueryObserver* _fetchedObserver;
	NSAttributedString* _attributedTitleForRefreshControl;

}

@property (nonatomic,retain) MTLibrary * library;                                                   //@synthesize library=_library - In the implementation block
@property (assign,nonatomic,__weak) id<MTMasterDetailViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UINavigationController * rootNavigationController;                   //@synthesize rootNavigationController=_rootNavigationController - In the implementation block
@property (nonatomic,retain) MTAllPropertyChangesQueryObserver * fetchedObserver;                   //@synthesize fetchedObserver=_fetchedObserver - In the implementation block
@property (assign,nonatomic) char empty;                                                            //@synthesize empty=_empty - In the implementation block
@property (assign,nonatomic) char showRefreshingItem;                                               //@synthesize showRefreshingItem=_showRefreshingItem - In the implementation block
@property (assign,nonatomic) char showingSearchController;                                          //@synthesize showingSearchController=_showingSearchController - In the implementation block
@property (assign,nonatomic) char hidingNavItems;                                                   //@synthesize hidingNavItems=_hidingNavItems - In the implementation block
@property (assign,getter=isRefreshing,nonatomic) char refreshing;                                   //@synthesize refreshing=_refreshing - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedTitleForRefreshControl;                 //@synthesize attributedTitleForRefreshControl=_attributedTitleForRefreshControl - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dismissModalsAndPopovers;
-(id)selectPodcast:(id)arg1 animated:(char)arg2 ;
-(void)sourceList:(id)arg1 didSelectItemUuid:(id)arg2 atIndexPath:(id)arg3 ;
-(void)sourceList:(id)arg1 didUpdateSelectedItemUuid:(id)arg2 ;
-(NSAttributedString *)attributedTitleForRefreshControl;
-(void)endRefreshingWhenDraggingCompletes;
-(void)didEndRefreshing;
-(void)searchDisplayController:(id)arg1 didSelectPodcast:(id)arg2 ;
-(void)searchDisplayController:(id)arg1 didSelectEpisode:(id)arg2 ;
-(void)searchDisplayController:(id)arg1 didRecognizeUrlString:(id)arg2 ;
-(void)searchDisplayController:(id)arg1 didStoreSearch:(id)arg2 ;
-(void)setAttributedTitleForRefreshControl:(NSAttributedString *)arg1 ;
-(id)updatedLabel;
-(void)edit:(id)arg1 ;
-(id)embeddedToolbar;
-(void)disablePullToRefresh;
-(void)enablePullToRefresh;
-(id)switchSegment;
-(id)switchItem;
-(void)toggleView:(id)arg1 ;
-(void)didEndUpdatingAllPodcasts:(id)arg1 ;
-(void)podcastsMasterDetailViewController:(id)arg1 didChangeEditing:(char)arg2 animated:(char)arg3 ;
-(id)navSearchBar;
-(void)showGrid:(id)arg1 ;
-(void)showList:(id)arg1 ;
-(void)updateEmptyLibraryState;
-(void)setupEmptyLibraryObserver;
-(void)setUpdatedMessage:(id)arg1 ;
-(void)setShowRefreshingItem:(char)arg1 updateMessage:(char)arg2 ;
-(void)libraryUpdateFinished:(id)arg1 ;
-(void)libraryUpdateStarted:(id)arg1 ;
-(void)_toggleEmptyBookshelfNote;
-(void)_delayedToggleEmptyBookshelfNote;
-(id)gridViewIconForOrientation:(int)arg1 ;
-(void)_updateUIEnabledState;
-(void)_updateSearchEnabledState;
-(void)disableControlsForDuration:(double)arg1 ;
-(void)stopDisablingControls;
-(id)podcastsListViewController;
-(void)setShowRefreshingItem:(char)arg1 ;
-(char)isDraggingScrollView;
-(void)configureToolbar:(char)arg1 animated:(char)arg2 ;
-(void)setListNavBarItemsHidden:(char)arg1 animated:(char)arg2 ;
-(char)_isGridSelected;
-(void)setShowingSearchController:(char)arg1 ;
-(char)showRefreshingItem;
-(void)_updateSwitchSegmentEnabledState;
-(char)showingSearchController;
-(MTAllPropertyChangesQueryObserver *)fetchedObserver;
-(void)setFetchedObserver:(MTAllPropertyChangesQueryObserver *)arg1 ;
-(char)hidingNavItems;
-(void)setHidingNavItems:(char)arg1 ;
-(void)setEmpty:(char)arg1 ;
-(void)refresh:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MTMasterDetailViewControllerDelegate>)arg1 ;
-(id<MTMasterDetailViewControllerDelegate>)delegate;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)titleView;
-(int)positionForBar:(id)arg1 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)cancelButton;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(id)searchBar;
-(id)tabBarItem;
-(id)popToRootViewControllerAnimated:(char)arg1 ;
-(char)searchBarShouldBeginEditing:(id)arg1 ;
-(void)searchDisplayControllerWillBeginSearch:(id)arg1 ;
-(void)searchDisplayControllerWillEndSearch:(id)arg1 ;
-(char)isRefreshing;
-(void)setRefreshing:(char)arg1 ;
-(void)cancelSearch:(id)arg1 ;
-(MTLibrary *)library;
-(void)setLibrary:(MTLibrary *)arg1 ;
-(UINavigationController *)rootNavigationController;
-(void)popToRootViewController;
-(char)empty;
@end
