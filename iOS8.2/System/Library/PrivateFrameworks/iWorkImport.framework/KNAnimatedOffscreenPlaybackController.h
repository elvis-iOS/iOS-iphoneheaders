/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDCanvasDelegate.h>

@class KNDocumentRoot, KNPlaybackSession, KNAnimatedSlideView, NSMutableSet, TSUMutableRetainedPointerSet, CALayer, KNSlideNode, NSSet, NSString;

@interface KNAnimatedOffscreenPlaybackController : NSObject <TSDCanvasDelegate> {

	KNDocumentRoot* mDocumentRoot;
	KNPlaybackSession* mSession;
	KNAnimatedSlideView* mAnimator;
	NSMutableSet* mActiveBuildRenderers;
	NSMutableSet* mMovieRenderers;
	TSUMutableRetainedPointerSet* mBuildRenderersToAnimateAtEndOfFinishedBuilds;
	double mCurrentEventAnimationsStartTime;
	double mCurrentEventAnimationsNonDelayedEndTime;
	double mCurrentEventAnimationsDelay;
	double mCurrentEventPauseStartTime;
	int mConcealingStyle;
	CALayer* mConcealingLayer;
	char mIsAnimating;
	char mIsPaused;

}

@property (nonatomic,readonly) KNDocumentRoot * documentRoot; 
@property (nonatomic,readonly) CALayer * layer; 
@property (nonatomic,readonly) KNSlideNode * currentSlideNode; 
@property (nonatomic,readonly) unsigned currentEventIndex; 
@property (nonatomic,readonly) KNSlideNode * firstSlideNode; 
@property (nonatomic,readonly) KNSlideNode * nextSlideNode; 
@property (nonatomic,readonly) unsigned currentSlideNodeEventCount; 
@property (getter=isFirstBuildEventAutomatic,nonatomic,readonly) char firstBuildEventAutomatic; 
@property (nonatomic,readonly) NSSet * movieRenderers; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)currentEventIndex;
-(char)isFirstBuildEventAutomatic;
-(void)p_invalidateAnimator;
-(KNSlideNode *)currentSlideNode;
-(void)p_renderCurrentEvent;
-(KNSlideNode *)firstSlideNode;
-(char)p_isCurrentEventTransition;
-(void)p_addAnimationsForBuildRenderer:(id)arg1 atBuildStartTime:(double)arg2 relativeToTime:(double)arg3 ;
-(void)pauseCurrentEventAnimationsWithConcealingStyle:(int)arg1 atLayerTime:(double)arg2 ;
-(void)p_updateConcealingStyle:(int)arg1 atTime:(double)arg2 ;
-(void)p_animateConcealingLayerToOpacity:(float)arg1 fromDefaultOpacity:(float)arg2 atTime:(double)arg3 ;
-(id)initWithDocumentRoot:(id)arg1 layerSize:(CGSize)arg2 ;
-(void)gotoSlideNode:(id)arg1 eventIndex:(unsigned)arg2 resetBuildTextures:(char)arg3 ;
-(KNSlideNode *)nextSlideNode;
-(unsigned)currentSlideNodeEventCount;
-(void)beginCurrentEventAnimationsAtLayerTime:(double)arg1 ignoreBuildDelays:(char)arg2 ;
-(void)updateCurrentEventAnimationsForLayerTime:(double)arg1 ignoreBuildDelays:(char)arg2 ;
-(void)endCurrentEventAnimations;
-(double)currentEventAnimationsRemainingTimeAfterLayerTime:(double)arg1 ;
-(void)pauseCurrentEventAnimationsAtLayerTime:(double)arg1 ;
-(void)resumeCurrentEventAnimationsAtLayerTime:(double)arg1 ;
-(void)updateMovieRenderersForLayerTime:(double)arg1 ;
-(NSSet *)movieRenderers;
-(void)dealloc;
-(CALayer *)layer;
-(id)init;
-(void)invalidate;
-(KNDocumentRoot *)documentRoot;
@end

