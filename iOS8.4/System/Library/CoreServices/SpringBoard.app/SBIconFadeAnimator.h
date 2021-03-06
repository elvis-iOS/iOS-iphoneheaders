/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SBIconAnimator.h>

@class UIView;

@interface SBIconFadeAnimator : SBIconAnimator {

	UIView* _crossfadeView;
	BOOL _addedToWindow;

}
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(void)_setAnimationFraction:(double)arg1 ;
-(unsigned long long)_numberOfSignificantAnimations;
-(void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(/*^block*/id)arg3 ;
-(id)initWithFolderController:(id)arg1 crossfadeView:(id)arg2 ;
-(void)_applyAlphaForFraction:(double)arg1 ;
-(void)dealloc;
@end

