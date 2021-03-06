/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:07:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/imagent.app/imagent
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface IMDaemonMIGInterface : NSObject {

	NSObject<OS_xpc_object>* _server;
	int _notifyToken;
	id _delegate;
	BOOL _shuttingDown;

}

@property (assign) <IMDaemonMIGInterfaceDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(void)acceptIncomingGrantRequests;
-(void)denyIncomingGrantRequests;
-(void)__setupServer;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
@end

