/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DSceneObject.h>

@interface TSCH3DChartShadowsSceneObject : TSCH3DSceneObject
+(void)setShadowPlanePadding:(box<glm::detail::tvec3<float> >)arg1 forScene:(id)arg2 ;
+(void)invalidateShadowsForScene:(id)arg1 ;
-(void)getBounds:(id)arg1 ;
-(id)propertiesForScene:(id)arg1 ;
-(box<glm::detail::tvec3<float> >)p_shadowPlanePaddingForScene:(id)arg1 ;
-(void)renderShadowScene:(id)arg1 ;
-(id)TSDShadowFromScene:(id)arg1 ;
-(void)prerenderShadows:(id)arg1 blurslack:(float)arg2 angle:(float)arg3 quality:(float)arg4 targetFBO:(id)arg5 ;
-(float)p_chartOpacityForScene:(id)arg1 ;
-(void)renderShadows:(id)arg1 ;
-(void)prerender:(id)arg1 ;
-(tvec3<float>)calculateShadowCameraPosition:(float)arg1 center:(tvec3<float>)arg2 shadowQuality:(float)arg3 depthLimitAdjustment:(float)arg4 ;
-(char)animationTextureSceneDelegateShouldSkipForRep:(id)arg1 finalElements:(char)arg2 chunkStage:(int)arg3 ;
-(void)render:(id)arg1 ;
-(id)effects;
@end

