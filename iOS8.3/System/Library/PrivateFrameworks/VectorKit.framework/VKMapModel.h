/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:59:37 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKModelObject.h>
#import <VectorKit/VKOverlayContainerDelegate.h>
#import <VectorKit/VKLabelModelDelegate.h>
#import <VectorKit/GEOResourceManifestTileGroupObserver.h>
#import <VectorKit/GEOExperimentConfigurationObserver.h>
#import <VectorKit/VKTileProviderClient.h>
#import <VectorKit/VKPolylineGroupOverlayObserver.h>

@protocol VKMapModelDelegate, GEORoutePreloadSession, VKMapModeObserver;
@class GEOResourceManifestConfiguration, NSLocale, VKTileProvider, NSMapTable, VKTrafficTileSource, VKRasterOverlayTileSource, VKGridModel, VKSkyModel, VKLabelModel, VKRasterMapModel, VKHybridRasterMapModel, VKRiverMapModel, VKRasterTrafficMapModel, VKPolygonMapModel, VKRoadMapModel, VKRoadTrafficMapModel, VKRealisticMapModel, VKBuildingFootprintMapModel, VKAnnotationModel, VKOverlayContainerModel, VKRasterOverlayMapModel, VKDebugModel, NSMutableArray, VKStyleManager, VKMapRasterizer, NSMutableSet, VKAnimation, VKSharedResources, GEOFeatureStyleAttributes, VKPolylineOverlay, VKMercatorTerrainHeightCache, VKLabelMarker, NSArray, VKAnnotationMarker, NSSet, VKPolylineOverlayPainter, NSString;

@interface VKMapModel : VKModelObject <VKOverlayContainerDelegate, VKLabelModelDelegate, GEOResourceManifestTileGroupObserver, GEOExperimentConfigurationObserver, VKTileProviderClient, VKPolylineGroupOverlayObserver> {

	unsigned _mapPurpose;
	GEOResourceManifestConfiguration* _manifestConfiguration;
	NSLocale* _locale;
	int _tileSize;
	VKTileProvider* _tileProviders[4];
	VKTileProvider* _rasterOverlayProvider[2];
	int _mapMode;
	int _desiredMapMode;
	char _transitioningToNav;
	GEOResourceManifestConfiguration* _additionalManifestConfiguration;
	char _activeMapLayers[4][34];
	NSMapTable* _layerToSourceMaps[4];
	VKTrafficTileSource* _trafficSource;
	VKRasterOverlayTileSource* _rasterOverlayTileSource[2];
	VKGridModel* _gridModel;
	VKSkyModel* _skyModel;
	VKLabelModel* _labelModel;
	VKRasterMapModel* _rasterModel;
	VKHybridRasterMapModel* _hybridRasterModel;
	VKRasterMapModel* _standardRasterModel;
	VKRiverMapModel* _riverLineModel;
	VKRasterTrafficMapModel* _rasterTrafficModel;
	VKPolygonMapModel* _polygonModel;
	VKRoadMapModel* _roadModel;
	VKRoadMapModel* _hybridRoadModel;
	VKRoadTrafficMapModel* _roadTrafficModel;
	VKRealisticMapModel* _realisticModel;
	VKBuildingFootprintMapModel* _buildingFootprintModel;
	VKAnnotationModel* _annotationModel;
	VKOverlayContainerModel* _overlayContainerModel;
	VKRasterOverlayMapModel* _rasterOverlayModel[2];
	VKDebugModel* _debugModel;
	NSMapTable* _tileSources;
	NSMutableArray* _drawOrder;
	NSMutableArray* _mapLayerSubmodels;
	NSMutableArray* _mapTileSubmodels;
	VKStyleManager* _activeStyleManager;
	VKStyleManager* _defaultStyleManager;
	VKStyleManager* _hybridStyleManager;
	VKStyleManager* _satelliteStyleManager;
	double _zoomLevel;
	int _mapType;
	id<VKMapModelDelegate> _delegate;
	id<GEORoutePreloadSession> _routePreloadSession;
	char _dynamicMapModesEnabled;
	char _debugDynamicMapModesEnabled;
	char _buildingsAreVisible;
	char _showsBuildings;
	char _fullyDrawn;
	char _shouldNotifyFullyDrawn;
	char _hasFailedTile;
	char _trafficEnabled;
	char _shouldRasterize;
	int _loadingCount;
	float _contentScale;
	int _targetDisplay;
	double _lodBias;
	char _disableRoads;
	char _disableLabels;
	char _disablePolygons;
	char _disableBuildingFootprints;
	char _disableRasters;
	char _disableGrid;
	Matrix<float, 4, 1> _clearColor;
	VKMapRasterizer* _rasterizer;
	VKRasterMapModel* _rasterViewer;
	int _annotationMarkerStyle;
	char _limitingNavCameraHeight;
	NSMutableSet* _blockingStylesheetObservers;
	float _styleTransitionProgress;
	NSMutableArray* _externalAnchors;
	double _forcedMaxZoomLevel;
	VKAnimation* _modeTransitionAnimation;
	char _disableRoadClass[9];
	id<VKMapModeObserver> _mapModeObserver;
	VKSharedResources* _sharedResources;
	float _navigationPuckSize;
	ClearItem _clearItem;
	GEOFeatureStyleAttributes* _mapFeatureStyleAttributes;
	shared_ptr<md::StyleQuery>* _styleQuery;
	int _metroArea;
	char _forceMapDrawStyleUpdate;
	NSMutableSet* _polylineOverlays;
	VKPolylineOverlay* _selectedPolyline;

}

@property (nonatomic,retain) GEOResourceManifestConfiguration * additionalManifestConfiguration;              //@synthesize additionalManifestConfiguration=_additionalManifestConfiguration - In the implementation block
@property (nonatomic,retain) VKStyleManager * styleManager;                                                   //@synthesize activeStyleManager=_activeStyleManager - In the implementation block
@property (nonatomic,readonly) VKSharedResources * sharedResources;                                           //@synthesize sharedResources=_sharedResources - In the implementation block
@property (assign,nonatomic) int mapType;                                                                     //@synthesize mapType=_mapType - In the implementation block
@property (assign,nonatomic) char shouldLoadFallbackTiles; 
@property (assign,nonatomic) unsigned neighborMode; 
@property (assign,nonatomic) int shieldSize; 
@property (assign,nonatomic) int navigationShieldSize; 
@property (assign,nonatomic) int shieldIdiom; 
@property (assign,nonatomic) char showsPointsOfInterest; 
@property (assign,nonatomic) char showsBuildings;                                                             //@synthesize showsBuildings=_showsBuildings - In the implementation block
@property (assign,nonatomic) double lodBias; 
@property (assign,nonatomic) char dynamicMapModesEnabled;                                                     //@synthesize dynamicMapModesEnabled=_dynamicMapModesEnabled - In the implementation block
@property (nonatomic,readonly) int currentMapMode;                                                            //@synthesize mapMode=_mapMode - In the implementation block
@property (assign,nonatomic) char limitingNavCameraHeight;                                                    //@synthesize limitingNavCameraHeight=_limitingNavCameraHeight - In the implementation block
@property (nonatomic,readonly) VKMercatorTerrainHeightCache * terrainHeightCache; 
@property (assign,getter=isTrafficEnabled,nonatomic) char trafficEnabled;                                     //@synthesize trafficEnabled=_trafficEnabled - In the implementation block
@property (assign,nonatomic) char localizeLabels; 
@property (assign,nonatomic) int labelScaleFactor; 
@property (assign,nonatomic) float contentScale;                                                              //@synthesize contentScale=_contentScale - In the implementation block
@property (assign,nonatomic) int targetDisplay; 
@property (assign,nonatomic) id<VKMapModelDelegate> delegate;                                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) VKBuildingFootprintMapModel * buildingFootprintModel;                          //@synthesize buildingFootprintModel=_buildingFootprintModel - In the implementation block
@property (nonatomic,readonly) char buildingsAreVisible;                                                      //@synthesize buildingsAreVisible=_buildingsAreVisible - In the implementation block
@property (nonatomic,readonly) char isFullyDrawn; 
@property (nonatomic,readonly) VKTileProvider * tileProvider; 
@property (nonatomic,readonly) VKLabelMarker * selectedLabelMarker; 
@property (assign,nonatomic) char labelMarkerSelectionEnabled; 
@property (assign,nonatomic) PolylineCoordinate routeUserOffset; 
@property (nonatomic,retain) NSArray * externalTrafficIncidents; 
@property (nonatomic,readonly) VKAnnotationMarker * selectedAnnotationMarker; 
@property (nonatomic,readonly) NSArray * overlays; 
@property (nonatomic,readonly) NSSet * persistentOverlays; 
@property (nonatomic,retain) VKPolylineOverlayPainter * focusedLabelsPolylinePainter; 
@property (assign,nonatomic) char debugDynamicMapModesEnabled;                                                //@synthesize debugDynamicMapModesEnabled=_debugDynamicMapModesEnabled - In the implementation block
@property (assign,nonatomic) char disableRoads;                                                               //@synthesize disableRoads=_disableRoads - In the implementation block
@property (assign,nonatomic) char disableLabels;                                                              //@synthesize disableLabels=_disableLabels - In the implementation block
@property (assign,nonatomic) char disablePolygons;                                                            //@synthesize disablePolygons=_disablePolygons - In the implementation block
@property (assign,nonatomic) char disableBuildingFootprints;                                                  //@synthesize disableBuildingFootprints=_disableBuildingFootprints - In the implementation block
@property (assign,nonatomic) char disableRasters;                                                             //@synthesize disableRasters=_disableRasters - In the implementation block
@property (assign,nonatomic) char disableRealisticRoads; 
@property (assign,nonatomic) char disableRealisticLand; 
@property (assign,nonatomic) char disableGrid;                                                                //@synthesize disableGrid=_disableGrid - In the implementation block
@property (assign,nonatomic) Matrix<float clearColor;                                                         //@synthesize clearColor=_clearColor - In the implementation block
@property (nonatomic,retain) id<GEORoutePreloadSession> routePreloadSession; 
@property (assign,nonatomic) id<VKRouteMatchedAnnotationPresentation> routeLineSplitAnnotation; 
@property (nonatomic,readonly) NSArray * visibleTileSets; 
@property (assign,nonatomic) id<VKOverlayContainerRouteDelegate> overlayContainerRouteDelegate; 
@property (assign,nonatomic) float navigationPuckSize;                                                        //@synthesize navigationPuckSize=_navigationPuckSize - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(const char*)nameForRoadClass:(int)arg1 ;
+(unsigned long)numberOfRoadClasses;
-(void)dealloc;
-(Matrix<float)clearColor;
-(void)setDelegate:(id<VKMapModelDelegate>)arg1 ;
-(id<VKMapModelDelegate>)delegate;
-(void)didReceiveMemoryWarning:(char)arg1 ;
-(int)tileSize;
-(void)setContentScale:(float)arg1 ;
-(float)contentScale;
-(/*^block*/id)annotationRectTest;
-(/*^block*/id)annotationCoordinateTest;
-(void)_setMaximumZoomLevel:(double)arg1 ;
-(void)_resetMaximumZoomLevel;
-(void)setApplicationState:(unsigned)arg1 ;
-(void)setAdditionalManifestConfiguration:(GEOResourceManifestConfiguration *)arg1 ;
-(char)labelMarkerSelectionEnabled;
-(void)setLabelMarkerSelectionEnabled:(char)arg1 ;
-(int)mapType;
-(NSArray *)visibleTileSets;
-(id)attributionsForCurrentRegion;
-(char)isShowingNoDataPlaceholders;
-(VKStyleManager *)styleManager;
-(void)setStyleManager:(VKStyleManager *)arg1 ;
-(void)reloadStylesheet;
-(int)targetDisplay;
-(void)setTargetDisplay:(int)arg1 ;
-(void)setTrafficEnabled:(char)arg1 ;
-(void)cancelTileRequests;
-(char)localizeLabels;
-(void)setLocalizeLabels:(char)arg1 ;
-(int)labelScaleFactor;
-(void)setLabelScaleFactor:(int)arg1 ;
-(void)setMapType:(int)arg1 ;
-(void)clearScene;
-(void)setShouldLoadFallbackTiles:(char)arg1 ;
-(char)shouldLoadFallbackTiles;
-(id)detailedDescription;
-(int)shieldSize;
-(void)setShieldSize:(int)arg1 ;
-(int)navigationShieldSize;
-(void)setNavigationShieldSize:(int)arg1 ;
-(int)shieldIdiom;
-(void)setShieldIdiom:(int)arg1 ;
-(char)showsPointsOfInterest;
-(void)setShowsPointsOfInterest:(char)arg1 ;
-(char)showsBuildings;
-(void)setShowsBuildings:(char)arg1 ;
-(void)setDesiredMapMode:(int)arg1 immediate:(char)arg2 ;
-(char)dynamicMapModesEnabled;
-(void)setDynamicMapModesEnabled:(char)arg1 ;
-(id)annotationMarkers;
-(PolylineCoordinate)routeUserOffset;
-(void)setRouteUserOffset:(PolylineCoordinate)arg1 ;
-(NSArray *)externalTrafficIncidents;
-(void)setExternalTrafficIncidents:(NSArray *)arg1 ;
-(/*^block*/id)annotationMarkerDeselectionCallback;
-(void)setAnnotationMarkerDeselectionCallback:(/*^block*/id)arg1 ;
-(VKAnnotationMarker *)selectedAnnotationMarker;
-(void)removeAnnotationMarker:(id)arg1 ;
-(void)addAnnotationMarker:(id)arg1 allowAnimation:(char)arg2 ;
-(void)selectAnnotationMarker:(id)arg1 ;
-(NSSet *)persistentOverlays;
-(void)removePersistentOverlay:(id)arg1 ;
-(void)addPersistentOverlay:(id)arg1 ;
-(NSArray *)overlays;
-(void)removeOverlay:(id)arg1 ;
-(void)addOverlay:(id)arg1 ;
-(id<VKRouteMatchedAnnotationPresentation>)routeLineSplitAnnotation;
-(void)setRouteLineSplitAnnotation:(id<VKRouteMatchedAnnotationPresentation>)arg1 ;
-(void)deselectLabelMarker;
-(id)externalAnchors;
-(void)removeExternalAnchor:(id)arg1 ;
-(void)addExternalAnchor:(id)arg1 ;
-(char)disableLabels;
-(void)setDisableLabels:(char)arg1 ;
-(char)disableRoads;
-(void)setDisableRoads:(char)arg1 ;
-(void)stylesheetAnimationDidEnd:(char)arg1 ;
-(void)resetTileContainers;
-(void)stylesheetAnimationWillStartFromStyle:(unsigned)arg1 toStyle:(unsigned)arg2 ;
-(void)stylesheetAnimationDidProgress:(float)arg1 ;
-(void)requestStylesheetAnimation:(id)arg1 targetMapDisplayStyle:(unsigned)arg2 setupHandler:(/*^block*/id)arg3 ;
-(float)_styleTransitionProgress;
-(void)_setStyleTransitionProgress:(float)arg1 targetStyle:(unsigned)arg2 step:(int)arg3 ;
-(void)setRoutePreloadSession:(id<GEORoutePreloadSession>)arg1 ;
-(id<GEORoutePreloadSession>)routePreloadSession;
-(id)labelMarkerForSelectionAtPoint:(CGPoint)arg1 selectableLabelsOnly:(char)arg2 ;
-(void)selectLabelMarker:(id)arg1 ;
-(void)deselectAnnotationMarker:(id)arg1 ;
-(VKLabelMarker *)selectedLabelMarker;
-(id)labelMarkers;
-(void)addRasterOverlay:(id)arg1 ;
-(void)removeRasterOverlay:(id)arg1 ;
-(void)insertRasterOverlay:(id)arg1 aboveOverlay:(id)arg2 ;
-(void)insertRasterOverlay:(id)arg1 belowOverlay:(id)arg2 ;
-(void)setCurrentLocationText:(id)arg1 ;
-(VKPolylineOverlayPainter *)focusedLabelsPolylinePainter;
-(void)setFocusedLabelsPolylinePainter:(VKPolylineOverlayPainter *)arg1 ;
-(void)forceMapType:(int)arg1 ;
-(void)setDisablePolygons:(char)arg1 ;
-(void)setDisableBuildingFootprints:(char)arg1 ;
-(void)setDisableRasters:(char)arg1 ;
-(void)disableRoadClass:(char)arg1 withRoadClass:(int)arg2 ;
-(void)setDisableRealisticRoads:(char)arg1 ;
-(void)setDisableRealisticLand:(char)arg1 ;
-(void)setDisableGrid:(char)arg1 ;
-(char)isRoadClassDisabled:(int)arg1 ;
-(char)isFullyDrawn;
-(char)disablePolygons;
-(char)disableBuildingFootprints;
-(char)disableRasters;
-(char)disableRealisticRoads;
-(char)disableRealisticLand;
-(char)disableGrid;
-(char)debugDynamicMapModesEnabled;
-(void)setDebugDynamicMapModesEnabled:(char)arg1 ;
-(GEOResourceManifestConfiguration *)additionalManifestConfiguration;
-(char)isTrafficEnabled;
-(void)setStylesheetMapDisplayStyle:(unsigned)arg1 ;
-(VKSharedResources *)sharedResources;
-(unsigned)neighborMode;
-(void)setNeighborMode:(unsigned)arg1 ;
-(id)initShouldRasterize:(char)arg1 mapPurpose:(unsigned)arg2 tileGroupIdentifier:(unsigned)arg3 locale:(id)arg4 contentScale:(float)arg5 ;
-(void)setOverlayContainerRouteDelegate:(id<VKOverlayContainerRouteDelegate>)arg1 ;
-(void)addSubmodel:(id)arg1 ;
-(VKMercatorTerrainHeightCache *)terrainHeightCache;
-(void)flushCaches:(char)arg1 ;
-(int)currentMapMode;
-(void)layoutScene:(id)arg1 withContext:(id)arg2 ;
-(double)heightAtPoint:(VKPoint)arg1 ;
-(void)didEndNavigation;
-(void)didBeginTransitionToNavigation;
-(void)setLimitingNavCameraHeight:(char)arg1 ;
-(id)navTileSource;
-(void)gatherNavigationRenderingPreloadItems:(vector<ggl::ShaderLoadItem, std::__1::allocator<ggl::ShaderLoadItem> >Ref)arg1 ;
-(id)annotationMarkerForSelectionAtPoint:(VKPoint)arg1 avoidCurrent:(char)arg2 canvasSize:(CGSize)arg3 ;
-(void)setNavigationPuckSize:(float)arg1 ;
-(void)debugHighlightLabelAtScreenPoint:(CGPoint)arg1 viewTransform:(id)arg2 ;
-(void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(RenderQueue*)arg3 ;
-(void)_transitionFromMode:(int)arg1 toMode:(int)arg2 animated:(char)arg3 ;
-(int)buildingsMapMode;
-(void)_activateModel:(id)arg1 ;
-(void)_deactivateModel:(id)arg1 ;
-(void)configureTileSources;
-(int)tileStyleForMapLayer:(unsigned long long)arg1 ;
-(id)tileSetForMapLayer:(unsigned long long)arg1 tileGroup:(id)arg2 ;
-(id)createSourceForLayer:(unsigned long long)arg1 tileSet:(id)arg2 mode:(int)arg3 ;
-(id)sourceForLayer:(unsigned long long)arg1 mode:(int)arg2 ;
-(void)createTrafficTileSourceIfNecessary:(id)arg1 ;
-(void)_mapConfigurationDidChange;
-(void)_setStyleManagerFromMapType:(int)arg1 ;
-(void)setClearColor:(Matrix<float)arg1 ;
-(void)performStylesheetDidChange;
-(void)performStylesheetWillTransitionToDisplayStyle:(unsigned)arg1 ;
-(void)performStylesheetTransitionDidProgress;
-(void)performStylesheetDoneChanging;
-(void)_updateRegularTileProviderMode;
-(void)_updateOverlayTileSource;
-(void)_forceLayout;
-(float)_tileSelectionScale;
-(float)ppi;
-(void)performstylesheetDidReload;
-(void)setLodBias:(double)arg1 ;
-(double)lodBias;
-(void)shouldFlushCaches:(id)arg1 ;
-(void)_localeChanged:(id)arg1 ;
-(void)willTapZoom;
-(void)didTapZoom;
-(void)foreachActiveLayer:(/*^block*/id)arg1 ;
-(double)maxTileHeightAtPoint:(VKPoint)arg1 ;
-(void)_updateZoomLevel:(id)arg1 ;
-(void)_tryTransitionAndPreloadIfNecessary:(id)arg1 ;
-(VKTileProvider *)tileProvider;
-(void)updateRasterOverlayProviders:(id)arg1 withContext:(id)arg2 ;
-(void)updateMapDrawStyleWithContext:(id)arg1 ;
-(id)_rasterOverlayTileSourceForLevel:(unsigned)arg1 ;
-(void)_updateTileExclusionAreas;
-(void)polylineGroup:(id)arg1 didAddPolyline:(id)arg2 ;
-(void)polylineGroup:(id)arg1 didRemovePolyline:(id)arg2 ;
-(id)labelDebugString;
-(id)overlayContainer:(id)arg1 painterForOverlay:(id)arg2 ;
-(id)overlayContainer:(id)arg1 roadTileForTile:(id)arg2 ;
-(char)overlayContainerIsInRealisticMode:(id)arg1 ;
-(void)overlayContainer:(id)arg1 showingRouteInStandardModeDidChange:(char)arg2 ;
-(id)labelModel:(id)arg1 mapTileForTile:(id)arg2 layer:(unsigned long long)arg3 ;
-(void)labelModel:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3 ;
-(void)experimentConfigurationDidChange:(id)arg1 ;
-(char)tileProviderMayUseNetwork:(id)arg1 ;
-(void)tileProviderNeedsUpdate:(id)arg1 ;
-(void)willStartLoadingTiles;
-(void)didStopLoadingTilesWithError:(id)arg1 ;
-(void)polylineGroup:(id)arg1 didSelectPolyline:(id)arg2 ;
-(id<VKOverlayContainerRouteDelegate>)overlayContainerRouteDelegate;
-(int)minimumZoomLevelInView:(id)arg1 ;
-(int)maximumZoomLevelInView:(id)arg1 ;
-(VKBuildingFootprintMapModel *)buildingFootprintModel;
-(char)buildingsAreVisible;
-(float)navigationPuckSize;
-(char)limitingNavCameraHeight;
@end

