/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:54 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFStaticWallpaperView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol SBFCancelable;
@class UIImageView, UIScrollView, SBFLockScreenWallpaperParallaxSettings, SBFSubject, UIColor, NSString;

@interface SBFScrollableStaticWallpaperView : SBFStaticWallpaperView <UIScrollViewDelegate> {

	UIImageView* _imageView;
	UIScrollView* _scrollView;
	SBFLockScreenWallpaperParallaxSettings* _parallaxSettings;
	SBFSubject* _scrollViewObserver;
	id<SBFCancelable> _colorBoxCancelToken;
	id<SBFCancelable> _parallaxCancelToken;
	double _minimumZoomScaleForParallax;
	double _minimumZoomScale;
	BOOL _parallaxCanBeEnabledAutomatically;
	UIColor* _averageColor;

}

@property (readonly) UIColor * averageColor;                        //@synthesize averageColor=_averageColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldScaleForParallax;
-(CGRect)cropRect;
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(double)parallaxFactor;
-(BOOL)supportsCropping;
-(CGRect)_cropRect;
-(void)setCropRect:(CGRect)arg1 zoomScale:(double)arg2 ;
-(double)cropZoomScale;
-(void)setParallaxEnabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 wallpaperImage:(id)arg2 variant:(long long)arg3 ;
-(CGPoint)_boundedContentOffsetForOverhang;
-(double)_parallaxFactorWithZoomScale:(double)arg1 contentOffset:(CGPoint)arg2 ;
-(double)_scrollViewParallaxFactor;
-(CGPoint)_minimumContentOffsetForOverhang;
-(CGPoint)_maximumContentOffsetForOverhang;
-(void)_setupScrollView;
-(void)_setupScrollViewObserver;
-(void)_setupColorBoxObserver;
-(void)_setupParallaxObserver;
-(double)_throttleDuration;
-(void)_updateParallaxForScroll;
-(void)_updateScrollViewZoomScales;
-(void)_setupContentView;
-(id)_wallpaperImageForAnalysis;
-(UIColor *)averageColor;
-(CGSize)_imageSize;
@end
