/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:53:33 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CAMApplicationViewController.h>

@class CAMCameraRollSpec, DeferredFrameworkLoader;

@interface DeferredPUCameraApplicationViewController : CAMApplicationViewController {

	CAMCameraRollSpec* _spec;
	DeferredFrameworkLoader* _deferredLoader;

}

@property (nonatomic,retain) CAMCameraRollSpec * spec;                              //@synthesize spec=_spec - In the implementation block
@property (nonatomic,retain) DeferredFrameworkLoader * deferredLoader;              //@synthesize deferredLoader=_deferredLoader - In the implementation block
-(CAMCameraRollSpec *)spec;
-(void)setSpec:(CAMCameraRollSpec *)arg1 ;
-(char)definesPresentationContext;
-(void)presentViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)navigationController:(id)arg1 animatorForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(id)navigationController:(id)arg1 interactionControllerUsingAnimator:(id)arg2 ;
-(char)_navigationControllerShouldCrossFadeBottomBars:(id)arg1 ;
-(id)newAlbumNavigationControllerForCameraRoll:(id)arg1 ;
-(void)prepareAlbumNavigationControllerForReuse:(id)arg1 withCameraRoll:(id)arg2 ;
-(void)reloadAlbumNavigationController:(id)arg1 withCameraRoll:(id)arg2 ;
-(id)_initWithSessionID:(id)arg1 usesCameraLocationBundleID:(char)arg2 startPreviewImmediately:(char)arg3 ;
-(id)initForCurrentPlatformWithSessionID:(id)arg1 startPreviewImmediately:(char)arg2 ;
-(id)initForCurrentPlatformWithSessionID:(id)arg1 usesCameraLocationBundleID:(char)arg2 startPreviewImmediately:(char)arg3 ;
-(DeferredFrameworkLoader *)deferredLoader;
-(void)setDeferredLoader:(DeferredFrameworkLoader *)arg1 ;
@end

