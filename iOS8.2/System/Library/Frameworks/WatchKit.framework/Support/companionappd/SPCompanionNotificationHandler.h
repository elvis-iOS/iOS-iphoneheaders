/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:24:07 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/WatchKit.framework/Support/companionappd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, BLTPingSubscriber;

@interface SPCompanionNotificationHandler : NSObject {

	NSMutableDictionary* _serializedContextsByNotificationID;
	NSObject*<OS_dispatch_queue> _notificationContextsAccessQueue;
	BLTPingSubscriber* _pingSubscriber;
	char _hasSubscribedWithMachServiceName;
	char _contextSaveIsPending;

}
+(id)sharedInstance;
-(id)contextForNotificationID:(id)arg1 ;
-(void)updateSubscriptionsWithGizmoPersistentDomain:(id)arg1 ;
-(void)_saveNotificationContextsSoon;
-(void)_startNotificationExpirationTimerWithDelay:(double)arg1 ;
-(void)_removeExpiredNotificationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_startNotificationExpirationActivity;
-(id)notificationContextsPlistURL;
-(void)storeNotificationContext:(id)arg1 forNotificationID:(id)arg2 ;
-(void)_storeBulletin:(id)arg1 ;
-(id)_restoredNotificationContexts;
-(void)_startExpiringNotificationsWithDelay:(double)arg1 ;
-(id)init;
@end
