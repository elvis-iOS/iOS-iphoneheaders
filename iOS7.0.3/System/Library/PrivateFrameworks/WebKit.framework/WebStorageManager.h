/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface WebStorageManager : NSObject
+(id)_storageDirectoryPath;
+(id)sharedWebStorageManager;
+(void)setStorageDatabaseIdleInterval:(double)arg1 ;
+(void)closeIdleLocalStorageDatabases;
-(id)init;
-(unsigned long long)diskUsageForOrigin:(id)arg1 ;
-(id)origins;
-(void)deleteOrigin:(id)arg1 ;
-(void)deleteAllOrigins;
-(void)syncLocalStorage;
-(void)syncFileSystemAndTrackerDatabase;
@end

