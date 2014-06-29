/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <MobileTimer/ChunkedGridLayoutDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <MobileTimer/AddClockViewControllerDelegate.h>
#import <MobileTimer/StateManagement.h>
#import <MobileTimer/WorldClockCollectionEditDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UINavigationController, UIPopoverController, FullScreenWorldClockCollectionController, NSTimer, UIPinchGestureRecognizer, NSIndexPath, WorldClockPadContentView;

@interface WorldClockPadViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, ChunkedGridLayoutDelegate, UIPopoverControllerDelegate, AddClockViewControllerDelegate, StateManagement, WorldClockCollectionEditDelegate, UIGestureRecognizerDelegate> {

	UINavigationController* _addClockNavigationController;
	UIPopoverController* _editClocksController;
	FullScreenWorldClockCollectionController* _fullScreenClocksController;
	int _currentPage;
	int _addedClockIndex;
	BOOL _networkReachable;
	NSTimer* _weatherUpdateTimer;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	NSIndexPath* _pinchedIndexPath;
	WorldClockPadContentView* _contentView;

}

@property (nonatomic,retain) WorldClockPadContentView * contentView;              //@synthesize contentView=_contentView - In the implementation block
-(void)dismissFullScreenClock;
-(id)fullScreenClocksController;
-(void)showAddView;
-(void)dismissAddViewController:(id)arg1 ;
-(void)addClockViewController:(id)arg1 addCity:(id)arg2 ;
-(void)didSuspend;
-(BOOL)shouldShowAddView;
-(BOOL)shouldToggleEditView;
-(void)updateMapWeatherDataForCities:(id)arg1 ;
-(void)presentFullScreenClockForIndexPath:(id)arg1 afterDelay:(double)arg2 ;
-(void)toggleEditView;
-(void)setLeftBarButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)pinchAction:(id)arg1 ;
-(void)handleApplicationDidEnterBackground;
-(void)handleApplicationWillEnterForeground;
-(void)updateMapWeatherDataForAllCities;
-(void)reachabilityChanged:(id)arg1 ;
-(void)updateClocksForOrientation:(int)arg1 ;
-(void)updatePageIndicator;
-(void)startUpdates;
-(void)stopUpdates;
-(void)addClock:(id)arg1 ;
-(BOOL)shouldPresentFullScreenClock;
-(void)presentFullScreenClockForIndexPath:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)scrollToPageContainingIndexPath:(id)arg1 ;
-(CGSize)sizeForItemWithLayout:(id)arg1 ;
-(void)weatherTemperatureUnitsDidChange;
-(void)collectionEditController:(id)arg1 willRemoveCityAtIndex:(unsigned)arg2 ;
-(void)dealloc;
-(id)init;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)contentView;
-(void)setContentView:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidUnload;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(id)defaultPNGName;
-(BOOL)popoverControllerShouldDismissPopover:(id)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)reloadState;
-(void)saveState;
@end
