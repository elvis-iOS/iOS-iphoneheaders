/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:53 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/Support/softwareupdateservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol SUNetworkObserver <NSObject>
@optional
-(void)networkChangedFromNetworkType:(int)arg1 toNetworkType:(int)arg2;
-(void)cellularRoamingStatusChanged:(BOOL)arg1;
-(void)carrierBundleChanged;
-(void)operatorBundleChanged;

@end
