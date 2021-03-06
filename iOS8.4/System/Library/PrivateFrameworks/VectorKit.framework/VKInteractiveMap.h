/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:17 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSArray, GEOMapRegion, VKAnchorWrapper;


@protocol VKInteractiveMap <NSObject>
@property (assign,nonatomic) id<VKInteractiveMapDelegate> delegate; 
@property (assign,nonatomic) BOOL trafficEnabled; 
@property (assign,nonatomic) BOOL staysCenteredDuringPinch; 
@property (assign,nonatomic) BOOL staysCenteredDuringRotation; 
@property (assign,nonatomic) BOOL isPitchable; 
@property (getter=isPitched,nonatomic,readonly) BOOL pitched; 
@property (getter=isFullyPitched,nonatomic,readonly) BOOL fullyPitched; 
@property (assign,nonatomic) long long mapType; 
@property (assign,nonatomic) long long shieldSize; 
@property (assign,nonatomic) long long navigationShieldSize; 
@property (assign,nonatomic) long long shieldIdiom; 
@property (assign,nonatomic) BOOL showsPointsOfInterest; 
@property (assign,nonatomic) BOOL showsBuildings; 
@property (assign,nonatomic) PolylineCoordinate routeUserOffset; 
@property (nonatomic,retain) NSArray * externalTrafficIncidents; 
@property (nonatomic,readonly) double minimumZoomLevel; 
@property (nonatomic,readonly) double maximumZoomLevel; 
@property (assign,nonatomic) BOOL labelMarkerSelectionEnabled; 
@property (assign,nonatomic) BOOL localizeLabels; 
@property (assign,nonatomic) long long labelScaleFactor; 
@property (nonatomic,retain) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) GEOMapRegion * mapRegionOfInterest; 
@property (nonatomic,readonly) double yaw; 
@property (nonatomic,readonly) double presentationYaw; 
@property (nonatomic,readonly) double pitch; 
@property (nonatomic,readonly) double altitude; 
@property (assign,nonatomic) long long annotationTrackingZoomStyle; 
@property (assign,nonatomic) long long annotationTrackingHeadingAnimationDisplayRate; 
@property (assign,nonatomic) id<VKRouteMatchedAnnotationPresentation> routeLineSplitAnnotation; 
@property (getter=isAnimatingToTrackAnnotation,nonatomic,readonly) BOOL animatingToTrackAnnotation; 
@property (nonatomic,readonly) id<VKTrackableAnnotation> trackingAnnotation; 
@property (getter=isTrackingHeading,nonatomic,readonly) BOOL trackingHeading; 
@property (nonatomic,readonly) NSArray * visibleTileSets; 
@property (getter=isFullyDrawn,nonatomic,readonly) BOOL fullyDrawn; 
@property (nonatomic,readonly) VKAnchorWrapper * externalAnchors; 
@required
+(BOOL)supportsMapType:(long long)arg1 scale:(int)arg2;
-(void)setDelegate:(id)arg1;
-(id<VKInteractiveMapDelegate>)delegate;
-(/*^block*/id)annotationRectTest;
-(/*^block*/id)annotationCoordinateTest;
-(double)pitch;
-(double)yaw;
-(BOOL)labelMarkerSelectionEnabled;
-(void)setLabelMarkerSelectionEnabled:(BOOL)arg1;
-(long long)mapType;
-(NSArray *)visibleTileSets;
-(id)attributionsForCurrentRegion;
-(BOOL)isShowingNoDataPlaceholders;
-(BOOL)trafficEnabled;
-(void)setTrafficEnabled:(BOOL)arg1;
-(BOOL)currentZoomLevelAllowsRotation;
-(void)setStaysCenteredDuringPinch:(BOOL)arg1;
-(BOOL)localizeLabels;
-(void)setLocalizeLabels:(BOOL)arg1;
-(long long)labelScaleFactor;
-(void)setLabelScaleFactor:(long long)arg1;
-(BOOL)staysCenteredDuringPinch;
-(void)setStaysCenteredDuringRotation:(BOOL)arg1;
-(BOOL)staysCenteredDuringRotation;
-(void)setIsPitchable:(BOOL)arg1;
-(BOOL)isPitchable;
-(void)setMapType:(long long)arg1;
-(void)debugHighlightLabelAtPoint:(CGPoint)arg1;
-(id)detailedDescription;
-(BOOL)canZoomInForTileSize:(long long)arg1;
-(BOOL)canZoomOutForTileSize:(long long)arg1;
-(double)minimumZoomLevel;
-(double)minimumZoomLevelForTileSize:(long long)arg1;
-(double)topDownMinimumZoomLevelForTileSize:(long long)arg1;
-(double)maximumZoomLevel;
-(double)maximumZoomLevelForTileSize:(long long)arg1;
-(double)currentZoomLevel;
-(double)currentZoomLevelForTileSize:(long long)arg1;
-(double)zoomLevelAdjustmentForTileSize:(long long)arg1;
-(long long)shieldSize;
-(void)setShieldSize:(long long)arg1;
-(long long)navigationShieldSize;
-(void)setNavigationShieldSize:(long long)arg1;
-(long long)shieldIdiom;
-(void)setShieldIdiom:(long long)arg1;
-(BOOL)showsPointsOfInterest;
-(void)setShowsPointsOfInterest:(BOOL)arg1;
-(BOOL)showsBuildings;
-(void)setShowsBuildings:(BOOL)arg1;
-(id)annotationMarkers;
-(long long)annotationTrackingZoomStyle;
-(void)setAnnotationTrackingZoomStyle:(long long)arg1;
-(long long)annotationTrackingHeadingAnimationDisplayRate;
-(void)setAnnotationTrackingHeadingAnimationDisplayRate:(long long)arg1;
-(PolylineCoordinate)routeUserOffset;
-(void)setRouteUserOffset:(PolylineCoordinate)arg1;
-(NSArray *)externalTrafficIncidents;
-(void)setExternalTrafficIncidents:(id)arg1;
-(/*^block*/id)annotationMarkerDeselectionCallback;
-(void)setAnnotationMarkerDeselectionCallback:(/*^block*/id)arg1;
-(id)selectedAnnotationMarker;
-(void)removeAnnotationMarker:(id)arg1;
-(void)addAnnotationMarker:(id)arg1 allowAnimation:(BOOL)arg2;
-(void)selectAnnotationMarker:(id)arg1;
-(id)persistentOverlays;
-(void)removePersistentOverlay:(id)arg1;
-(void)addPersistentOverlay:(id)arg1;
-(id)overlays;
-(void)removeOverlay:(id)arg1;
-(void)addOverlay:(id)arg1;
-(id<VKRouteMatchedAnnotationPresentation>)routeLineSplitAnnotation;
-(void)setRouteLineSplitAnnotation:(id)arg1;
-(void)deselectLabelMarker;
-(id<VKTrackableAnnotation>)trackingAnnotation;
-(BOOL)isTrackingHeading;
-(void)stopTrackingAnnotation;
-(void)startTrackingAnnotation:(id)arg1 trackHeading:(BOOL)arg2 animated:(BOOL)arg3;
-(VKAnchorWrapper *)externalAnchors;
-(void)removeExternalAnchor:(id)arg1;
-(void)addExternalAnchor:(id)arg1;
-(void)stylesheetAnimationDidEnd:(BOOL)arg1;
-(BOOL)canEnter3DMode;
-(BOOL)isPitched;
-(void)stylesheetAnimationWillStartFromStyle:(unsigned long long)arg1 toStyle:(unsigned long long)arg2;
-(void)stylesheetAnimationDidProgress:(float)arg1;
-(void)requestStylesheetAnimation:(id)arg1 targetMapDisplayStyle:(unsigned long long)arg2 setupHandler:(/*^block*/id)arg3;
-(double)_styleTransitionProgress;
-(void)_setStyleTransitionProgress:(double)arg1 targetStyle:(unsigned long long)arg2 step:(long long)arg3;
-(double)presentationYaw;
-(double)altitude;
-(void)setMapRegion:(id)arg1 animated:(BOOL)arg2;
-(GEOMapRegion *)mapRegion;
-(GEOMapRegion *)mapRegionOfInterest;
-(id)consoleString:(BOOL)arg1;
-(VKPoint*)centerCoordinate;
-(void)setCenterCoordinate:(SCD_Struct_VK23)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 timingCurve:(/*^block*/id)arg6 completion:(/*^block*/id)arg7;
-(void)setYaw:(double)arg1 animated:(BOOL)arg2;
-(void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(BOOL)arg4;
-(void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(BOOL)arg4 completion:(/*^block*/id)arg5;
-(void)animateToMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(/*^block*/id)arg5;
-(double)durationToAnimateToMapRegion:(id)arg1;
-(SCD_Struct_VK23*)convertPointToCoordinate:(CGPoint)arg1;
-(SCD_Struct_VK23*)convertPointToMapPoint:(CGPoint)arg1;
-(CGPoint*)convertMapPointToPoint:(SCD_Struct_VK23)arg1;
-(CGPoint*)convertCoordinateToPoint:(SCD_Struct_VK23)arg1;
-(CGPoint*)convertCoordinateToCameraModelPoint:(SCD_Struct_VK23)arg1;
-(id)annotationMarkerForSelectionAtPoint:(CGPoint)arg1 avoidCurrent:(BOOL)arg2;
-(id)labelMarkerForSelectionAtPoint:(CGPoint)arg1 selectableLabelsOnly:(BOOL)arg2;
-(void)selectLabelMarker:(id)arg1;
-(void)enter3DMode;
-(void)exit3DMode;
-(BOOL)isFullyPitched;
-(void)panWithOffset:(CGPoint)arg1 relativeToScreenPoint:(CGPoint)arg2 animated:(BOOL)arg3 duration:(double)arg4 completionHandler:(/*^block*/id)arg5;
-(void)deselectAnnotationMarker:(id)arg1;
-(BOOL)shouldHideOffscreenSelectedAnnotation;
-(id)selectedLabelMarker;
-(id)labelMarkers;
-(BOOL)isAnimatingToTrackAnnotation;
-(id)viewportInfo;
-(BOOL)restoreViewportFromInfo:(id)arg1;
-(void)zoomToLevel:(double)arg1 withFocusPoint:(CGPoint)arg2;
-(void)zoom:(double)arg1 withFocusPoint:(CGPoint)arg2 completionHandler:(/*^block*/id)arg3;
-(void)startPinchingWithFocusPoint:(CGPoint)arg1;
-(void)updatePinchWithFocusPoint:(CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
-(void)stopPinchingWithFocusPoint:(CGPoint)arg1;
-(void)startPanningAtPoint:(CGPoint)arg1 panAtStartPoint:(BOOL)arg2;
-(void)updatePanWithTranslation:(CGPoint)arg1;
-(void)stopPanningAtPoint:(CGPoint)arg1;
-(void)didStartPanningDeceleration;
-(void)startRotatingWithFocusPoint:(CGPoint)arg1;
-(void)updateRotationWithFocusPoint:(CGPoint)arg1 newValue:(double)arg2;
-(void)stopRotatingWithFocusPoint:(CGPoint)arg1;
-(void)startPitchingWithFocusPoint:(CGPoint)arg1;
-(void)updatePitchWithFocusPoint:(CGPoint)arg1 translation:(double)arg2;
-(void)stopPitchingWithFocusPoint:(CGPoint)arg1;
-(BOOL)isPointValidForGesturing:(CGPoint)arg1;
-(void)stopSnappingAnimations;
-(BOOL)isFullyDrawn;
-(void)setMapRegion:(id)arg1;
-(void)setStylesheetMapDisplayStyle:(unsigned long long)arg1;
-(VKPoint*)screenPointForPoint:(CGPoint)arg1;

@end

