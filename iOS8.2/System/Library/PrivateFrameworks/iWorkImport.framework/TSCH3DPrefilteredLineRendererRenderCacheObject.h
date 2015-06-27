/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:08 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DSceneRenderCacheObject.h>

@class TSCH3DStrokePatternTexture;

@interface TSCH3DPrefilteredLineRendererRenderCacheObject : TSCH3DSceneRenderCacheObject {

	TSCH3DStrokePatternTexture* mStrokeTexture;
	char mDidRenderOnce;

}

@property (assign,nonatomic) char didRenderOnce; 
-(void)allocateDynamicResourcesIntoArray:(id)arg1 ;
-(id)p_geometry;
-(id)p_texcoords;
-(id)p_box;
-(id)p_originalGeometry;
-(id)p_normals;
-(id)p_diffuseTexcoords;
-(void)submitResourcesWithLineRenderer:(id)arg1 setting:(id)arg2 ;
-(void)renderWithLineRenderer:(id)arg1 setting:(id)arg2 fromVertex:(const PrefilteredLineVertexProperties*)arg3 toVertex:(const PrefilteredLineVertexProperties*)arg4 ;
-(char)didRenderOnce;
-(void)setDidRenderOnce:(char)arg1 ;
-(void)dealloc;
-(id)init;
@end
