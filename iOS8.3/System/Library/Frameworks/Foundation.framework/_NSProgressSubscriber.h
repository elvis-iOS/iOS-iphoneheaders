/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:50:43 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSProgressSubscriber.h>

@class NSString, NSMutableDictionary, NSXPCConnection, NSLock;

@interface _NSProgressSubscriber : NSObject <NSProgressSubscriber> {

	/*^block*/id _publishingHandler;
	NSString* _subscriberID;
	NSMutableDictionary* _proxiesByPublisherID;
	NSXPCConnection* _connection;
	NSLock* _lock;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(oneway void)observePublisherForID:(id)arg1 value:(id)arg2 forKey:(id)arg3 inUserInfo:(char)arg4 ;
-(oneway void)removePublisherForID:(id)arg1 ;
-(id)initWithPublishingHandler:(/*^block*/id)arg1 ;
-(void)startForFileURL:(id)arg1 ;
-(void)startForCategory:(id)arg1 ;
-(oneway void)addPublisher:(id)arg1 forID:(id)arg2 withValues:(id)arg3 isOld:(char)arg4 ;
-(void)dealloc;
-(void)stop;
@end

