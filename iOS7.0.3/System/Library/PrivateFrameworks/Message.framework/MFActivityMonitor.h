/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MIME/MFPriorityDesignator.h>

@class NSThread, NSString, MFInvocationQueue, MFError, MFMailboxUid;

@interface MFActivityMonitor : MFPriorityDesignator {

	NSThread* _runningThread;
	NSString* _taskName;
	NSString* _displayName;
	NSString* _statusMessage;
	NSString* _descriptionString;
	MFInvocationQueue* _ourQueue;
	double _percentDone;
	unsigned _key : 13;
	unsigned _canCancel : 1;
	unsigned _shouldCancel : 1;
	unsigned _isActive : 1;
	unsigned _changeCount : 8;
	id _delegate;
	id _target;
	MFError* _error;
	unsigned _expectedLength;
	unsigned _maxCount;
	unsigned _currentCount;
	double _currentItemPercentDone;
	unsigned _supportsPerItemProgress : 1;
	MFMailboxUid* _mailbox;
	double _lastTime;
	double _startTime;
	unsigned _gotNewMessagesState;

}

@property (retain) MFMailboxUid * mailbox;              //@synthesize mailbox=_mailbox - In the implementation block
+(id)currentMonitor;
+(void)destroyMonitor;
-(void)setMaxCount:(unsigned)arg1 ;
-(void)setError:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)description;
-(BOOL)isActive;
-(void)cancel;
-(int)changeCount;
-(void)reset;
-(id)displayName;
-(void)setMailbox:(id)arg1 ;
-(BOOL)shouldCancel;
-(BOOL)canBeCancelled;
-(void)setCanBeCancelled:(BOOL)arg1 ;
-(void)setShouldCancel:(BOOL)arg1 ;
-(void)setPercentDone:(double)arg1 ;
-(id)mailbox;
-(void)setExpectedLength:(unsigned)arg1 ;
-(unsigned)expectedLength;
-(void)setGotNewMessagesState:(unsigned)arg1 ;
-(void)postActivityStarting;
-(void)postActivityFinished:(id)arg1 ;
-(id)userInfoForNotification;
-(void)postDidChangeWithUserInfo:(id)arg1 ;
-(id)_ntsThrottledUserInfoDict;
-(void)setSupportsPerItemProgress:(BOOL)arg1 ;
-(double)percentDone;
-(void)setStatusMessage:(id)arg1 percentDone:(double)arg2 ;
-(void)setStatusMessage:(id)arg1 percentDone:(double)arg2 withKey:(int)arg3 ;
-(void)setPercentDone:(double)arg1 withKey:(int)arg2 ;
-(void)setDisplayName:(id)arg1 maxCount:(unsigned)arg2 ;
-(void)addActivityTarget:(id)arg1 ;
-(BOOL)_lockedAddActivityTarget:(id)arg1 ;
-(void)removeActivityTarget:(id)arg1 ;
-(id)primaryTarget;
-(void)setPrimaryTarget:(id)arg1 ;
-(void)cancelMessage;
-(void)_didChange;
-(void)setStatusMessage:(id)arg1 withKey:(int)arg2 ;
-(void)startActivity;
-(void)finishedActivity:(id)arg1 ;
-(void)notifyConnectionEstablished;
-(void)setCurrentCount:(unsigned)arg1 ;
-(void)setPercentDoneOfCurrentItem:(double)arg1 ;
-(unsigned)gotNewMessagesState;
-(void)setStatusMessage:(id)arg1 ;
-(id)statusMessage;
-(id)taskName;
-(void)setTaskName:(id)arg1 ;
-(void)setActivityTarget:(id)arg1 ;
-(id)activityTarget;
-(void)addActivityTargets:(id)arg1 ;
-(id)activityTargets;
-(void)setInvocationQueue:(id)arg1 ;
-(int)acquireExclusiveAccessKey;
-(void)relinquishExclusiveAccessKey:(int)arg1 ;
-(void)setDisplayName:(id)arg1 ;
-(id)error;
@end
