/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:53:22 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeKit/HMMessageReceiver.h>
#import <HomeKit/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSString, HMHome, NSUUID, HMMessageDispatcher, NSObject, NSMutableArray, NSSet;

@interface HMActionSet : NSObject <HMMessageReceiver, NSSecureCoding> {

	char _executing;
	NSString* _name;
	HMHome* _home;
	NSUUID* _uuid;
	HMMessageDispatcher* _msgDispatcher;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableArray* _currentActions;

}

@property (nonatomic,copy,readonly) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSSet * actions; 
@property (getter=isExecuting,nonatomic,readonly) char executing;                             //@synthesize executing=_executing - In the implementation block
@property (assign,nonatomic,__weak) HMHome * home;                                            //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                   //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) HMMessageDispatcher * msgDispatcher;                             //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentActions;                                 //@synthesize currentActions=_currentActions - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(char)supportsSecureCoding;
-(id)url;
-(void)_registerNotificationHandlers;
-(void)configure:(id)arg1 uuid:(id)arg2 messageDispatcher:(id)arg3 ;
-(void)updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateAction:(id)arg1 changes:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleActionAddedNotification:(id)arg1 ;
-(void)handleActionRemovedNotification:(id)arg1 ;
-(void)handleActionUpdatedNotification:(id)arg1 ;
-(void)handleActionSetRenamedNotification:(id)arg1 ;
-(id)lookupActionWithInfo:(id)arg1 ;
-(void)addAction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeAction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)name;
-(void)invalidate;
-(NSSet *)actions;
-(NSUUID *)uuid;
-(id)initWithName:(id)arg1 ;
-(char)isExecuting;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HMMessageDispatcher *)msgDispatcher;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(void)setMsgDispatcher:(HMMessageDispatcher *)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(NSMutableArray *)currentActions;
-(void)setCurrentActions:(NSMutableArray *)arg1 ;
-(void)unconfigure;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
@end
