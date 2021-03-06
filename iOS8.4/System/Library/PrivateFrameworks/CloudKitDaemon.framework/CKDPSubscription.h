/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSMutableArray, CKDPIdentifier, CKDPSubscriptionNotification, CKDPRecordZoneIdentifier;

@interface CKDPSubscription : PBCodable <NSCopying> {

	SCD_Struct_CK18* _mutationTriggers;
	int _evaluationType;
	NSMutableArray* _filters;
	CKDPIdentifier* _identifier;
	CKDPSubscriptionNotification* _notification;
	int _owner;
	NSMutableArray* _recordTypes;
	CKDPRecordZoneIdentifier* _zoneIdentifier;
	BOOL _fireOnce;
	SCD_Struct_CK11 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) CKDPIdentifier * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasEvaluationType; 
@property (assign,nonatomic) int evaluationType;                                       //@synthesize evaluationType=_evaluationType - In the implementation block
@property (assign,nonatomic) BOOL hasOwner; 
@property (assign,nonatomic) int owner;                                                //@synthesize owner=_owner - In the implementation block
@property (nonatomic,readonly) unsigned long long mutationTriggersCount; 
@property (nonatomic,readonly) int* mutationTriggers; 
@property (nonatomic,readonly) BOOL hasNotification; 
@property (nonatomic,retain) CKDPSubscriptionNotification * notification;              //@synthesize notification=_notification - In the implementation block
@property (nonatomic,retain) NSMutableArray * filters;                                 //@synthesize filters=_filters - In the implementation block
@property (nonatomic,retain) NSMutableArray * recordTypes;                             //@synthesize recordTypes=_recordTypes - In the implementation block
@property (assign,nonatomic) BOOL hasFireOnce; 
@property (assign,nonatomic) BOOL fireOnce;                                            //@synthesize fireOnce=_fireOnce - In the implementation block
@property (nonatomic,readonly) BOOL hasZoneIdentifier; 
@property (nonatomic,retain) CKDPRecordZoneIdentifier * zoneIdentifier;                //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CKDPSubscriptionNotification *)notification;
-(CKDPIdentifier *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFilters:(NSMutableArray *)arg1 ;
-(void)setIdentifier:(CKDPIdentifier *)arg1 ;
-(NSMutableArray *)filters;
-(id)dictionaryRepresentation;
-(int)owner;
-(void)setZoneIdentifier:(CKDPRecordZoneIdentifier *)arg1 ;
-(BOOL)hasZoneIdentifier;
-(CKDPRecordZoneIdentifier *)zoneIdentifier;
-(BOOL)hasIdentifier;
-(void)addFilters:(id)arg1 ;
-(unsigned long long)filtersCount;
-(void)clearFilters;
-(id)filtersAtIndex:(unsigned long long)arg1 ;
-(void)addRecordTypes:(id)arg1 ;
-(unsigned long long)mutationTriggersCount;
-(void)clearMutationTriggers;
-(int)mutationTriggersAtIndex:(unsigned long long)arg1 ;
-(void)addMutationTriggers:(int)arg1 ;
-(void)setNotification:(CKDPSubscriptionNotification *)arg1 ;
-(unsigned long long)recordTypesCount;
-(void)clearRecordTypes;
-(id)recordTypesAtIndex:(unsigned long long)arg1 ;
-(void)setEvaluationType:(int)arg1 ;
-(void)setHasEvaluationType:(BOOL)arg1 ;
-(BOOL)hasEvaluationType;
-(void)setHasOwner:(BOOL)arg1 ;
-(BOOL)hasOwner;
-(int*)mutationTriggers;
-(void)setMutationTriggers:(int*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasNotification;
-(void)setFireOnce:(BOOL)arg1 ;
-(void)setHasFireOnce:(BOOL)arg1 ;
-(BOOL)hasFireOnce;
-(int)evaluationType;
-(NSMutableArray *)recordTypes;
-(void)setRecordTypes:(NSMutableArray *)arg1 ;
-(BOOL)fireOnce;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setOwner:(int)arg1 ;
@end

