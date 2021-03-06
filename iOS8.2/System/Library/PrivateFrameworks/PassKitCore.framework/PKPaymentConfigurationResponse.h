/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:43 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSData, NSString;

@interface PKPaymentConfigurationResponse : PKPaymentWebServiceResponse {

	NSData* _data;
	NSData* _signature;
	NSString* _version;

}

@property (nonatomic,readonly) NSData * data;                   //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSData * signature;              //@synthesize signature=_signature - In the implementation block
@property (nonatomic,readonly) NSString * version;              //@synthesize version=_version - In the implementation block
-(void)dealloc;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(NSString *)version;
-(NSData *)signature;
@end

