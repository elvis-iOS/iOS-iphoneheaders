/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:34 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBUnknownFields, NSString, NSMutableArray;

@interface GEOPDAutocompleteEntryHighlightLine : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _line;
	NSMutableArray* _spans;

}

@property (nonatomic,readonly) BOOL hasLine; 
@property (nonatomic,retain) NSString * line;                                //@synthesize line=_line - In the implementation block
@property (nonatomic,retain) NSMutableArray * spans;                         //@synthesize spans=_spans - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setLine:(NSString *)arg1 ;
-(NSString *)line;
-(void)setSpans:(NSMutableArray *)arg1 ;
-(void)addSpan:(id)arg1 ;
-(unsigned long long)spansCount;
-(void)clearSpans;
-(id)spanAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasLine;
-(PBUnknownFields *)unknownFields;
-(NSMutableArray *)spans;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

