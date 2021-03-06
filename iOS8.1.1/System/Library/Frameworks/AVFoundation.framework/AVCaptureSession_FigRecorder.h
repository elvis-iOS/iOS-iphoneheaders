/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:36 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureSessionInternal_FigRecorder, NSString, NSArray;

@interface AVCaptureSession_FigRecorder : NSObject {

	AVCaptureSessionInternal_FigRecorder* _internal;

}

@property (nonatomic,copy) NSString * sessionPreset; 
@property (nonatomic,readonly) NSArray * inputs; 
@property (nonatomic,readonly) NSArray * outputs; 
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (getter=isInterrupted,nonatomic,readonly) BOOL interrupted; 
@property (assign,nonatomic) BOOL usesApplicationAudioSession; 
@property (assign,nonatomic) BOOL automaticallyConfiguresApplicationAudioSession; 
@property (nonatomic,readonly) OpaqueCMClockRef masterClock; 
+(id)allSessionPresets;
+(id)publicSessionPresets;
+(BOOL)automaticallyNotifiesObserversOfMasterClock;
+(id)avCaptureSessionPlist;
+(id)_createCaptureOptionsForPreset:(id)arg1 audioDevice:(id)arg2 videoDevice:(id)arg3 errorStatus:(int*)arg4 ;
+(void)initialize;
-(NSArray *)outputs;
-(int)_stopRecording;
-(BOOL)usesApplicationAudioSession;
-(BOOL)automaticallyConfiguresApplicationAudioSession;
-(int)_startRecording;
-(BOOL)isInterrupted;
-(id)outputWithClass:(Class)arg1 ;
-(NSArray *)inputs;
-(void)removeConnection:(id)arg1 ;
-(OpaqueCMClockRef)masterClock;
-(BOOL)canAddOutput:(id)arg1 ;
-(BOOL)canAddInput:(id)arg1 ;
-(void)addInput:(id)arg1 ;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(id)videoPreviewLayer;
-(NSString *)sessionPreset;
-(void)removeInput:(id)arg1 ;
-(void)_beginConfiguration;
-(BOOL)canSetSessionPreset:(id)arg1 ;
-(void)_commitConfiguration;
-(BOOL)_buildAndRunGraph;
-(BOOL)_canAddInput:(id)arg1 failureReason:(id*)arg2 ;
-(void)_addInputWithNoConnections:(id)arg1 ;
-(id)_connectionsForNewInputPort:(id)arg1 ;
-(void)_addConnection:(id)arg1 ;
-(void)_removeConnectionsForInputPort:(id)arg1 ;
-(BOOL)_canAddOutput:(id)arg1 failureReason:(id*)arg2 ;
-(void)_addOutputWithNoConnections:(id)arg1 ;
-(id)_connectionsForNewOutput:(id)arg1 ;
-(void)_removeConnection:(id)arg1 ;
-(void)beginConfiguration;
-(id)_connectionsForNewVideoPreviewLayer:(id)arg1 ;
-(BOOL)canAddConnection:(id)arg1 ;
-(void)commitConfiguration;
-(BOOL)_canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(BOOL)isBeingConfigured;
-(id)_stopError;
-(void)_postRuntimeError:(id)arg1 ;
-(void)_rebuildGraph;
-(void)setSessionPreset:(NSString *)arg1 ;
-(void)_setMasterClock:(OpaqueCMClockRef)arg1 ;
-(void)_stopAndTearDownGraph;
-(void)_setInterrupted:(BOOL)arg1 ;
-(void)addInputWithNoConnections:(id)arg1 ;
-(void)addOutputWithNoConnections:(id)arg1 ;
-(void)addConnection:(id)arg1 ;
-(void)setUsesApplicationAudioSession:(BOOL)arg1 ;
-(void)setAutomaticallyConfiguresApplicationAudioSession:(BOOL)arg1 ;
-(void)startRunning;
-(void)stopRunning;
-(id)captureOptions;
-(id)_resolvedCaptureOptions;
-(id)figRecorderOptions;
-(void)removeVideoPreviewLayer;
-(void)setVideoPreviewLayer:(id)arg1 ;
-(void)_teardownFigRecorder;
-(void)_rebuildInternalCaptureOptions;
-(void)addVideoPreviewLayerConnection:(id)arg1 ;
-(id)_liveConnections;
-(void)_removeVideoPreviewLayerConnectionsForInputPort:(id)arg1 ;
-(void)removeVideoPreviewLayerConnection:(id)arg1 ;
-(void)addVideoPreviewLayer:(id)arg1 ;
-(void)_doWillStart;
-(BOOL)isPreviewing;
-(BOOL)_stopPreviewing;
-(void)_rebuildLiveConnections;
-(void)_excludeOutputsForCaptureOptions:(id)arg1 ;
-(BOOL)_sessionHasEnabledMovieFileOutput;
-(id)_addFastSwitchOptionsToCaptureOptions:(id)arg1 forDevice:(id)arg2 preset:(id)arg3 ;
-(id)_resolvedCaptureOptionsByApplyingOverridesToCaptureOptions:(id)arg1 preset:(id)arg2 ;
-(id)_currentDeviceWithMediaType:(id)arg1 ;
-(id)_resolvedCaptureOptionsForPreset:(id)arg1 audioDevice:(id)arg2 videoDevice:(id)arg3 ;
-(void)_determineMasterClock;
-(int)_createRecorderIfNeeded;
-(BOOL)_figRecorderOldOptionsAreEqual:(id)arg1 toNewOptions:(id)arg2 livesourceOptionsAreEqual:(BOOL*)arg3 frameRatesChanged:(BOOL*)arg4 ;
-(BOOL)_startPreviewing;
-(void)_doDidStart:(BOOL)arg1 ;
-(id)_errorForFigRecorderNotification:(id)arg1 ;
-(void)_doDidStop:(id)arg1 ;
-(void)_doDidStartSources;
-(id)inputWithClass:(Class)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(id)description;
-(OpaqueFigRecorderRef)recorder;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(BOOL)isRunning;
-(void)_setRunning:(BOOL)arg1 ;
-(void)removeOutput:(id)arg1 ;
-(void)addOutput:(id)arg1 ;
@end

