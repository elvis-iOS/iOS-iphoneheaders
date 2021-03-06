/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:40 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CDAttribute;

@interface _CDDailyProgressForecastQuery : NSObject {

	BOOL _attributeEncodesProgress;
	BOOL _considerWeeklyPattern;
	BOOL _considerAlternateDayPattern;
	BOOL _considerDailyPattern;
	double _temporalResolution;
	double _lookBackDuration;
	CDAttribute* _attribute;

}

@property (assign) double temporalResolution;                     //@synthesize temporalResolution=_temporalResolution - In the implementation block
@property (assign) double lookBackDuration;                       //@synthesize lookBackDuration=_lookBackDuration - In the implementation block
@property (assign) BOOL attributeEncodesProgress;                 //@synthesize attributeEncodesProgress=_attributeEncodesProgress - In the implementation block
@property (assign) BOOL considerWeeklyPattern;                    //@synthesize considerWeeklyPattern=_considerWeeklyPattern - In the implementation block
@property (assign) BOOL considerAlternateDayPattern;              //@synthesize considerAlternateDayPattern=_considerAlternateDayPattern - In the implementation block
@property (assign) BOOL considerDailyPattern;                     //@synthesize considerDailyPattern=_considerDailyPattern - In the implementation block
@property (retain) CDAttribute * attribute;                       //@synthesize attribute=_attribute - In the implementation block
-(CDAttribute *)attribute;
-(double)temporalResolution;
-(void)setTemporalResolution:(double)arg1 ;
-(id)forecastDay:(id)arg1 ;
-(id)getDailyProgressForHistory:(id)arg1 usingReferenceDate:(id)arg2 ;
-(id)forecastUsingDailyProgressDict:(id)arg1 andKeys:(id)arg2 ;
-(id)aggregateForecastsToHaveMinAvgVar:(id)arg1 ;
-(unsigned long long)slotsPerDay;
-(id)initWithNumericAttribute:(id)arg1 ;
-(double)lookBackDuration;
-(void)setLookBackDuration:(double)arg1 ;
-(BOOL)attributeEncodesProgress;
-(void)setAttributeEncodesProgress:(BOOL)arg1 ;
-(BOOL)considerWeeklyPattern;
-(void)setConsiderWeeklyPattern:(BOOL)arg1 ;
-(BOOL)considerAlternateDayPattern;
-(void)setConsiderAlternateDayPattern:(BOOL)arg1 ;
-(BOOL)considerDailyPattern;
-(void)setConsiderDailyPattern:(BOOL)arg1 ;
-(void)setAttribute:(CDAttribute *)arg1 ;
-(id)forecast;
@end

