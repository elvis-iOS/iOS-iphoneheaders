/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <GameCenterUI/GameCenterUI-Structs.h>
@interface GKBubbleShape : NSObject {

	GKVertexCurve* _vertexCurves;
	unsigned _vertexCount;
	float _vertexVariance;
	float _controlpointVariance;
	float _endpointVariance;

}

@property (assign,nonatomic) GKVertexCurve* vertexCurves;              //@synthesize vertexCurves=_vertexCurves - In the implementation block
@property (assign,nonatomic) unsigned vertexCount;                     //@synthesize vertexCount=_vertexCount - In the implementation block
@property (assign,nonatomic) float vertexVariance;                     //@synthesize vertexVariance=_vertexVariance - In the implementation block
@property (assign,nonatomic) float controlpointVariance;               //@synthesize controlpointVariance=_controlpointVariance - In the implementation block
@property (assign,nonatomic) float endpointVariance;                   //@synthesize endpointVariance=_endpointVariance - In the implementation block
+(id)standardBubbleShape;
+(id)standardBezierPathForSize:(CGSize)arg1 ;
-(id)pathForSize:(CGSize)arg1 ;
-(id)initWithVertexCount:(unsigned)arg1 vertexVariance:(float)arg2 endpointVariance:(float)arg3 controlpointVariance:(float)arg4 ;
-(void)generateVertexCurves;
-(void)setVertexCount:(unsigned)arg1 ;
-(GKVertexCurve*)vertexCurves;
-(void)setVertexCurves:(GKVertexCurve*)arg1 ;
-(float)vertexVariance;
-(void)setVertexVariance:(float)arg1 ;
-(float)controlpointVariance;
-(void)setControlpointVariance:(float)arg1 ;
-(float)endpointVariance;
-(void)setEndpointVariance:(float)arg1 ;
-(void)dealloc;
-(unsigned)vertexCount;
@end
