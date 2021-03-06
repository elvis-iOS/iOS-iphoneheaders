/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:35 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPortAssistant/StepByStepUIViewController.h>
#import <AirPortAssistant/TableViewManagerDelegate.h>

@class NSDictionary, UIPopoverController, NSArray, NSString, RecommendationActionController;

@interface StepByStepUIViewController_DevicePicker : StepByStepUIViewController <TableViewManagerDelegate> {

	NSDictionary* _selectedDevice;
	NSDictionary* _sourceNetwork;
	NSDictionary* _sourceBase;
	NSDictionary* _targetBase;
	UIPopoverController* _popover;
	NSArray* sortedDevices;
	NSString* connectionMedium;
	RecommendationActionController* actionController;
	BOOL _showSingleBaseTopo;
	BOOL showFullList;

}

@property (nonatomic,retain) NSArray * sortedDevices; 
@property (assign,nonatomic) NSString * connectionMedium; 
@property (nonatomic,retain) RecommendationActionController * actionController; 
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)touchInCellAtIndexPath:(id)arg1 ;
-(id)valueForItemOfType:(id)arg1 atTypeIndex:(unsigned long long)arg2 inCellWithTag:(long long)arg3 ;
-(RecommendationActionController *)actionController;
-(void)setActionController:(RecommendationActionController *)arg1 ;
-(void)setSortedDevices:(NSArray *)arg1 ;
-(void)setConnectionMedium:(NSString *)arg1 ;
-(BOOL)showMoreOptions;
-(NSString *)connectionMedium;
-(NSArray *)sortedDevices;
-(void)setupPickerTable;
-(void)updateSelections;
-(id)pickerContent;
@end

