/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:49 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NFHardwareControllerInfo : NSObject {

	unsigned long long _siliconVersion;
	unsigned long long _ROMVersion;
	unsigned long long _firmwareVersion;
	unsigned long long _firmwareRevision;
	unsigned long long _middlewareVersion;

}

@property (nonatomic,readonly) unsigned long long siliconVersion;                 //@synthesize siliconVersion=_siliconVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long ROMVersion;                     //@synthesize ROMVersion=_ROMVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long firmwareVersion;                //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long firmwareRevision;               //@synthesize firmwareRevision=_firmwareRevision - In the implementation block
@property (nonatomic,readonly) unsigned long long middlewareVersion;              //@synthesize middlewareVersion=_middlewareVersion - In the implementation block
-(unsigned long long)firmwareRevision;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)siliconVersion;
-(unsigned long long)ROMVersion;
-(unsigned long long)firmwareVersion;
-(unsigned long long)middlewareVersion;
@end
