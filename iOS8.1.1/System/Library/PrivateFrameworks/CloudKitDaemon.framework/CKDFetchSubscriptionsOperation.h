/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:02 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray;

@interface CKDFetchSubscriptionsOperation : CKDDatabaseOperation {

	BOOL _isFetchAllSubscriptionsOperation;
	NSArray* _subscriptions;
	/*^block*/id _subscriptionFetchedProgressBlock;
	NSArray* _subscriptionIDs;

}

@property (nonatomic,retain) NSArray * subscriptions;                            //@synthesize subscriptions=_subscriptions - In the implementation block
@property (nonatomic,copy) id subscriptionFetchedProgressBlock;                  //@synthesize subscriptionFetchedProgressBlock=_subscriptionFetchedProgressBlock - In the implementation block
@property (nonatomic,retain) NSArray * subscriptionIDs;                          //@synthesize subscriptionIDs=_subscriptionIDs - In the implementation block
@property (assign,nonatomic) BOOL isFetchAllSubscriptionsOperation;              //@synthesize isFetchAllSubscriptionsOperation=_isFetchAllSubscriptionsOperation - In the implementation block
-(void)main;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setSubscriptionFetchedProgressBlock:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSArray *)subscriptionIDs;
-(void)setSubscriptions:(NSArray *)arg1 ;
-(void)setSubscriptionIDs:(NSArray *)arg1 ;
-(BOOL)isFetchAllSubscriptionsOperation;
-(id)subscriptionFetchedProgressBlock;
-(void)_handleSubscriptionFetched:(id)arg1 withID:(id)arg2 responseCode:(id)arg3 ;
-(void)setIsFetchAllSubscriptionsOperation:(BOOL)arg1 ;
-(NSArray *)subscriptions;
@end
