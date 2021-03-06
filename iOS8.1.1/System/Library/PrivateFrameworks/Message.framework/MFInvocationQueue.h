/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:34 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Message/Message-Structs.h>
@class NSConditionLock, NSMutableArray;

@interface MFInvocationQueue : NSObject {

	NSConditionLock* _lock;
	NSMutableArray* _items;
	unsigned long long _numThreads;
	unsigned long long _maxThreads;
	int _threadPriorityTrigger;
	double _threadRecycleTimeout;
	CFSetRef _lowPriorityThreads;
	BOOL _isForeground;

}

@property (assign,nonatomic) unsigned long long maxThreadCount; 
@property (assign,nonatomic) int threadPriorityTrigger;                         //@synthesize threadPriorityTrigger=_threadPriorityTrigger - In the implementation block
@property (assign,nonatomic) double threadRecycleTimeout;                       //@synthesize threadRecycleTimeout=_threadRecycleTimeout - In the implementation block
@property (nonatomic,readonly) unsigned long long invocationCount; 
@property (nonatomic,readonly) unsigned long long threadCount;                  //@synthesize numThreads=_numThreads - In the implementation block
+(id)sharedInvocationQueue;
+(unsigned long long)totalInvocationCount;
+(void)flushAllInvocationQueues;
-(void)removeAllItems;
-(void)dealloc;
-(id)init;
-(void)applicationWillSuspend;
-(void)setMaxThreadCount:(unsigned long long)arg1 ;
-(void)addInvocation:(id)arg1 ;
-(id)copyDiagnosticInformation;
-(void)setThreadRecycleTimeout:(double)arg1 ;
-(void)applicationWillResume;
-(void)didCancel:(id)arg1 ;
-(id)initWithMaxThreadCount:(unsigned long long)arg1 ;
-(void)_drainQueue:(id)arg1 ;
-(void)_processInvocation:(id)arg1 ;
-(void)_adjustThreadPrioritiesIsForeground:(BOOL)arg1 ;
-(unsigned long long)maxThreadCount;
-(unsigned long long)invocationCount;
-(unsigned long long)threadCount;
-(int)threadPriorityTrigger;
-(void)setThreadPriorityTrigger:(int)arg1 ;
-(double)threadRecycleTimeout;
@end

