/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:42 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchDisplayDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@protocol RAPCategoryChooserDelegate;
@class UISearchBar, UISearchDisplayController, NSMutableArray, NSIndexPath, UIActionSheet, NSArray, NSString;

@interface ReportAProblemCategoryChooserViewController : UITableViewController <UISearchBarDelegate, UISearchDisplayDelegate, UIActionSheetDelegate> {

	UISearchBar* _searchBar;
	UISearchDisplayController* _searchController;
	NSMutableArray* _fullCategoryIsChecked;
	NSIndexPath* _indexPath;
	UIActionSheet* _contactMergeSheet;
	char _showDeleteButton;
	id<RAPCategoryChooserDelegate> delegate;
	NSArray* _fullCategoryList;
	NSMutableArray* _searchList;
	NSString* _previouslySelectedCategory;
	NSString* _currentlySelectedCategory;

}

@property (assign,nonatomic,__weak) id<RAPCategoryChooserDelegate> delegate; 
@property (nonatomic,copy) NSString * previouslySelectedCategory;                         //@synthesize previouslySelectedCategory=_previouslySelectedCategory - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPath;                                     //@synthesize indexPath=_indexPath - In the implementation block
@property (assign,nonatomic) char showDeleteButton;                                       //@synthesize showDeleteButton=_showDeleteButton - In the implementation block
@property (nonatomic,retain) NSArray * fullCategoryList;                                  //@synthesize fullCategoryList=_fullCategoryList - In the implementation block
@property (nonatomic,retain) NSMutableArray * searchList;                                 //@synthesize searchList=_searchList - In the implementation block
@property (nonatomic,copy) NSString * currentlySelectedCategory;                          //@synthesize currentlySelectedCategory=_currentlySelectedCategory - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPreviouslySelectedCategory:(NSString *)arg1 ;
-(void)setShowDeleteButton:(char)arg1 ;
-(NSString *)previouslySelectedCategory;
-(void)setFullCategoryList:(NSArray *)arg1 ;
-(NSString *)currentlySelectedCategory;
-(void)_resetCheckedState;
-(void)deleteCategory:(id)arg1 ;
-(void)fetchLocalizedCategories;
-(NSArray *)fullCategoryList;
-(void)setCurrentlySelectedCategory:(NSString *)arg1 ;
-(NSMutableArray *)searchList;
-(void)setSearchList:(NSMutableArray *)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)setDelegate:(id<RAPCategoryChooserDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<RAPCategoryChooserDelegate>)delegate;
-(NSIndexPath *)indexPath;
-(void)didReceiveMemoryWarning;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(id)initWithStyle:(int)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
-(void)done;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(char)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2 ;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(char)showDeleteButton;
@end
