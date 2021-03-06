/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:24 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DRenderPipeline.h>

@class TSCH3DScene, TSCH3DGLFramebuffer, TSCH3DSceneRenderSetup, TSCH3DCamera, NSNumber;

@interface TSCH3DSceneRenderPipeline : TSCH3DRenderPipeline {

	TSCH3DSceneRenderPipeline* mOriginal;
	TSCH3DScene* mScene;
	TSCH3DGLFramebuffer* mFramebuffer;
	TSCH3DSceneRenderSetup* mSetup;
	TSCH3DCamera* mCamera;
	NSNumber* mScale;
	NSNumber* mSamples;
	NSNumber* mSuperSamples;
	NSNumber* mPreserveFramebufferContent;

}

@property (nonatomic,readonly) TSCH3DCamera * camera; 
@property (nonatomic,retain) TSCH3DScene * scene; 
@property (nonatomic,retain) TSCH3DGLFramebuffer * framebuffer; 
@property (nonatomic,retain) TSCH3DSceneRenderSetup * setup; 
@property (assign,nonatomic) float scale; 
@property (nonatomic,readonly) float renderScale; 
@property (assign,nonatomic) float samples; 
@property (assign,nonatomic) float superSamples; 
@property (assign,nonatomic) BOOL preserveFramebufferContent; 
@property (nonatomic,retain) TSCH3DSceneRenderPipeline * original; 
+(id)pipelineWithProcessor:(id)arg1 session:(id)arg2 scene:(id)arg3 ;
-(Class)labelsMeshRendererClassForLabelsRenderer:(id)arg1 ;
-(id)labelsMeshRendererForLabelsRenderer:(id)arg1 ;
-(BOOL)shouldSkipLabelsIfHidden;
-(id)processor;
-(void)setOriginal:(TSCH3DSceneRenderPipeline *)arg1 ;
-(TSCH3DSceneRenderPipeline *)original;
-(void)setFramebuffer:(TSCH3DGLFramebuffer *)arg1 ;
-(id)initWithProcessor:(id)arg1 session:(id)arg2 scene:(id)arg3 ;
-(id)cloneWithProcessor:(id)arg1 scene:(id)arg2 ;
-(BOOL)preserveFramebufferContent;
-(void)setPreserveFramebufferContent:(BOOL)arg1 ;
-(BOOL)activateFramebuffer:(id)arg1 ;
-(id)baseRecloneWithRetargetProcessor:(id)arg1 scene:(id)arg2 ;
-(BOOL)renderWithFramebuffer:(id)arg1 ;
-(id)baseRecloneWithProcessor:(id)arg1 scene:(id)arg2 ;
-(id)recloneWithPipelineClass:(Class)arg1 processor:(id)arg2 scene:(id)arg3 ;
-(id)recloneWithPipelineClass:(Class)arg1 retargetProcessor:(id)arg2 scene:(id)arg3 ;
-(float)superSamples;
-(id)concreteSetup;
-(tvec4<float>)backgroundClearColor;
-(void)renderSelector:(SEL)arg1 ;
-(void)setupRendering;
-(id)cloneWithRetargetProcessor:(id)arg1 scene:(id)arg2 ;
-(void)setSetup:(TSCH3DSceneRenderSetup *)arg1 ;
-(void)setSuperSamples:(float)arg1 ;
-(void)setObjectRenderMode:(int)arg1 ;
-(void)clearCamera;
-(void)clearFramebuffer;
-(float)renderScale;
-(TSCH3DScene *)scene;
-(void)setScene:(TSCH3DScene *)arg1 ;
-(BOOL)render;
-(void)dealloc;
-(float)scale;
-(void)setScale:(float)arg1 ;
-(BOOL)run;
-(void)setupCamera:(id)arg1 ;
-(id)session;
-(float)samples;
-(void)setSamples:(float)arg1 ;
-(TSCH3DSceneRenderSetup *)setup;
-(TSCH3DCamera *)camera;
-(TSCH3DGLFramebuffer *)framebuffer;
@end

