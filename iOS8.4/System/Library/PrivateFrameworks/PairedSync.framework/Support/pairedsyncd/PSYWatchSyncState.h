/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/Support/pairedsyncd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface PSYWatchSyncState : NSObject {

	NSString* _activityLabel;
	long long _globalProgress;
	unsigned long long _syncProgressState;
	unsigned long long _version;

}

@property (nonatomic,readonly) NSString * activityLabel;                          //@synthesize activityLabel=_activityLabel - In the implementation block
@property (nonatomic,readonly) long long globalProgress;                          //@synthesize globalProgress=_globalProgress - In the implementation block
@property (nonatomic,readonly) unsigned long long syncProgressState;              //@synthesize syncProgressState=_syncProgressState - In the implementation block
@property (nonatomic,readonly) unsigned long long version;                        //@synthesize version=_version - In the implementation block
-(unsigned long long)syncProgressState;
-(long long)globalProgress;
-(id)initWithActivityLabel:(id)arg1 globalProgress:(long long)arg2 syncProgressState:(unsigned long long)arg3 ;
-(id)plistRepresentation;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)version;
-(NSString *)activityLabel;
-(id)initWithPlistRepresentation:(id)arg1 ;
@end

