/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:08 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface IDSDMessageStore : NSObject {

	NSObject*<OS_dispatch_queue> _ivarQueue;
	BOOL _databaseOpen;
	NSObject*<OS_dispatch_source> _databaseCloseTimer;
	double _databaseLastUpdateTime;

}
+(id)sharedInstance;
-(void)_performInitialHousekeeping;
-(void)deleteIncomingMessageWithGUID:(id)arg1 ;
-(id)_unsentOutgoingMessagesUpToLimit:(unsigned long long)arg1 priority:(long long)arg2 accountUUID:(id)arg3 wantsPayload:(BOOL)arg4 ;
-(void)deleteOutgoingMessageWithGUID:(id)arg1 alternateGUID:(id)arg2 ;
-(void)_clearDatabaseCloseTimerOnIvarQueue;
-(void)__closeDatabaseOnIvarQueue;
-(void)_setDatabaseCloseTimerOnIvarQueue;
-(id)incomingMessagesUpToLimit:(unsigned long long)arg1 ;
-(void)storeIncomingMessage:(id)arg1 forTopic:(id)arg2 fromID:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)unsentNonUrgentAccountUUIDs;
-(id)unsentOutgoingMessagesUpToLimit:(unsigned long long)arg1 priority:(long long)arg2 ;
-(id)unsentOutgoingMessagesUpToLimit:(unsigned long long)arg1 priority:(long long)arg2 wantsPayload:(BOOL)arg3 ;
-(id)unsentNonUrgentMessagesForAccountUUID:(id)arg1 upToLimit:(unsigned long long)arg2 ;
-(void)storeOutgoingMessageWithSendParameters:(id)arg1 guid:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)markOutgoingMessageWithGUID:(id)arg1 asSent:(BOOL)arg2 ;
-(void)markAllOutgoingMessagesAsUnsent;
-(void)dealloc;
-(id)init;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)systemDidEnterMemoryPressure;
-(void)systemDidLeaveMemoryPressure;
-(void)performBlock:(/*^block*/id)arg1 afterDelay:(double)arg2 ;
-(void)closeDatabase;
-(void)openDatabase;
-(void)performBlock:(/*^block*/id)arg1 waitUntilDone:(BOOL)arg2 ;
@end
