/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:52 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class GEOTimeCheckpoints;

@interface GEOETAStep : PBCodable <NSCopying> {

	unsigned _distanceRemaining;
	unsigned _expectedTime;
	unsigned _stepID;
	GEOTimeCheckpoints* _timeCheckpoints;
	int _zilchPointIndex;
	SCD_Struct_GE50 _has;

}

@property (assign,nonatomic) BOOL hasDistanceRemaining; 
@property (assign,nonatomic) unsigned distanceRemaining; 
@property (assign,nonatomic) BOOL hasStepID; 
@property (assign,nonatomic) unsigned stepID;                                   //@synthesize stepID=_stepID - In the implementation block
@property (assign,nonatomic) BOOL hasExpectedTime; 
@property (assign,nonatomic) unsigned expectedTime;                             //@synthesize expectedTime=_expectedTime - In the implementation block
@property (assign,nonatomic) BOOL hasZilchPointIndex; 
@property (assign,nonatomic) int zilchPointIndex;                               //@synthesize zilchPointIndex=_zilchPointIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasTimeCheckpoints; 
@property (nonatomic,retain) GEOTimeCheckpoints * timeCheckpoints;              //@synthesize timeCheckpoints=_timeCheckpoints - In the implementation block
-(unsigned)distanceRemaining;
-(void)setDistanceRemaining:(unsigned)arg1 ;
-(void)setHasDistanceRemaining:(BOOL)arg1 ;
-(BOOL)hasDistanceRemaining;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)expectedTime;
-(unsigned)stepID;
-(void)setExpectedTime:(unsigned)arg1 ;
-(void)setHasExpectedTime:(BOOL)arg1 ;
-(BOOL)hasExpectedTime;
-(void)setTimeCheckpoints:(GEOTimeCheckpoints *)arg1 ;
-(void)setStepID:(unsigned)arg1 ;
-(void)setHasStepID:(BOOL)arg1 ;
-(BOOL)hasStepID;
-(BOOL)hasTimeCheckpoints;
-(GEOTimeCheckpoints *)timeCheckpoints;
-(int)zilchPointIndex;
-(void)setZilchPointIndex:(int)arg1 ;
-(void)setHasZilchPointIndex:(BOOL)arg1 ;
-(BOOL)hasZilchPointIndex;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
