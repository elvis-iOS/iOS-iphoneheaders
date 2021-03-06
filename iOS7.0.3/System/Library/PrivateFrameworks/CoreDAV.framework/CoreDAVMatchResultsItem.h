/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem;

@interface CoreDAVMatchResultsItem : CoreDAVItem {

	CoreDAVLeafItem* _rank;
	CoreDAVLeafItem* _language;
	CoreDAVLeafItem* _region;
	CoreDAVLeafItem* _calendarDescription;

}

@property (retain) CoreDAVLeafItem * rank;                             //@synthesize rank=_rank - In the implementation block
@property (retain) CoreDAVLeafItem * language;                         //@synthesize language=_language - In the implementation block
@property (retain) CoreDAVLeafItem * region;                           //@synthesize region=_region - In the implementation block
@property (retain) CoreDAVLeafItem * calendarDescription;              //@synthesize calendarDescription=_calendarDescription - In the implementation block
+(id)copyParseRules;
-(void)dealloc;
-(id)description;
-(id)language;
-(void)setLanguage:(id)arg1 ;
-(id)calendarDescription;
-(void)setCalendarDescription:(id)arg1 ;
-(id)rank;
-(void)setRank:(id)arg1 ;
-(void)setRegion:(id)arg1 ;
-(id)region;
@end

