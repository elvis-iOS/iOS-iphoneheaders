/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableArray, GEOPlaceSearchResponse;

@interface GEOETAResponse : PBCodable <NSCopying> {

	SCD_Struct_GE56* _problemDetails;
	unsigned _problemDetailsCount;
	unsigned _problemDetailsSpace;
	NSMutableArray* _etaResults;
	GEOPlaceSearchResponse* _originPlaceSearchResponse;
	int _status;
	SCD_Struct_GE52 _has;

}

@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                                      //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSMutableArray * etaResults;                                     //@synthesize etaResults=_etaResults - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginPlaceSearchResponse; 
@property (nonatomic,retain) GEOPlaceSearchResponse * originPlaceSearchResponse;              //@synthesize originPlaceSearchResponse=_originPlaceSearchResponse - In the implementation block
@property (nonatomic,readonly) unsigned problemDetailsCount; 
@property (nonatomic,readonly) SCD_Struct_GE56* problemDetails; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)clearProblemDetails;
-(unsigned)problemDetailsCount;
-(SCD_Struct_GE56)problemDetailAtIndex:(unsigned)arg1 ;
-(void)addProblemDetail:(SCD_Struct_GE56)arg1 ;
-(SCD_Struct_GE56*)problemDetails;
-(void)setProblemDetails:(SCD_Struct_GE56*)arg1 count:(unsigned)arg2 ;
-(BOOL)hasStatus;
-(void)setHasStatus:(BOOL)arg1 ;
-(void)setEtaResults:(id)arg1 ;
-(void)setOriginPlaceSearchResponse:(id)arg1 ;
-(void)addEtaResult:(id)arg1 ;
-(unsigned)etaResultsCount;
-(void)clearEtaResults;
-(id)etaResultAtIndex:(unsigned)arg1 ;
-(BOOL)hasOriginPlaceSearchResponse;
-(id)originPlaceSearchResponse;
-(id)etaResults;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

