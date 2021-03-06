/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class CKDPDate;

@interface CKDPDateStatistics : PBCodable <NSCopying> {

	CKDPDate* _creation;
	CKDPDate* _modification;

}

@property (nonatomic,readonly) BOOL hasCreation; 
@property (nonatomic,retain) CKDPDate * creation;                  //@synthesize creation=_creation - In the implementation block
@property (nonatomic,readonly) BOOL hasModification; 
@property (nonatomic,retain) CKDPDate * modification;              //@synthesize modification=_modification - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setCreation:(CKDPDate *)arg1 ;
-(void)setModification:(CKDPDate *)arg1 ;
-(BOOL)hasCreation;
-(BOOL)hasModification;
-(CKDPDate *)creation;
-(CKDPDate *)modification;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

