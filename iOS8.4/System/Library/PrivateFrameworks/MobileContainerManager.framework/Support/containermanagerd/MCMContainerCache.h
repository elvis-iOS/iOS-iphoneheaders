/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:42 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MobileContainerManager.framework/Support/containermanagerd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <containermanagerd/containermanagerd-Structs.h>
@class NSMutableDictionary;

@interface MCMContainerCache : NSObject {

	NSMutableDictionary* _liveContainerCache;
	NSMutableDictionary* _tempContainerCache;
	opaque_pthread_mutex_t _cacheLock;

}
+(id)sharedInstance;
-(id)_getCacheForContentClass:(long long)arg1 temporary:(BOOL)arg2 error:(id*)arg3 ;
-(id)containerForContentClass:(long long)arg1 identifier:(id)arg2 temporary:(BOOL)arg3 error:(id*)arg4 ;
-(id)containerForContentClass:(long long)arg1 identifier:(id)arg2 uuidString:(id)arg3 temporary:(BOOL*)arg4 ;
-(id)allContainersForContentClass:(long long)arg1 temporary:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)addContainerMetadata:(id)arg1 url:(id)arg2 temporary:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)removeContainerForContentClass:(long long)arg1 identifier:(id)arg2 temporary:(BOOL)arg3 error:(id*)arg4 ;
-(id)init;
@end

