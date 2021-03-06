/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class NSArray, UIPrintingMessageView;

@interface UIPrintStatusJobsViewController : UITableViewController {

	NSArray* _jobs;
	BOOL _autoPush;
	UIPrintingMessageView* _noJobsView;

}
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willReappear;
-(void)pushJob:(id)arg1 animated:(BOOL)arg2 ;
-(id)visibleJobs;
-(void)updateTableViewCell:(id)arg1 withJob:(id)arg2 ;
-(void)updateForJobCountChange;
-(void)updateJobInfo:(id)arg1 ;
-(void)pushSingleJobAnimated:(BOOL)arg1 ;
-(void)handleJobListDidChange;
@end

