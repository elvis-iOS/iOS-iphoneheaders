/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:07:18 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/UIPlugins/Restaurants.siriUIBundle/Restaurants
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSIndexPath, NSMutableArray;

@interface SiriRestaurantsParsedOperationHours : NSObject {

	NSIndexPath* _nowIndexPath;
	NSMutableArray* _dayRangeStrings;
	NSMutableArray* _periodsPerDayRange;
	int _currentOpenStatus;
	double _timeIntervalUntilStatusChange;

}
-(void)enumerateHours:(/*^block*/id)arg1 ;
-(int)currentOpenStatus;
-(double)intervalUntilNextStatusChange;
-(void)_updateWithOperationHours:(id)arg1 timeZone:(id)arg2 ;
-(void)_updateOpenStatus:(id)arg1 timeZone:(id)arg2 ;
-(id)_displayStringForSiriDays:(id)arg1 ;
-(void)_enumerateOpenHoursRangesForHours:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)_displayStringForSiriDayOfWeek:(id)arg1 ;
-(id)_dayOfWeekOrderedKeys;
-(id)currentRangeIndexPath;
-(id)initWithOperationHours:(id)arg1 timeZone:(id)arg2 ;
-(id)currentPeriod;
@end

