/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:31 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface XPCServerUser : NSObject {

	NSObject*<OS_dispatch_queue> queue;
	/*^block*/id block;

}

@property (assign) NSObject*<OS_dispatch_queue> queue; 
@property (nonatomic,copy) id block; 
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
@end

