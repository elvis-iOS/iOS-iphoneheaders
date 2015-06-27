/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:08:59 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UISearchBarDelegate.h>

@class UISearchBar, UITableView, UIView, PSLanguageSelector, PSLocaleSelector, PSLanguage, NSArray, NSString;

@interface PSInternationalLanguageController : PSViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate> {

	UISearchBar* _searchBar;
	UITableView* _tableView;
	UIView* _contentView;
	char _searchIsActive;
	PSLanguageSelector* _languageSelector;
	PSLocaleSelector* _localeSelector;
	PSLanguage* _checkedLanguage;
	NSArray* _deviceLanguages;
	NSArray* _otherLanguages;
	NSArray* _filteredDeviceLanguages;
	NSArray* _filteredOtherLanguages;
	NSString* _savedSearchTerm;

}

@property (nonatomic,retain) PSLanguageSelector * languageSelector;              //@synthesize languageSelector=_languageSelector - In the implementation block
@property (nonatomic,retain) PSLocaleSelector * localeSelector;                  //@synthesize localeSelector=_localeSelector - In the implementation block
@property (nonatomic,retain) PSLanguage * checkedLanguage;                       //@synthesize checkedLanguage=_checkedLanguage - In the implementation block
@property (nonatomic,retain) NSArray * deviceLanguages;                          //@synthesize deviceLanguages=_deviceLanguages - In the implementation block
@property (nonatomic,retain) NSArray * otherLanguages;                           //@synthesize otherLanguages=_otherLanguages - In the implementation block
@property (nonatomic,retain) NSArray * filteredDeviceLanguages;                  //@synthesize filteredDeviceLanguages=_filteredDeviceLanguages - In the implementation block
@property (nonatomic,retain) NSArray * filteredOtherLanguages;                   //@synthesize filteredOtherLanguages=_filteredOtherLanguages - In the implementation block
@property (nonatomic,retain) NSString * savedSearchTerm;                         //@synthesize savedSearchTerm=_savedSearchTerm - In the implementation block
@property (assign,nonatomic) char searchIsActive;                                //@synthesize searchIsActive=_searchIsActive - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)cancelButtonTapped;
-(void)_removeBlackFrame;
-(void)setLanguageSelector:(PSLanguageSelector *)arg1 ;
-(void)setLocaleSelector:(PSLocaleSelector *)arg1 ;
-(void)setCheckedLanguage:(PSLanguage *)arg1 ;
-(void)setDeviceLanguages:(NSArray *)arg1 ;
-(void)setOtherLanguages:(NSArray *)arg1 ;
-(void)setFilteredDeviceLanguages:(NSArray *)arg1 ;
-(void)setFilteredOtherLanguages:(NSArray *)arg1 ;
-(void)setSavedSearchTerm:(NSString *)arg1 ;
-(void)updateNavigationItem;
-(void)generateLanguageCells;
-(void)loadData;
-(id)_mainContentView;
-(PSLanguageSelector *)languageSelector;
-(PSLocaleSelector *)localeSelector;
-(void)sortByLocalizedLanguage:(id)arg1 ;
-(NSArray *)filteredDeviceLanguages;
-(NSArray *)filteredOtherLanguages;
-(NSArray *)deviceLanguages;
-(NSArray *)otherLanguages;
-(PSLanguage *)checkedLanguage;
-(void)doneButtonTapped;
-(id)filteredLanguagesForLanguageList:(id)arg1 searchString:(id)arg2 ;
-(void)reloadDataAndScrollToCheckedLanguageWithAnimation:(char)arg1 ;
-(NSString *)savedSearchTerm;
-(char)searchIsActive;
-(void)setSearchIsActive:(char)arg1 ;
@end
