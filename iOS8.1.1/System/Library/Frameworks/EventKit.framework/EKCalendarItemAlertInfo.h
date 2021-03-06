/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:07 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/NSCopying.h>

@protocol EKTravelAdvice;
@class NSString, NSDate, NSTimeZone, NSURL;

@interface EKCalendarItemAlertInfo : NSObject <NSCopying> {

	BOOL _allDay;
	BOOL _tentative;
	BOOL _acknowledged;
	BOOL _isOffsetFromTravelTimeStart;
	NSString* _publisherBulletinID;
	NSString* _title;
	NSString* _location;
	NSDate* _eventDate;
	NSDate* _endDate;
	NSTimeZone* _eventTimeZone;
	NSURL* _action;
	NSURL* _entityID;
	long long _proximity;
	NSString* _externalID;
	NSString* _dismissalID;
	NSString* _alarmID;
	id<EKTravelAdvice> _latestTravelAdvice;
	NSDate* _lastFireTimeOfAlertOffsetFromTravelTime;
	NSDate* _firstDateAlertedForTravelAdvice;

}

@property (nonatomic,readonly) NSString * recordID; 
@property (nonatomic,readonly) NSString * publisherBulletinID;                              //@synthesize publisherBulletinID=_publisherBulletinID - In the implementation block
@property (nonatomic,readonly) NSString * title;                                            //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * location;                                         //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSDate * eventDate;                                          //@synthesize eventDate=_eventDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                            //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSTimeZone * eventTimeZone;                                  //@synthesize eventTimeZone=_eventTimeZone - In the implementation block
@property (nonatomic,readonly) NSURL * action;                                              //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) NSURL * entityID;                                            //@synthesize entityID=_entityID - In the implementation block
@property (nonatomic,readonly) BOOL allDay;                                                 //@synthesize allDay=_allDay - In the implementation block
@property (nonatomic,readonly) BOOL tentative;                                              //@synthesize tentative=_tentative - In the implementation block
@property (nonatomic,readonly) long long proximity;                                         //@synthesize proximity=_proximity - In the implementation block
@property (nonatomic,readonly) NSString * externalID;                                       //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,readonly) BOOL acknowledged;                                           //@synthesize acknowledged=_acknowledged - In the implementation block
@property (nonatomic,readonly) NSString * dismissalID;                                      //@synthesize dismissalID=_dismissalID - In the implementation block
@property (nonatomic,readonly) NSString * alarmID;                                          //@synthesize alarmID=_alarmID - In the implementation block
@property (nonatomic,readonly) BOOL isOffsetFromTravelTimeStart;                            //@synthesize isOffsetFromTravelTimeStart=_isOffsetFromTravelTimeStart - In the implementation block
@property (nonatomic,retain) id<EKTravelAdvice> latestTravelAdvice;                         //@synthesize latestTravelAdvice=_latestTravelAdvice - In the implementation block
@property (nonatomic,retain) NSDate * lastFireTimeOfAlertOffsetFromTravelTime;              //@synthesize lastFireTimeOfAlertOffsetFromTravelTime=_lastFireTimeOfAlertOffsetFromTravelTime - In the implementation block
@property (nonatomic,retain) NSDate * firstDateAlertedForTravelAdvice;                      //@synthesize firstDateAlertedForTravelAdvice=_firstDateAlertedForTravelAdvice - In the implementation block
-(NSURL *)entityID;
-(NSString *)externalID;
-(BOOL)acknowledged;
-(long long)proximity;
-(NSString *)alarmID;
-(BOOL)allDay;
-(id)initWithTitle:(id)arg1 location:(id)arg2 date:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 allDay:(BOOL)arg6 tentative:(BOOL)arg7 publisherBulletinID:(id)arg8 entityID:(id)arg9 action:(id)arg10 proximity:(long long)arg11 externalID:(id)arg12 acknowledged:(BOOL)arg13 dismissalID:(id)arg14 alarmID:(id)arg15 isOffsetFromTravelTimeStart:(BOOL)arg16 ;
-(NSTimeZone *)eventTimeZone;
-(NSDate *)eventDate;
-(NSString *)publisherBulletinID;
-(BOOL)tentative;
-(NSString *)dismissalID;
-(BOOL)isOffsetFromTravelTimeStart;
-(id<EKTravelAdvice>)latestTravelAdvice;
-(void)setLatestTravelAdvice:(id<EKTravelAdvice>)arg1 ;
-(NSDate *)lastFireTimeOfAlertOffsetFromTravelTime;
-(void)setLastFireTimeOfAlertOffsetFromTravelTime:(NSDate *)arg1 ;
-(NSDate *)firstDateAlertedForTravelAdvice;
-(void)setFirstDateAlertedForTravelAdvice:(NSDate *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSURL *)action;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)location;
-(NSString *)recordID;
-(NSDate *)endDate;
@end

