/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:05:06 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class CKDPLocationBound, CKDPRecordFieldIdentifier, CKDPRecordFieldValue;

@interface CKDPQueryFilter : PBCodable <NSCopying> {

	CKDPLocationBound* _bounds;
	CKDPRecordFieldIdentifier* _fieldName;
	CKDPRecordFieldValue* _fieldValue;
	int _type;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) char hasFieldName; 
@property (nonatomic,retain) CKDPRecordFieldIdentifier * fieldName;              //@synthesize fieldName=_fieldName - In the implementation block
@property (nonatomic,readonly) char hasFieldValue; 
@property (nonatomic,retain) CKDPRecordFieldValue * fieldValue;                  //@synthesize fieldValue=_fieldValue - In the implementation block
@property (nonatomic,readonly) char hasBounds; 
@property (nonatomic,retain) CKDPLocationBound * bounds;                         //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type;                                           //@synthesize type=_type - In the implementation block
-(CKDPLocationBound *)bounds;
-(void)setBounds:(CKDPLocationBound *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setFieldName:(CKDPRecordFieldIdentifier *)arg1 ;
-(char)hasFieldName;
-(CKDPRecordFieldIdentifier *)fieldName;
-(char)hasBounds;
-(void)setFieldValue:(CKDPRecordFieldValue *)arg1 ;
-(char)hasFieldValue;
-(CKDPRecordFieldValue *)fieldValue;
-(void)setHasType:(char)arg1 ;
-(char)hasType;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

