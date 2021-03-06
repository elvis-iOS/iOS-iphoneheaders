/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <sharingd/SDNetworkBrowserDelegate.h>
#import <sharingd/SDNetworkOperationDelegate.h>

@protocol OS_xpc_object;
@class NSObject, NSMutableSet, NSMutableDictionary, SDAirDropReceiveManager;

@interface SharingDaemon : NSObject <SDNetworkBrowserDelegate, SDNetworkOperationDelegate> {

	NSObject<OS_xpc_object>* _listener;
	NSMutableSet* _activeObjects;
	NSMutableDictionary* _exportedOperations;
	SDAirDropReceiveManager* _airdropManager;

}
+(id)sharedDaemon;
-(void)networkOperation:(id)arg1 event:(long)arg2 withResults:(id)arg3 ;
-(void)networkBrowser:(id)arg1 nodesChangedForParent:(SFNodeRef)arg2 protocol:(id)arg3 error:(int)arg4 ;
-(id)xpcArrayForSFNodeArray:(id)arg1 ;
-(id)xpcObjectForSFOperationResults:(id)arg1 ;
-(id)stringFromXPCObject:(id)arg1 ;
-(void)handleBrowserMessage:(id)arg1 forConnection:(id)arg2 ;
-(void)handleOperationMessage:(id)arg1 forConnection:(id)arg2 ;
-(void)handleNewConnection:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)start;
-(void).cxx_destruct;
-(void)stop;
@end

