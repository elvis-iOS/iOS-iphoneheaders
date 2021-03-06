/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:14:53 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/teslad
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCoreServices/NSXPCListenerDelegate.h>

@class NSTimer, NSDate;

@interface MCTeslaGatekeeper : NSObject <NSXPCListenerDelegate> {

	NSTimer* _idleTimer;
	NSDate* _lastConnectionDate;

}

@property (nonatomic,retain) NSTimer * idleTimer;              //@synthesize idleTimer=_idleTimer - In the implementation block
@property (retain) NSDate * lastConnectionDate;                //@synthesize lastConnectionDate=_lastConnectionDate - In the implementation block
+(id)sharedGatekeeper;
-(void)resetIdleTimer;
-(void)setLastConnectionDate:(id)arg1 ;
-(id)lastConnectionDate;
-(void)idleTimerDidFire:(id)arg1 ;
-(id)init;
-(void).cxx_destruct;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setIdleTimer:(id)arg1 ;
-(id)idleTimer;
@end

