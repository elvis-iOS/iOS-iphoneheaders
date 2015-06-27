/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:44:14 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FBUIApplicationServiceDelegate, OS_dispatch_queue;
@class NSObject;

@interface FBUIApplicationService : NSObject {

	id<FBUIApplicationServiceDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic) id<FBUIApplicationServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(void)setDelegate:(id<FBUIApplicationServiceDelegate>)arg1 ;
-(id<FBUIApplicationServiceDelegate>)delegate;
-(id)initWithQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)handleApplication:(id)arg1 setBadgeValue:(id)arg2 ;
-(void)handleApplication:(id)arg1 getBadgeValueWithCompletion:(/*^block*/id)arg2 ;
-(void)handleApplicationProcess:(id)arg1 requestBrightness:(float)arg2 completion:(/*^block*/id)arg3 ;
-(char)handleApplicationProcess:(id)arg1 setNextWakeInterval:(double)arg2 ;
@end
