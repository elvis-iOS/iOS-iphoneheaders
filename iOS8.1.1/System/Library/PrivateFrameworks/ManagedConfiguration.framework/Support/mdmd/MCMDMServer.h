/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:25 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/mdmd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <mdmd/mdmd-Structs.h>
#import <mdmd/MCJobQueueObserver.h>
#import <mdmd/APSConnectionDelegate.h>
#import <mdmd/NSXPCListenerDelegate.h>
#import <mdmd/MCMDMXPCProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, APSConnection, NSString, NSURL, NSDictionary, NSData, MCTimerContext, MCJobQueue;

@interface MCMDMServer : NSObject <MCJobQueueObserver, APSConnectionDelegate, NSXPCListenerDelegate, MCMDMXPCProtocol> {

	BOOL _memberQueueIsMDMConfigurationValid;
	BOOL _memberQueueUseDevelopmentAPNS;
	BOOL _memberQueueSignMessage;
	BOOL _memberQueuePollRequested;
	BOOL _memberQueueLastResponseWasNotNow;
	BOOL _executionQueueIsCheckinInProgress;
	int _memberQueueAccessRights;
	int _memberQueuePowerAssertionAssertedNotificationToken;
	int _memberQueuePowerAssertionDeassertedNotificationToken;
	int _eventQueueBusyCount;
	NSObject*<OS_dispatch_queue> _memberQueue;
	APSConnection* _memberQueueDevAPSConnection;
	APSConnection* _memberQueueProdAPSConnection;
	NSString* _memberQueueManagingProfileIdentifier;
	SecIdentityRef _memberQueueIdentity;
	NSString* _memberQueueTopic;
	NSURL* _memberQueueServerURL;
	NSURL* _memberQueueCheckInURL;
	NSDictionary* _memberQueueOrganizationInfo;
	NSDictionary* _memberQueueMDMOptions;
	NSString* _memberQueuePushMagic;
	NSData* _memberQueuePushToken;
	MCTimerContext* _memberQueueTimerContext;
	NSString* _memberQueueCommandUUID;
	MCJobQueue* _jobQueue;
	/*^block*/id _executionQueuePushTokenWaitContinuationBlock;

}

@property (nonatomic,readonly) NSURL * serverURL; 
@property (nonatomic,copy) NSDictionary * organizationInfo; 
@property (nonatomic,readonly) BOOL lastResponseWasNotNow; 
@property (getter=isTokenUpdateScheduled,nonatomic,readonly) BOOL tokenUpdateScheduled; 
@property (nonatomic,copy) NSDictionary * MDMOptions; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> memberQueue;                               //@synthesize memberQueue=_memberQueue - In the implementation block
@property (nonatomic,retain) APSConnection * memberQueueDevAPSConnection;                            //@synthesize memberQueueDevAPSConnection=_memberQueueDevAPSConnection - In the implementation block
@property (nonatomic,retain) APSConnection * memberQueueProdAPSConnection;                           //@synthesize memberQueueProdAPSConnection=_memberQueueProdAPSConnection - In the implementation block
@property (assign,nonatomic) BOOL memberQueueIsMDMConfigurationValid;                                //@synthesize memberQueueIsMDMConfigurationValid=_memberQueueIsMDMConfigurationValid - In the implementation block
@property (nonatomic,retain) NSString * memberQueueManagingProfileIdentifier;                        //@synthesize memberQueueManagingProfileIdentifier=_memberQueueManagingProfileIdentifier - In the implementation block
@property (assign,nonatomic) SecIdentityRef memberQueueIdentity;                                     //@synthesize memberQueueIdentity=_memberQueueIdentity - In the implementation block
@property (nonatomic,retain) NSString * memberQueueTopic;                                            //@synthesize memberQueueTopic=_memberQueueTopic - In the implementation block
@property (nonatomic,retain) NSURL * memberQueueServerURL;                                           //@synthesize memberQueueServerURL=_memberQueueServerURL - In the implementation block
@property (nonatomic,retain) NSURL * memberQueueCheckInURL;                                          //@synthesize memberQueueCheckInURL=_memberQueueCheckInURL - In the implementation block
@property (nonatomic,retain) NSDictionary * memberQueueOrganizationInfo;                             //@synthesize memberQueueOrganizationInfo=_memberQueueOrganizationInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * memberQueueMDMOptions;                                   //@synthesize memberQueueMDMOptions=_memberQueueMDMOptions - In the implementation block
@property (assign,nonatomic) int memberQueueAccessRights;                                            //@synthesize memberQueueAccessRights=_memberQueueAccessRights - In the implementation block
@property (assign,nonatomic) BOOL memberQueueUseDevelopmentAPNS;                                     //@synthesize memberQueueUseDevelopmentAPNS=_memberQueueUseDevelopmentAPNS - In the implementation block
@property (nonatomic,retain) NSString * memberQueuePushMagic;                                        //@synthesize memberQueuePushMagic=_memberQueuePushMagic - In the implementation block
@property (assign,nonatomic) BOOL memberQueueSignMessage;                                            //@synthesize memberQueueSignMessage=_memberQueueSignMessage - In the implementation block
@property (nonatomic,retain) NSData * memberQueuePushToken;                                          //@synthesize memberQueuePushToken=_memberQueuePushToken - In the implementation block
@property (assign,nonatomic) BOOL memberQueuePollRequested;                                          //@synthesize memberQueuePollRequested=_memberQueuePollRequested - In the implementation block
@property (nonatomic,retain) MCTimerContext * memberQueueTimerContext;                               //@synthesize memberQueueTimerContext=_memberQueueTimerContext - In the implementation block
@property (assign,nonatomic) int memberQueuePowerAssertionAssertedNotificationToken;                 //@synthesize memberQueuePowerAssertionAssertedNotificationToken=_memberQueuePowerAssertionAssertedNotificationToken - In the implementation block
@property (assign,nonatomic) int memberQueuePowerAssertionDeassertedNotificationToken;               //@synthesize memberQueuePowerAssertionDeassertedNotificationToken=_memberQueuePowerAssertionDeassertedNotificationToken - In the implementation block
@property (nonatomic,retain) NSString * memberQueueCommandUUID;                                      //@synthesize memberQueueCommandUUID=_memberQueueCommandUUID - In the implementation block
@property (nonatomic,retain) MCJobQueue * jobQueue;                                                  //@synthesize jobQueue=_jobQueue - In the implementation block
@property (nonatomic,retain) NSDictionary * memberQueueCachedResponse; 
@property (assign,nonatomic) BOOL memberQueueLastResponseWasNotNow;                                  //@synthesize memberQueueLastResponseWasNotNow=_memberQueueLastResponseWasNotNow - In the implementation block
@property (nonatomic,copy) id executionQueuePushTokenWaitContinuationBlock;                          //@synthesize executionQueuePushTokenWaitContinuationBlock=_executionQueuePushTokenWaitContinuationBlock - In the implementation block
@property (assign,nonatomic) BOOL executionQueueIsCheckinInProgress;                                 //@synthesize executionQueueIsCheckinInProgress=_executionQueueIsCheckinInProgress - In the implementation block
@property (assign,nonatomic) int eventQueueBusyCount;                                                //@synthesize eventQueueBusyCount=_eventQueueBusyCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServer;
-(BOOL)startOutError:(id*)arg1 ;
-(BOOL)lastResponseWasNotNow;
-(BOOL)isTokenUpdateScheduled;
-(SecIdentityRef)memberQueueIdentity;
-(NSURL *)memberQueueServerURL;
-(void)setMemberQueueServerURL:(NSURL *)arg1 ;
-(NSDictionary *)memberQueueOrganizationInfo;
-(void)setMemberQueueOrganizationInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)memberQueueMDMOptions;
-(void)setMemberQueueMDMOptions:(NSDictionary *)arg1 ;
-(BOOL)memberQueueLastResponseWasNotNow;
-(int)tokenUpdateCount;
-(void)setMemberQueueDevAPSConnection:(APSConnection *)arg1 ;
-(void)setMemberQueueProdAPSConnection:(APSConnection *)arg1 ;
-(void)setMemberQueueIsMDMConfigurationValid:(BOOL)arg1 ;
-(void)setMemberQueueIdentity:(SecIdentityRef)arg1 ;
-(void)setMemberQueueCheckInURL:(NSURL *)arg1 ;
-(void)setMemberQueueManagingProfileIdentifier:(NSString *)arg1 ;
-(void)setMemberQueueAccessRights:(int)arg1 ;
-(void)setMemberQueueUseDevelopmentAPNS:(BOOL)arg1 ;
-(void)setMemberQueuePushMagic:(NSString *)arg1 ;
-(void)memberQueueForgetCurrentConfiguration;
-(NSString *)memberQueueManagingProfileIdentifier;
-(void)setMemberQueueTopic:(NSString *)arg1 ;
-(NSString *)memberQueueTopic;
-(void)setMemberQueueSignMessage:(BOOL)arg1 ;
-(NSString *)memberQueuePushMagic;
-(APSConnection *)memberQueueDevAPSConnection;
-(APSConnection *)memberQueueProdAPSConnection;
-(BOOL)memberQueueUseDevelopmentAPNS;
-(void)setMemberQueuePushToken:(NSData *)arg1 ;
-(NSData *)memberQueuePushToken;
-(void)pushTokenCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)readConfigurationOutError:(id*)arg1 ;
-(void)executionQueueCheckForOutstandingActivityIsReachabilityEvent:(BOOL)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_networkReachabilityDidChange;
-(void)_keybagStateDidChange;
-(void)buddyDidFinish;
-(void)schedulePollingServerForCommandWithAssertion:(id)arg1 ;
-(BOOL)memberQueueIsMDMConfigurationValid;
-(void)_executionQueueCheckForOutstandingActivityIsReachabilityEvent:(BOOL)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)executionQueueTellServerAboutDeviceTokenWithAssertion:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)executionQueuePushTokenWaitContinuationBlock;
-(void)setExecutionQueuePushTokenWaitContinuationBlock:(id)arg1 ;
-(id)memberQueueLastPushTokenHash;
-(void)setMemberQueueLastPushTokenHash:(id)arg1 ;
-(void)memberQueueIncrementTokenUpdateRequestCount;
-(void)executionQueuePollServerForCommandWithAssertion:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setTokenUpdateRequestCountToZero;
-(BOOL)executionQueueIsCheckinInProgress;
-(void)setExecutionQueueIsCheckinInProgress:(BOOL)arg1 ;
-(int)memberQueueAccessRights;
-(NSURL *)memberQueueCheckInURL;
-(BOOL)memberQueueSignMessage;
-(void)executionQueueRemoveMDMProfileWithAssertion:(id)arg1 ;
-(id)unauthorizedByServerError;
-(void)memberQueueDecrementTokenUpdateRequestCount;
-(int)memberQueueTokenUpdateCount;
-(void)sendResponse:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setMemberQueuePollRequested:(BOOL)arg1 ;
-(id)_idleResponse;
-(void)setMemberQueueLastResponseWasNotNow:(BOOL)arg1 ;
-(void)setMemberQueueCachedResponse:(NSDictionary *)arg1 ;
-(void)executionQueueHandleRequest:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(NSString *)memberQueueCommandUUID;
-(void)setMemberQueueCommandUUID:(NSString *)arg1 ;
-(BOOL)memberQueueHasOutstandingActivity;
-(NSDictionary *)memberQueueCachedResponse;
-(void)setMemberQueueTokenUpdateRequestCount:(int)arg1 ;
-(BOOL)memberQueuePollRequested;
-(MCTimerContext *)memberQueueTimerContext;
-(void)setMemberQueueTimerContext:(MCTimerContext *)arg1 ;
-(int)memberQueuePowerAssertionAssertedNotificationToken;
-(void)setMemberQueuePowerAssertionAssertedNotificationToken:(int)arg1 ;
-(int)memberQueuePowerAssertionDeassertedNotificationToken;
-(void)setMemberQueuePowerAssertionDeassertedNotificationToken:(int)arg1 ;
-(int)eventQueueBusyCount;
-(void)setEventQueueBusyCount:(int)arg1 ;
-(id)cachedResponse;
-(BOOL)deviceIsLocked;
-(void)dealloc;
-(id)init;
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setServerURL:(NSURL *)arg1 ;
-(NSURL *)serverURL;
-(id)organizationName;
-(id)serverName;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(void)performOutstandingActivities;
-(BOOL)hasOutstandingActivity;
-(id)responseFromBasicResponse:(id)arg1 ;
-(id)sendResponseSynchronously:(id)arg1 outStatusCode:(long long*)arg2 outError:(id*)arg3 ;
-(NSDictionary *)organizationInfo;
-(NSDictionary *)MDMOptions;
-(void)setOrganizationInfo:(NSDictionary *)arg1 ;
-(void)setMDMOptions:(NSDictionary *)arg1 ;
-(void)notifyNewConfigurationWithCompletion:(/*^block*/id)arg1 ;
-(void)scheduleTokenUpdateWithCompletion:(/*^block*/id)arg1 ;
-(void)simulatePushWithCompletion:(/*^block*/id)arg1 ;
-(void)retryNotNowWithCompletion:(/*^block*/id)arg1 ;
-(void)uprootMDMWithCompletion:(/*^block*/id)arg1 ;
-(MCJobQueue *)jobQueue;
-(void)setJobQueue:(MCJobQueue *)arg1 ;
-(void)setCachedResponse:(id)arg1 ;
@end

