/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSMutableArray, NSString;

@interface VMAccount : NSObject {

	NSMutableDictionary* _cache;
	NSObject<OS_dispatch_queue>* _cacheQueue;
	NSMutableArray* _voicemailSummaries[256];

}

@property (readonly) NSString * identifier; 
-(id)identifier;
-(id)initForLegacyVisualVoicemail;
-(void)_forceUpdateCache;
-(id)voicemailWithIdentifier:(long long)arg1 creating:(bool)arg2 ;
-(bool)isSubscribed;
-(void)dealloc;
-(id)voicemailWithIdentifier:(long long)arg1 ;
-(unsigned)unreadCount;
-(unsigned)capabilities;
-(bool)mailboxRequiresSetup;
-(void)setProvisionalPassword:(id)arg1 ;
-(int)mailboxUsage;
-(bool)isOnline;
-(void)synchronize:(bool)arg1 ;
-(bool)isMessageWaiting;
-(void)displayPasswordRequestIfNecessary;
-(unsigned)trashedCount;
-(void)updateLoggingSettings;
-(bool)isOfflineDueToRoaming;
-(void)clearActivationError;
-(id)provisionalPassword;
-(void)handlePasswordRequestCancellation;
-(void)handlePasswordNotificationResponse:(id)arg1 ;
-(int)maximumGreetingDuration;
-(int)minimumPasswordLength;
-(int)maximumPasswordLength;
-(bool)passwordChangeRequiresEnteringOldPassword;
-(long long)mailboxGreetingType;
-(bool)taskOfTypeExists:(long long)arg1 ;
-(bool)headerChangesPending;
-(bool)synchronizationPending;
-(bool)greetingFetchExistsProgressiveLoadInProgress:(bool*)arg1 ;
-(void)changePassword:(id)arg1 fromPassword:(id)arg2 ;
-(void)retrieveGreeting;
-(bool)greetingAvailable;
-(void)setGreetingType:(long long)arg1 withData:(id)arg2 duration:(unsigned)arg3 ;
-(bool)willBroadcastNotificationName:(id)arg1 userInfo:(id)arg2 ;
-(void)_updateCache;
-(id)allVoicemailsWithFlags:(unsigned)arg1 withoutFlags:(unsigned)arg2 sinceIdentifier:(long long)arg3 ;
-(id)_voicemailSummariesBucketsWithFlags:(unsigned)arg1 withoutFlags:(unsigned)arg2 ;
-(unsigned)_lockedCountOfVoicemailsWithFlags:(unsigned)arg1 withoutFlags:(unsigned)arg2 ;
-(id)_bucketSummary;
-(void)_updateVoicemailFlagsIndexFromCache;
-(void)_updateCacheDoWork;
-(void)progressiveDataLengthsForVoicemail:(id)arg1 expected:(unsigned*)arg2 current:(unsigned*)arg3 ;
-(bool)dataForVoicemailPending:(id)arg1 progressiveLoadInProgress:(bool*)arg2 ;
-(void)retrieveDataForVoicemail:(id)arg1 ;
-(void)moveVoicemailToTrash:(id)arg1 ;
-(void)moveVoicemailFromTrash:(id)arg1 ;
-(id)allVoicemailsWithFlags:(unsigned)arg1 withoutFlags:(unsigned)arg2 ;
-(unsigned)countOfVoicemailsWithFlags:(unsigned)arg1 withoutFlags:(unsigned)arg2 ;
-(long long)identifierOfLastInsert;
-(id)greetingPath;
-(void)handleVoicemailFlagsChanged:(id)arg1 ;
-(void)handleSignificantChange:(id)arg1 ;
-(void)handleStoreChanged:(id)arg1 ;
@end

