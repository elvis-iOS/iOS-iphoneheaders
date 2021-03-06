/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <FaceTime/PHFrecentCellDelegate.h>

@class UITableView, NSString;

@interface PHFrecentResultViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, PHFrecentCellDelegate> {

	UITableView* _tableView;

}

@property (retain) UITableView * tableView;                         //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)performDial:(id)arg1 audioOnlyCall:(char)arg2 ;
-(void)dialResult:(id)arg1 audioOnlyCall:(char)arg2 fromButton:(id)arg3 ;
-(id)additionalActionsForSearchResult:(id)arg1 ;
-(id)additionalActionsAlertTitleForSearchResult:(id)arg1 ;
-(void)_resetFrecentAlphaAndContentView;
-(void)dealloc;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(unsigned)supportedInterfaceOrientations;
-(void)setTableView:(UITableView *)arg1 ;
-(void)viewDidLoad;
-(UITableView *)tableView;
@end

