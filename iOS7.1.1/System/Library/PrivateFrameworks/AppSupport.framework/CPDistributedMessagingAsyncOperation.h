/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class CPDistributedMessagingCenter, NSString, NSData, NSThread, NSDictionary, NSError;

@interface CPDistributedMessagingAsyncOperation : NSOperation {

	CPDistributedMessagingCenter* _center;
	NSString* _name;
	NSData* _userInfoData;
	NSString* _oolKey;
	NSData* _oolData;
	id _target;
	SEL _selector;
	void* _context;
	bool _makeServer;
	NSThread* _calloutThread;
	NSDictionary* _reply;
	NSError* _error;

}
-(void)dealloc;
-(void)main;
-(id)initWithCenter:(id)arg1 messageName:(id)arg2 userInfoData:(id)arg3 oolKey:(id)arg4 oolData:(id)arg5 target:(id)arg6 selector:(SEL)arg7 context:(void*)arg8 makeServer:(bool)arg9 ;
-(void)_releaseSendingData;
-(void)_performCallout;
@end

