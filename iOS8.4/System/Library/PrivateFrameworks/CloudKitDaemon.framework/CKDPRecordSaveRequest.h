/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <CloudKitDaemon/NSCopying.h>

@class CKDPRecordSaveRequestConflictLoserUpdate, NSMutableArray, NSString, CKDPRecord, CKDPRecordSaveRequestShareIdUpdate;

@interface CKDPRecordSaveRequest : PBRequest <NSCopying> {

	CKDPRecordSaveRequestConflictLoserUpdate* _conflictLoserUpdate;
	NSMutableArray* _conflictLosersToResolves;
	NSString* _etag;
	NSMutableArray* _fieldsToDeleteIfExistOnMerges;
	CKDPRecord* _record;
	NSString* _recordProtectionInfoTag;
	int _saveSemantics;
	NSString* _shareEtag;
	CKDPRecordSaveRequestShareIdUpdate* _shareIDUpdate;
	NSString* _zoneProtectionInfoTag;
	BOOL _merge;
	SCD_Struct_CK5 _has;

}

@property (nonatomic,readonly) BOOL hasRecord; 
@property (nonatomic,retain) CKDPRecord * record;                                                         //@synthesize record=_record - In the implementation block
@property (assign,nonatomic) BOOL hasMerge; 
@property (assign,nonatomic) BOOL merge;                                                                  //@synthesize merge=_merge - In the implementation block
@property (nonatomic,retain) NSMutableArray * fieldsToDeleteIfExistOnMerges;                              //@synthesize fieldsToDeleteIfExistOnMerges=_fieldsToDeleteIfExistOnMerges - In the implementation block
@property (nonatomic,readonly) BOOL hasEtag; 
@property (nonatomic,retain) NSString * etag;                                                             //@synthesize etag=_etag - In the implementation block
@property (nonatomic,readonly) BOOL hasConflictLoserUpdate; 
@property (nonatomic,retain) CKDPRecordSaveRequestConflictLoserUpdate * conflictLoserUpdate;              //@synthesize conflictLoserUpdate=_conflictLoserUpdate - In the implementation block
@property (assign,nonatomic) BOOL hasSaveSemantics; 
@property (assign,nonatomic) int saveSemantics;                                                           //@synthesize saveSemantics=_saveSemantics - In the implementation block
@property (nonatomic,readonly) BOOL hasZoneProtectionInfoTag; 
@property (nonatomic,retain) NSString * zoneProtectionInfoTag;                                            //@synthesize zoneProtectionInfoTag=_zoneProtectionInfoTag - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordProtectionInfoTag; 
@property (nonatomic,retain) NSString * recordProtectionInfoTag;                                          //@synthesize recordProtectionInfoTag=_recordProtectionInfoTag - In the implementation block
@property (nonatomic,retain) NSMutableArray * conflictLosersToResolves;                                   //@synthesize conflictLosersToResolves=_conflictLosersToResolves - In the implementation block
@property (nonatomic,readonly) BOOL hasShareEtag; 
@property (nonatomic,retain) NSString * shareEtag;                                                        //@synthesize shareEtag=_shareEtag - In the implementation block
@property (nonatomic,readonly) BOOL hasShareIDUpdate; 
@property (nonatomic,retain) CKDPRecordSaveRequestShareIdUpdate * shareIDUpdate;                          //@synthesize shareIDUpdate=_shareIDUpdate - In the implementation block
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setEtag:(NSString *)arg1 ;
-(BOOL)hasEtag;
-(NSString *)etag;
-(CKDPRecord *)record;
-(void)setRecord:(CKDPRecord *)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setShareEtag:(NSString *)arg1 ;
-(void)setZoneProtectionInfoTag:(NSString *)arg1 ;
-(BOOL)hasZoneProtectionInfoTag;
-(NSString *)zoneProtectionInfoTag;
-(BOOL)hasRecord;
-(void)addFieldsToDeleteIfExistOnMerge:(id)arg1 ;
-(void)addConflictLosersToResolve:(id)arg1 ;
-(unsigned long long)fieldsToDeleteIfExistOnMergesCount;
-(void)clearFieldsToDeleteIfExistOnMerges;
-(id)fieldsToDeleteIfExistOnMergeAtIndex:(unsigned long long)arg1 ;
-(void)setConflictLoserUpdate:(CKDPRecordSaveRequestConflictLoserUpdate *)arg1 ;
-(void)setRecordProtectionInfoTag:(NSString *)arg1 ;
-(unsigned long long)conflictLosersToResolvesCount;
-(void)clearConflictLosersToResolves;
-(id)conflictLosersToResolveAtIndex:(unsigned long long)arg1 ;
-(void)setShareIDUpdate:(CKDPRecordSaveRequestShareIdUpdate *)arg1 ;
-(void)setMerge:(BOOL)arg1 ;
-(void)setHasMerge:(BOOL)arg1 ;
-(BOOL)hasMerge;
-(BOOL)hasConflictLoserUpdate;
-(int)saveSemantics;
-(void)setSaveSemantics:(int)arg1 ;
-(void)setHasSaveSemantics:(BOOL)arg1 ;
-(BOOL)hasSaveSemantics;
-(BOOL)hasRecordProtectionInfoTag;
-(BOOL)hasShareEtag;
-(BOOL)hasShareIDUpdate;
-(BOOL)merge;
-(NSMutableArray *)fieldsToDeleteIfExistOnMerges;
-(void)setFieldsToDeleteIfExistOnMerges:(NSMutableArray *)arg1 ;
-(CKDPRecordSaveRequestConflictLoserUpdate *)conflictLoserUpdate;
-(NSString *)recordProtectionInfoTag;
-(NSMutableArray *)conflictLosersToResolves;
-(void)setConflictLosersToResolves:(NSMutableArray *)arg1 ;
-(NSString *)shareEtag;
-(CKDPRecordSaveRequestShareIdUpdate *)shareIDUpdate;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

