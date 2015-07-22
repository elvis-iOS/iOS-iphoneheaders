/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol CPLEngineResourceStorageImplementation <CPLEngineStorageImplementation>
@required
-(unsigned long long)retainCountForIdentity:(id)arg1;
-(BOOL)retainIdentity:(id)arg1 error:(id*)arg2;
-(BOOL)releaseIdentity:(id)arg1 lastReference:(BOOL*)arg2 error:(id*)arg3;
-(void)enumerateIdentitiesWithBlock:(/*^block*/id)arg1;
-(BOOL)resetWithError:(id*)arg1;
-(unsigned long long)totalResourceSize;

@end
