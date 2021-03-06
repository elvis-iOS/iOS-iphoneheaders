/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ZoomWindow/ZoomWindow-Structs.h>
@class AXTimer;

@interface ZWCoalescedSettings : NSObject {

	CGRect _cachedZoomLensFrame;
	double _cachedZoomFactor;
	CGPoint _cachedZoomSlugPosition;
	CGPoint _cachedZoomPanOffset;
	AXTimer* _zoomLensFrameUpdateTimer;
	AXTimer* _zoomFactorUpdateTimer;
	AXTimer* _zoomPanOffsetUpdateTimer;
	AXTimer* _zoomSlugPositionUpdateTimer;

}

@property (assign,nonatomic) CGRect zoomWindowFrame; 
@property (assign,nonatomic) double zoomFactor; 
@property (assign,nonatomic) CGPoint zoomPanOffset; 
@property (assign,nonatomic) CGPoint zoomSlugNormalizedPosition; 
@property (assign,nonatomic) BOOL zoomInStandby; 
@property (nonatomic,retain) AXTimer * zoomLensFrameUpdateTimer;                 //@synthesize zoomLensFrameUpdateTimer=_zoomLensFrameUpdateTimer - In the implementation block
@property (nonatomic,retain) AXTimer * zoomFactorUpdateTimer;                    //@synthesize zoomFactorUpdateTimer=_zoomFactorUpdateTimer - In the implementation block
@property (nonatomic,retain) AXTimer * zoomPanOffsetUpdateTimer;                 //@synthesize zoomPanOffsetUpdateTimer=_zoomPanOffsetUpdateTimer - In the implementation block
@property (nonatomic,retain) AXTimer * zoomSlugPositionUpdateTimer;              //@synthesize zoomSlugPositionUpdateTimer=_zoomSlugPositionUpdateTimer - In the implementation block
+(id)sharedInstance;
-(AXTimer *)zoomSlugPositionUpdateTimer;
-(void)setZoomFactorUpdateTimer:(AXTimer *)arg1 ;
-(AXTimer *)zoomFactorUpdateTimer;
-(void)setZoomPanOffsetUpdateTimer:(AXTimer *)arg1 ;
-(AXTimer *)zoomPanOffsetUpdateTimer;
-(void)setZoomSlugPositionUpdateTimer:(AXTimer *)arg1 ;
-(void)setZoomLensFrameUpdateTimer:(AXTimer *)arg1 ;
-(AXTimer *)zoomLensFrameUpdateTimer;
-(void)setZoomFactor:(double)arg1 ;
-(double)zoomFactor;
-(CGRect)zoomWindowFrame;
-(CGPoint)zoomPanOffset;
-(CGPoint)zoomSlugNormalizedPosition;
-(BOOL)zoomInStandby;
-(void)setZoomWindowFrame:(CGRect)arg1 ;
-(void)setZoomPanOffset:(CGPoint)arg1 ;
-(void)setZoomSlugNormalizedPosition:(CGPoint)arg1 ;
-(void)setZoomInStandby:(BOOL)arg1 ;
@end

