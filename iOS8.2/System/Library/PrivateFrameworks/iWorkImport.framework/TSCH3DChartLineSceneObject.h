/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartSeriesSceneObject.h>

@interface TSCH3DChartLineSceneObject : TSCH3DChartSeriesSceneObject
+(float)chartSeriesDepth;
+(char)supportsChartSeriesDepthOffset;
+(id)chartSeriesType;
+(MeshData)createMeshForSeries:(id)arg1 ;
-(char)alwaysRenderForElementBlendAnimationClip;
-(char)shouldRenderSeries:(id)arg1 ;
-(void)updateTilingEffect:(TexCoordTilingShaderEffectState*)arg1 properties:(id)arg2 textureTiling:(id)arg3 size:(const tvec3<float>*)arg4 ;
-(EdgeDetectionParameters)edgeDetectionParameters;
@end

