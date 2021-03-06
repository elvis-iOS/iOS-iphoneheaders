/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <CoreFoundation/NSData.h>

@protocol OS_xpc_object;
@class NSObject;

@interface SSXPCData : NSData {

	NSObject<OS_xpc_object>* _xpcData;

}

@property (nonatomic,readonly) NSObject<OS_xpc_object> * xpcData;              //@synthesize xpcData=_xpcData - In the implementation block
-(void)dealloc;
-(unsigned)length;
-(const void*)bytes;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)initWithXPCData:(id)arg1 ;
-(id)xpcData;
@end

