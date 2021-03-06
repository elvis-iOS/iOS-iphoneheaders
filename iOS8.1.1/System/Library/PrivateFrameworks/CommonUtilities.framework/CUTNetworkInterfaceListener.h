/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:08 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CommonUtilities/CommonUtilities-Structs.h>
@class NSHashTable, NSObject, NSSet;

@interface CUTNetworkInterfaceListener : NSObject {

	void* _dynamicStore;
	NSHashTable* _delegateMap;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	int _wifiState;
	int _cellState;
	NSSet* _IPv6Addresses;
	NSSet* _IPv4Addresses;

}

@property (nonatomic,readonly) int wifiState;                             //@synthesize wifiState=_wifiState - In the implementation block
@property (nonatomic,readonly) int cellState;                             //@synthesize cellState=_cellState - In the implementation block
@property (nonatomic,retain,readonly) NSSet * IPv6Addresses;              //@synthesize IPv6Addresses=_IPv6Addresses - In the implementation block
@property (nonatomic,retain,readonly) NSSet * IPv4Addresses;              //@synthesize IPv4Addresses=_IPv4Addresses - In the implementation block
+(id)sharedInstance;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(id)retain;
-(void)dealloc;
-(id)init;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_notifyDelegatesOfAddressChange:(id)arg1 isIPv6:(BOOL)arg2 ;
-(void)_notifyDelegatesOfCellChange:(int)arg1 ;
-(void)_notifyDelegatesOfWifiChange:(int)arg1 ;
-(void)_handleNetworkChange:(id)arg1 ;
-(int)wifiState;
-(NSSet *)IPv6Addresses;
-(NSSet *)IPv4Addresses;
-(int)cellState;
-(oneway void)release;
@end

