/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:27 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <MapsSupport/NSCopying.h>

@class PBUnknownFields, GEOLatLng, GEOMapRegion;

@interface MSPDroppedPin : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOLatLng* _latLng;
	GEOMapRegion* _mapRegion;

}

@property (nonatomic,readonly) BOOL hasLatLng; 
@property (nonatomic,retain) GEOLatLng * latLng;                             //@synthesize latLng=_latLng - In the implementation block
@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion;                       //@synthesize mapRegion=_mapRegion - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(id)initWithSearchResult:(id)arg1 ;
-(GEOLatLng *)latLng;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasMapRegion;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasLatLng;
-(void)setLatLng:(GEOLatLng *)arg1 ;
-(GEOMapRegion *)mapRegion;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
