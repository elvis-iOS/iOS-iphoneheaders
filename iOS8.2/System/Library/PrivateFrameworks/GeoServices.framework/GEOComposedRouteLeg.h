/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:09 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOComposedRoute, NSArray;

@interface GEOComposedRouteLeg : NSObject {

	GEOComposedRoute* _composedRoute;
	int _type;
	NSRange _pointRange;
	NSRange _stepRange;

}

@property (nonatomic,readonly) int type;                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) int transportType; 
@property (nonatomic,readonly) NSRange pointRange;                          //@synthesize pointRange=_pointRange - In the implementation block
@property (nonatomic,readonly) NSRange stepRange;                           //@synthesize stepRange=_stepRange - In the implementation block
@property (nonatomic,readonly) unsigned startPointIndex; 
@property (nonatomic,readonly) unsigned endPointIndex; 
@property (nonatomic,readonly) unsigned pointCount; 
@property (nonatomic,readonly) unsigned startStepIndex; 
@property (nonatomic,readonly) unsigned endStepIndex; 
@property (nonatomic,readonly) unsigned stepCount; 
@property (nonatomic,readonly) NSArray * steps; 
@property (assign,nonatomic) GEOComposedRoute * composedRoute;              //@synthesize composedRoute=_composedRoute - In the implementation block
-(id)description;
-(int)type;
-(void)setComposedRoute:(GEOComposedRoute *)arg1 ;
-(NSRange)stepRange;
-(NSRange)pointRange;
-(double)remainingTimeAlongLegFromStepIndex:(unsigned)arg1 currentStepRemainingDistance:(double)arg2 ;
-(unsigned)endStepIndex;
-(double)remainingDistanceAlongLegFromStepIndex:(unsigned)arg1 currentStepRemainingDistance:(double)arg2 ;
-(id)initWithComposedRoute:(id)arg1 routeLegType:(int)arg2 stepRange:(NSRange)arg3 pointRange:(NSRange)arg4 ;
-(unsigned)startStepIndex;
-(unsigned)stepCount;
-(unsigned)startPointIndex;
-(unsigned)pointCount;
-(GEOComposedRoute *)composedRoute;
-(unsigned)endPointIndex;
-(int)transportType;
-(NSArray *)steps;
@end

