/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:44 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <MobileCal/InfiniteScrollViewController.h>
#import <MobileCal/MainViewController.h>

@class CalendarModel, EKCalendarDate, MonthTitleView, UIFont, NSString;

@interface MonthViewController : InfiniteScrollViewController <MainViewController> {

	CalendarModel* _model;
	EKCalendarDate* _backButtonDate;
	char _backButtonShowingInterval;
	float _decelerationTargetY;
	EKCalendarDate* _decelerationTargetDate;
	MonthTitleView* _monthTitleView;
	char _monthTitleViewIsVisible;
	char _shouldShowMonthTitleHUDWhenScrolling;
	UIFont* _headerFont;

}

@property (readonly) UIFont * headerFont;                                                      //@synthesize headerFont=_headerFont - In the implementation block
@property (assign,nonatomic) char shouldShowMonthTitleHUDWhenScrolling;                        //@synthesize shouldShowMonthTitleHUDWhenScrolling=_shouldShowMonthTitleHUDWhenScrolling - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char shouldPresentEventDetailsForSelectedOccurrence; 
-(CGRect)frameForTodayHighlight;
-(void)showDate:(id)arg1 animated:(char)arg2 ;
-(void)showEvent:(id)arg1 animated:(char)arg2 showDetails:(char)arg3 ;
-(void)showEvent:(id)arg1 animated:(char)arg2 showDetails:(char)arg3 showComments:(char)arg4 ;
-(void)selectDate:(id)arg1 animated:(char)arg2 ;
-(void)updateBackButtonToDate:(id)arg1 ;
-(void)_updateBackButtonOnBackViewControllerToDate:(id)arg1 ;
-(void)showEvent:(id)arg1 animated:(char)arg2 ;
-(char)allowsOverriddenRightNavigationBarItems;
-(char)allowsOverriddenToolbarItems;
-(char)isTodayVisible;
-(char)shouldPushNextLevelViewControllerWhenTodayIsVisible;
-(void)presentDetailsViewWhenReady:(id)arg1 animated:(char)arg2 ;
-(id)bestDateForNewEvent;
-(void)localeChanged;
-(id)initWithCalendarDate:(id)arg1 model:(id)arg2 ;
-(void)_significantTimeChangeOccurred:(id)arg1 ;
-(void)_calendarModelTimeZoneChanged:(id)arg1 ;
-(void)weekNumbersPrefChanged;
-(void)_selectedDateChanged:(id)arg1 ;
-(id)pastMajorBoundaryCalendarDateForCalendarDate:(id)arg1 ;
-(id)_slowComputeCalendarDateForWeekFromStartDate:(id)arg1 weekOffset:(int)arg2 ;
-(char)_isTodayCircleFrameFullyUnobstructed;
-(id)calendarDateForSubviewBelowSubviewWithCalendarDate:(id)arg1 ;
-(void)willBeginDragging;
-(void)_updateMonthTitle;
-(float)decelerationDistanceThresholdForPreferringMonthBoundary;
-(CGPoint)nearestMajorBoundaryForPoint:(CGPoint)arg1 ;
-(float)decelerationDistanceThresholdForDisplayingMonthBanner;
-(void)didEndScrolling;
-(void)calendarModelTimeZoneChanged;
-(void)_reloadAllViews;
-(float)decelerationDistanceThresholdToStopShowingMonthBanner;
-(char)shouldAnimateScrollToDate:(id)arg1 fromClosestDate:(id)arg2 ;
-(id)futureMajorBoundaryCalendarDateForCalendarDate:(id)arg1 ;
-(id)calendarDateForSubviewAboveSubviewWithCalendarDate:(id)arg1 ;
-(void)willEndDraggingWithVelocity:(CGPoint)arg1 targetContentOffset:(inout CGPoint*)arg2 ;
-(id)monthTitleView;
-(CGRect)frameForWeekContainingDate:(id)arg1 ;
-(id)cellFramesForWeekContainingDate:(id)arg1 ;
-(id)adjustSelectedDateForNewMonth:(id)arg1 ;
-(char)shouldShowMonthTitleHUDWhenScrolling;
-(void)setShouldShowMonthTitleHUDWhenScrolling:(char)arg1 ;
-(void)significantTimeChangeOccurred;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)didScroll;
-(UIFont *)headerFont;
-(void)_localeChanged:(id)arg1 ;
@end

