/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/familycircled
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <familycircled/FAFamilyCircleOperation.h>

@class NSString, NSData;

@interface FARegisterPushTokenOperation : FAFamilyCircleOperation {

	NSString* _appleIDorDSID;
	NSString* _passwordOrAuthToken;
	NSData* _pushToken;
	/*^block*/id _registerTokenCompletionHandler;

}

@property (readonly) NSData * pushToken;                         //@synthesize pushToken=_pushToken - In the implementation block
@property (copy) id registerTokenCompletionHandler;              //@synthesize registerTokenCompletionHandler=_registerTokenCompletionHandler - In the implementation block
-(void)didReceivePropertyListResponse:(id)arg1 ;
-(id)initWithUsername:(id)arg1 password:(id)arg2 pushToken:(id)arg3 ;
-(void)setRegisterTokenCompletionHandler:(id)arg1 ;
-(id)pushTokenString;
-(id)registerTokenCompletionHandler;
-(NSData *)pushToken;
-(id)urlRequest;
-(void)didFailWithError:(id)arg1 ;
@end

