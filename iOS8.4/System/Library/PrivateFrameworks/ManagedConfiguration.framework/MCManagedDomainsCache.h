/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:20 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface MCManagedDomainsCache : NSObject {

	NSObject*<OS_dispatch_queue> _memberQueue;
	NSMutableArray* _memberQueueCache;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> memberQueue;              //@synthesize memberQueue=_memberQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * memberQueueCache;                     //@synthesize memberQueueCache=_memberQueueCache - In the implementation block
+(id)sharedCache;
-(id)init;
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)rereadCache;
-(void)memberQueueRereadCache;
-(NSMutableArray *)memberQueueCache;
-(BOOL)isURLManaged:(id)arg1 ;
-(void)setMemberQueueCache:(NSMutableArray *)arg1 ;
@end

