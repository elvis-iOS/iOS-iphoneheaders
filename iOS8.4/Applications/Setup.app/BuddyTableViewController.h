/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UIView, UITableView, BuddyTableHeaderView, NSString, NSAttributedString;

@interface BuddyTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	UIView* _containerView;
	UITableView* _tableView;
	BuddyTableHeaderView* _tableHeaderView;
	NSString* _titleText;
	NSString* _subTitleText;
	NSAttributedString* _attributedSubTitleText;

}

@property (nonatomic,readonly) UITableView * tableView;                                //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSString * titleText;                                     //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,retain) NSString * subTitleText;                                  //@synthesize subTitleText=_subTitleText - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedSubTitleText;              //@synthesize attributedSubTitleText=_attributedSubTitleText - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSAttributedString *)attributedSubTitleText;
-(NSString *)subTitleText;
-(void)setSubTitleText:(NSString *)arg1 ;
-(void)setAttributedSubTitleText:(NSAttributedString *)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(float)heightForHeaderInTableView:(id)arg1 ;
-(id)viewForHeaderInTableView:(id)arg1 ;
-(char)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(int)arg2 ;
-(id)contentScrollView;
-(void)updateHeaderView;
-(UITableView *)tableView;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
@end

