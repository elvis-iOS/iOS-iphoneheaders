/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:41:36 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MCDCarDisplayServiceProvider;
@class UIWindow, MCDBrowserViewController, MPAVController;

@interface MCDRootController : NSObject {

	UIWindow* _carDisplayWindow;
	MCDBrowserViewController* _browserViewController;
	MPAVController* _player;
	id<MCDCarDisplayServiceProvider> _serviceProvider;

}

@property (nonatomic,retain) MPAVController * player;                                              //@synthesize player=_player - In the implementation block
@property (assign,nonatomic,__weak) id<MCDCarDisplayServiceProvider> serviceProvider;              //@synthesize serviceProvider=_serviceProvider - In the implementation block
@property (nonatomic,readonly) UIWindow * carDisplayWindow;                                        //@synthesize carDisplayWindow=_carDisplayWindow - In the implementation block
-(void)dealloc;
-(id<MCDCarDisplayServiceProvider>)serviceProvider;
-(void)setServiceProvider:(id<MCDCarDisplayServiceProvider>)arg1 ;
-(id)initWithScreen:(id)arg1 hostTabBarController:(id)arg2 ;
-(void)showNowPlaying;
-(void)reloadRadio;
-(UIWindow *)carDisplayWindow;
-(void)setPlayer:(MPAVController *)arg1 ;
-(MPAVController *)player;
@end

