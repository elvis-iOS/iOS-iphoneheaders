/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:28 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/mobile_recert
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSMutableURLRequest, NSURLConnection, NSMutableData;

@interface MobileActivationNSURLConnection : NSObject {

	int _state;
	NSURL* _activationUrl;
	NSMutableURLRequest* _currentRequest;
	NSURLConnection* _currentConnection;
	NSMutableData* _currentResponseData;
	bool _performingRecertification;

}
-(void)startReCert;
-(void)startActivating;
-(id)initUsingURL:(id)arg1 andOptions:(id)arg2 ;
-(id)activateDevice;
-(id)reCertDevice;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
-(void)dealloc;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)stringForState:(int)arg1 ;
-(BOOL)connectionShouldUseCredentialStorage:(id)arg1 ;
-(BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2 ;
@end
