/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKCalendarNotification.h>

@class NSString, NSDate, NSNumber;

@interface EKCalendarResourceChangeNotification : EKCalendarNotification {

	NSString* _location;
	NSString* _calendarName;
	NSDate* _startDate;
	NSDate* _endDate;
	bool _allDay;
	NSString* _eventID;
	unsigned _changeType;
	bool _dateChanged;
	bool _timeChanged;
	bool _locationChanged;
	bool _titleChanged;
	NSNumber* _createCount;
	NSNumber* _updateCount;
	NSNumber* _deleteCount;
	NSDate* _startDateForNextOccurrence;

}

@property (nonatomic,retain) NSString * location;                              //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSString * calendarName;                          //@synthesize calendarName=_calendarName - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                               //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * startDateForNextOccurrence;              //@synthesize startDateForNextOccurrence=_startDateForNextOccurrence - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                 //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) bool allDay;                                      //@synthesize allDay=_allDay - In the implementation block
@property (nonatomic,retain) NSString * eventID;                               //@synthesize eventID=_eventID - In the implementation block
@property (assign,nonatomic) unsigned changeType;                              //@synthesize changeType=_changeType - In the implementation block
@property (assign,nonatomic) bool dateChanged;                                 //@synthesize dateChanged=_dateChanged - In the implementation block
@property (assign,nonatomic) bool timeChanged;                                 //@synthesize timeChanged=_timeChanged - In the implementation block
@property (assign,nonatomic) bool locationChanged;                             //@synthesize locationChanged=_locationChanged - In the implementation block
@property (assign,nonatomic) bool titleChanged;                                //@synthesize titleChanged=_titleChanged - In the implementation block
@property (nonatomic,retain) NSNumber * createCount;                           //@synthesize createCount=_createCount - In the implementation block
@property (nonatomic,retain) NSNumber * updateCount;                           //@synthesize updateCount=_updateCount - In the implementation block
@property (nonatomic,retain) NSNumber * deleteCount;                           //@synthesize deleteCount=_deleteCount - In the implementation block
-(id)resourceChangeFromEventStore:(id)arg1 ;
-(void)setAllDay:(bool)arg1 ;
-(bool)dateChanged;
-(bool)timeChanged;
-(bool)titleChanged;
-(bool)locationChanged;
-(bool)needsAlert;
-(bool)allDay;
-(id)calendarName;
-(void)setCalendarName:(id)arg1 ;
-(void)setEventID:(id)arg1 ;
-(void)setChangeType:(unsigned)arg1 ;
-(id)createCount;
-(void)setCreateCount:(id)arg1 ;
-(id)updateCount;
-(void)setUpdateCount:(id)arg1 ;
-(void)setDeleteCount:(id)arg1 ;
-(void)setDateChanged:(bool)arg1 ;
-(void)setTimeChanged:(bool)arg1 ;
-(void)setLocationChanged:(bool)arg1 ;
-(void)setTitleChanged:(bool)arg1 ;
-(void)setStartDateForNextOccurrence:(id)arg1 ;
-(id)startDateForNextOccurrence;
-(id)eventID;
-(void)dealloc;
-(id)initWithType:(int)arg1 ;
-(id)deleteCount;
-(id)location;
-(unsigned)changeType;
-(id)startDate;
-(id)endDate;
-(void)setStartDate:(id)arg1 ;
-(void)setEndDate:(id)arg1 ;
-(void)setLocation:(id)arg1 ;
@end
