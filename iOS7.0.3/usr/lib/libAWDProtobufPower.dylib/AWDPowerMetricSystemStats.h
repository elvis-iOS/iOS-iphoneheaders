/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libAWDProtobufPower.dylib
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDProtobufPower.dylib/libAWDProtobufPower.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface AWDPowerMetricSystemStats : PBCodable {

	unsigned long long _timestamp;
	unsigned _allAppsCount;
	NSMutableArray* _appInfos;
	unsigned _avgBrightness;
	unsigned _avgMicroAmps;
	NSMutableArray* _backlightBuckets;
	unsigned _cPUEnergyMicroWatt;
	NSMutableArray* _cpuLoads;
	NSMutableArray* _dataUsageInfos;
	unsigned _dispOnCount;
	unsigned _dispOnDuration;
	unsigned _energyChargedMicroWatt;
	unsigned _energyConsumedMicroWatt;
	unsigned _mieCount;
	unsigned _mieDuration;
	SCD_Struct_AW0 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDispOnDuration; 
@property (assign,nonatomic) unsigned dispOnDuration;                        //@synthesize dispOnDuration=_dispOnDuration - In the implementation block
@property (assign,nonatomic) BOOL hasDispOnCount; 
@property (assign,nonatomic) unsigned dispOnCount;                           //@synthesize dispOnCount=_dispOnCount - In the implementation block
@property (assign,nonatomic) BOOL hasAvgMicroAmps; 
@property (assign,nonatomic) unsigned avgMicroAmps;                          //@synthesize avgMicroAmps=_avgMicroAmps - In the implementation block
@property (assign,nonatomic) BOOL hasAvgBrightness; 
@property (assign,nonatomic) unsigned avgBrightness;                         //@synthesize avgBrightness=_avgBrightness - In the implementation block
@property (assign,nonatomic) BOOL hasMieDuration; 
@property (assign,nonatomic) unsigned mieDuration;                           //@synthesize mieDuration=_mieDuration - In the implementation block
@property (assign,nonatomic) BOOL hasMieCount; 
@property (assign,nonatomic) unsigned mieCount;                              //@synthesize mieCount=_mieCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * appInfos;                      //@synthesize appInfos=_appInfos - In the implementation block
@property (assign,nonatomic) BOOL hasAllAppsCount; 
@property (assign,nonatomic) unsigned allAppsCount;                          //@synthesize allAppsCount=_allAppsCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * dataUsageInfos;                //@synthesize dataUsageInfos=_dataUsageInfos - In the implementation block
@property (nonatomic,retain) NSMutableArray * cpuLoads;                      //@synthesize cpuLoads=_cpuLoads - In the implementation block
@property (assign,nonatomic) BOOL hasCPUEnergyMicroWatt; 
@property (assign,nonatomic) unsigned cPUEnergyMicroWatt;                    //@synthesize cPUEnergyMicroWatt=_cPUEnergyMicroWatt - In the implementation block
@property (assign,nonatomic) BOOL hasEnergyConsumedMicroWatt; 
@property (assign,nonatomic) unsigned energyConsumedMicroWatt;               //@synthesize energyConsumedMicroWatt=_energyConsumedMicroWatt - In the implementation block
@property (assign,nonatomic) BOOL hasEnergyChargedMicroWatt; 
@property (assign,nonatomic) unsigned energyChargedMicroWatt;                //@synthesize energyChargedMicroWatt=_energyChargedMicroWatt - In the implementation block
@property (nonatomic,retain) NSMutableArray * backlightBuckets;              //@synthesize backlightBuckets=_backlightBuckets - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setAppInfos:(id)arg1 ;
-(void)setDataUsageInfos:(id)arg1 ;
-(void)setCpuLoads:(id)arg1 ;
-(void)setBacklightBuckets:(id)arg1 ;
-(void)addAppInfo:(id)arg1 ;
-(void)addDataUsageInfo:(id)arg1 ;
-(void)addCpuLoad:(id)arg1 ;
-(void)addBacklightBucket:(id)arg1 ;
-(BOOL)hasDispOnDuration;
-(unsigned)dispOnDuration;
-(void)setDispOnDuration:(unsigned)arg1 ;
-(BOOL)hasDispOnCount;
-(unsigned)dispOnCount;
-(void)setDispOnCount:(unsigned)arg1 ;
-(BOOL)hasAvgMicroAmps;
-(unsigned)avgMicroAmps;
-(void)setAvgMicroAmps:(unsigned)arg1 ;
-(BOOL)hasAvgBrightness;
-(unsigned)avgBrightness;
-(void)setAvgBrightness:(unsigned)arg1 ;
-(BOOL)hasMieDuration;
-(unsigned)mieDuration;
-(void)setMieDuration:(unsigned)arg1 ;
-(BOOL)hasMieCount;
-(unsigned)mieCount;
-(void)setMieCount:(unsigned)arg1 ;
-(unsigned)appInfosCount;
-(void)clearAppInfos;
-(id)appInfoAtIndex:(unsigned)arg1 ;
-(BOOL)hasAllAppsCount;
-(unsigned)allAppsCount;
-(void)setAllAppsCount:(unsigned)arg1 ;
-(unsigned)dataUsageInfosCount;
-(void)clearDataUsageInfos;
-(id)dataUsageInfoAtIndex:(unsigned)arg1 ;
-(unsigned)cpuLoadsCount;
-(void)clearCpuLoads;
-(id)cpuLoadAtIndex:(unsigned)arg1 ;
-(BOOL)hasCPUEnergyMicroWatt;
-(unsigned)cPUEnergyMicroWatt;
-(void)setCPUEnergyMicroWatt:(unsigned)arg1 ;
-(BOOL)hasEnergyConsumedMicroWatt;
-(unsigned)energyConsumedMicroWatt;
-(void)setEnergyConsumedMicroWatt:(unsigned)arg1 ;
-(BOOL)hasEnergyChargedMicroWatt;
-(unsigned)energyChargedMicroWatt;
-(void)setEnergyChargedMicroWatt:(unsigned)arg1 ;
-(unsigned)backlightBucketsCount;
-(void)clearBacklightBuckets;
-(id)backlightBucketAtIndex:(unsigned)arg1 ;
-(void)setHasDispOnDuration:(BOOL)arg1 ;
-(void)setHasDispOnCount:(BOOL)arg1 ;
-(void)setHasAvgMicroAmps:(BOOL)arg1 ;
-(void)setHasAvgBrightness:(BOOL)arg1 ;
-(void)setHasMieDuration:(BOOL)arg1 ;
-(void)setHasMieCount:(BOOL)arg1 ;
-(void)setHasAllAppsCount:(BOOL)arg1 ;
-(void)setHasCPUEnergyMicroWatt:(BOOL)arg1 ;
-(void)setHasEnergyConsumedMicroWatt:(BOOL)arg1 ;
-(void)setHasEnergyChargedMicroWatt:(BOOL)arg1 ;
-(id)appInfos;
-(id)dataUsageInfos;
-(id)cpuLoads;
-(id)backlightBuckets;
@end

