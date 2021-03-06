/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CertUI.framework/certui_relay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableDictionary, NSTimer;

@interface CertUIRelay : NSObject {

	NSMutableDictionary* _promptsForDigest;
	BOOL _waitingOnPrompt;
	long long _outstandingRequestCount;
	NSTimer* _killTimer;

}
-(id)_relayCenter;
-(void)_shutdown;
-(void)_killTimerFired;
-(void)_registerReply;
-(void)_showNextPrompt;
-(void)_registerNewRequest;
-(id)_uniqueDigest;
-(void)_trustInfoMessageReceived:(id)arg1 userInfo:(id)arg2 ;
-(void)_centerDiedWithNotification:(id)arg1 ;
-(id)init;
@end

