/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:18 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpringBoardServerInstance.framework/AXSpringBoardServerInstance
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AXSpringBoardServerInstance/AXUIClientDelegate.h>
#import <AXSpringBoardServerInstance/AXHAServerDelegate.h>

@class NSString;

@interface AXSBHearingAidDeviceController : NSObject <AXUIClientDelegate, AXHAServerDelegate> {

	BOOL isShowingHearingAidControl;
	BOOL _hearingAidIsConnected;
	BOOL _holdingMediaForConnection;
	BOOL _holdingPhoneForConnection;

}

@property (assign,nonatomic) BOOL isShowingHearingAidControl; 
@property (assign,nonatomic) BOOL hearingAidIsConnected;                   //@synthesize hearingAidIsConnected=_hearingAidIsConnected - In the implementation block
@property (assign,nonatomic) BOOL holdingMediaForConnection;               //@synthesize holdingMediaForConnection=_holdingMediaForConnection - In the implementation block
@property (assign,nonatomic) BOOL holdingPhoneForConnection;               //@synthesize holdingPhoneForConnection=_holdingPhoneForConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(void)dealloc;
-(id)init;
-(void)audioRouteDidChange:(id)arg1 ;
-(void)serverDidDie:(id)arg1 ;
-(void)hearingAidConnectionDidChange:(BOOL)arg1 ;
-(void)startServer;
-(void)liveListenStatusBarActivated:(id)arg1 ;
-(void)statusBarDidChange:(id)arg1 ;
-(void)mediaPlaybackDidChange:(id)arg1 ;
-(void)showHearingAidControl:(BOOL)arg1 ;
-(id)hearingUIClient;
-(void)setIsShowingHearingAidControl:(BOOL)arg1 ;
-(void)sendUpdatedStatusBarStyle;
-(BOOL)isShowingHearingAidControl;
-(long long)effectiveStatusBarStyle;
-(BOOL)shouldRequestAudioConnection;
-(BOOL)holdingMediaForConnection;
-(void)setHoldingMediaForConnection:(BOOL)arg1 ;
-(BOOL)holdingPhoneForConnection;
-(void)setHoldingPhoneForConnection:(BOOL)arg1 ;
-(void)setHearingAidIsConnected:(BOOL)arg1 ;
-(id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1 ;
-(void)_lockStateChanged;
-(BOOL)hearingAidIsConnected;
-(BOOL)isScreenLocked;
@end

