/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:17 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKMapTileModel.h>
#import <VectorKit/VKMapLayer.h>

@class NSMutableArray, NSString;

@interface VKRasterMapModel : VKMapTileModel <VKMapLayer> {

	NSMutableArray* _sortedTiles;
	unsigned long long _mapLayer;
	BOOL _rasterViewer;
	BOOL _showingNoDataPlaceholders;
	shared_ptr<md::StyleQuery>* _styleQuery;
	shared_ptr<ggl::Texture2D>* _gglClutTexture;
	Pos2DUVMesh* _unitMesh;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _renderState;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _clutRenderState;

}

@property (assign,nonatomic) unsigned long long mapLayerPosition; 
@property (assign,nonatomic) BOOL rasterViewer;                                                      //@synthesize rasterViewer=_rasterViewer - In the implementation block
@property (getter=isShowingNoDataPlaceholders,readonly) BOOL showingNoDataPlaceholders;              //@synthesize showingNoDataPlaceholders=_showingNoDataPlaceholders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)reloadOnStylesheetChange;
-(void)dealloc;
-(id)init;
-(void)reset;
-(BOOL)isShowingNoDataPlaceholders;
-(id)styleManager;
-(void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(RenderQueue*)arg3 ;
-(void)setMapLayerPosition:(unsigned long long)arg1 ;
-(void)stylesheetDidChange;
-(void)setRasterViewer:(BOOL)arg1 ;
-(unsigned long long)mapLayerPosition;
-(BOOL)shouldEnableCLUT;
-(void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(RenderQueue*)arg3 roadAlpha:(float)arg4 ;
-(BOOL)rasterViewer;
-(void)gglSetupClutTextureForLevelOfDetail:(unsigned long long)arg1 scale:(double)arg2 ;
@end

