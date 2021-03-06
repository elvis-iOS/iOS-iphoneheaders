/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:05 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/Support/nebulad
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <nebulad/NSXPCListenerDelegate.h>
#import <nebulad/CAMNebulaDaemonConnectionManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSObject, NSMutableArray, NSString;

@interface CAMNebulaDaemon : NSObject <NSXPCListenerDelegate, CAMNebulaDaemonConnectionManagerDelegate> {

	NSXPCListener* __listener;
	NSObject*<OS_dispatch_queue> __queue;
	NSMutableArray* __connections;

}

@property (nonatomic,readonly) NSXPCListener * _listener;                        //@synthesize _listener=__listener - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _queue;              //@synthesize _queue=__queue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _connections;                    //@synthesize _connections=__connections - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)daemonConnectionManagerHasBeenDisconnected:(id)arg1 ;
-(id)allowedProtocolForClientAccess:(id)arg1 ;
-(void)performPendingWorkAfterDelay:(double)arg1 ;
-(NSXPCListener *)_listener;
-(id)init;
-(NSObject*<OS_dispatch_queue>)_queue;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSMutableArray *)_connections;
@end

