/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:14 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class HAPAccessoryServerBTLE;

@interface HAPDiscoveredBTLEAccessoryServerTuple : NSObject {

	HAPAccessoryServerBTLE* _accessoryServer;
	double _lastSeen;

}

@property (nonatomic,retain) HAPAccessoryServerBTLE * accessoryServer;              //@synthesize accessoryServer=_accessoryServer - In the implementation block
@property (assign,nonatomic) double lastSeen;                                       //@synthesize lastSeen=_lastSeen - In the implementation block
+(id)discoveredAccessoryServerTupleWithAccessoryServer:(id)arg1 ;
-(void)setAccessoryServer:(HAPAccessoryServerBTLE *)arg1 ;
-(void)setLastSeen:(double)arg1 ;
-(HAPAccessoryServerBTLE *)accessoryServer;
-(double)lastSeen;
@end
