/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:50 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/lsuseractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol LSUserActivityClientProtocol <NSObject>
@required
-(void)doFetchUserActivityInfoWithUUID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)doDeleteUserActivityWithUUID:(id)arg1;
-(void)doUpdateUserActivityWithUUID:(id)arg1 setActive:(BOOL)arg2;
-(void)doRegisterUserActivityInfo:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)doUpdateUserActivityInfo:(id)arg1 makeCurrent:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)doMarkUserActivityAsDirty:(id)arg1 forceImmediate:(BOOL)arg2;
-(void)doInitializeWithClientVersion:(long long)arg1 clientInfo:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end

