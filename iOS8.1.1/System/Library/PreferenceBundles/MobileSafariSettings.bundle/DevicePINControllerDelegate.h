/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:02 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol DevicePINControllerDelegate <NSObject>
@optional
-(void)devicePINControllerDidDismissPINPane:(id)arg1;
-(void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2;
-(void)didAcceptSetPIN;
-(void)devicePINController:(id)arg1 didAcceptChangedPIN:(id)arg2;
-(void)didAcceptChangedPIN;
-(void)didAcceptRemovePIN;
-(void)willAcceptEnteredPIN;
-(void)didAcceptEnteredPIN:(id)arg1;
-(void)didAcceptEnteredPIN;
-(void)willCancelEnteringPIN;
-(void)didCancelEnteringPIN;

@end
