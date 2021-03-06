/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:34 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAVCore/IMSystemMonitorListener.h>

@class IMAVCamera;

@interface IMAVLocalPreviewClient : NSObject <IMSystemMonitorListener> {

	bool _wantsPreview;
	bool _wantsPausedPreview;
	bool _wantsUnpausedPreview;

}

@property (nonatomic,readonly) bool isPreviewRunning; 
@property (assign,nonatomic) unsigned cameraType; 
@property (assign,nonatomic) unsigned cameraOrientation; 
@property (assign,nonatomic) IMAVCamera * localCamera; 
@property (assign,nonatomic) void* localVideoLayer; 
@property (assign,nonatomic) void* localVideoBackLayer; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)localScreenAttributesForVideoAttributes:(id)arg1 ;
-(void)setLocalScreenAttributes:(id)arg1 ;
-(void)startPreview;
-(bool)isPreviewRunning;
-(void)setCameraType:(unsigned)arg1 ;
-(void)pausePreview;
-(void)stopPreview;
-(void)didReceiveErrorFromCamera:(unsigned)arg1 error:(id)arg2 ;
-(void)didReceiveFirstPreviewFrameFromCamera:(unsigned)arg1 ;
-(void)didChangeLocalVideoAttributes:(id)arg1 ;
-(void)didChangeLocalScreenAttributes:(id)arg1 ;
-(void)didStartPreview;
-(void)didPausePreview;
-(void)didStopPreview;
-(void)setLocalVideoLayer:(void*)arg1 ;
-(void*)localVideoLayer;
-(void)didReceiveCommError;
-(void)setLocalCamera:(id)arg1 ;
-(id)localCamera;
-(void)systemApplicationDidEnterBackground;
-(void)systemApplicationWillEnterForeground;
-(void)systemScreenDidPowerUp;
-(void)systemScreenDidPowerDown;
-(void*)localVideoBackLayer;
-(void)setLocalVideoBackLayer:(void*)arg1 ;
-(void)_avDaemonConnected;
-(bool)_shouldPreviewBeRunning;
-(void)_updatePreviewState;
-(void)unpausePreview;
-(void)beginAnimationToPIP;
-(void)endAnimationToPIP;
-(void)beginAnimationToPreview;
-(void)endAnimationToPreview;
-(unsigned)cameraType;
-(unsigned)cameraOrientation;
-(void)setCameraOrientation:(unsigned)arg1 ;
@end

