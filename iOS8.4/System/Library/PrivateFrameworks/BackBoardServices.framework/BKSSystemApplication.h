/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:51 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BackBoardServices/BKSSystemApplicationClientDelegate.h>

@protocol OS_dispatch_queue, BKSSystemApplicationDelegate;
@class NSObject, BKSSystemApplicationClient, NSString;

@interface BKSSystemApplication : NSObject <BKSSystemApplicationClientDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	BKSSystemApplicationClient* _client;
	id<BKSSystemApplicationDelegate> _delegate;

}

@property (assign,nonatomic) id<BKSSystemApplicationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)restart;
-(void)dealloc;
-(void)setDelegate:(id<BKSSystemApplicationDelegate>)arg1 ;
-(id<BKSSystemApplicationDelegate>)delegate;
-(id)initWithQueue:(id)arg1 ;
-(void)sendActions:(id)arg1 ;
-(void)start;
-(BOOL)clientIsAliveForWatchdog:(id)arg1 ;
@end

