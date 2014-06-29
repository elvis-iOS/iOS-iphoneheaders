/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@protocol _UIBackdropViewObserver, _UIBackdropViewGraphicsQualityChangeDelegate;
@class NSHashTable, _UIBackdropViewSettings, _UIBackdropEffectView, NSString, UIImage, UIView, CAFilter, NSMutableSet, NSMutableDictionary, UIColor;

@interface _UIBackdropView : UIView {

	bool _autosizesToFitSuperview;
	bool _computesColorSettings;
	bool _appliesOutputSettingsAutomatically;
	bool _appliesOutputSettingsAutomaticallyEnabledComputesColorSettings;
	bool _applyingBackdropChanges;
	bool _applyingTransition;
	bool _requiresTintViews;
	bool _wantsColorSettings;
	bool _blursBackground;
	bool _allowsColorSettingsSuppression;
	bool _contentViewAccessed;
	bool _contentViewAccessorGuard;
	bool _applySettingsAfterLayout;
	bool _updateMaskViewsForViewReentrancyGuard;
	bool _simulatesMasks;
	bool _backdropVisibilitySetOnce;
	bool _blurRadiusSetOnce;
	bool __backdropVisible;
	bool __zoomsBack;
	long long _style;
	NSHashTable* _observers;
	<_UIBackdropViewObserver>* _observer;
	double _appliesOutputSettingsAnimationDuration;
	_UIBackdropViewSettings* _inputSettings;
	_UIBackdropViewSettings* _outputSettings;
	_UIBackdropViewSettings* _savedInputSettingsDuringRenderInContext;
	long long _configuration;
	_UIBackdropEffectView* _backdropEffectView;
	NSString* _groupName;
	UIImage* _filterMaskImage;
	UIView* _grayscaleTintView;
	UIImage* _grayscaleTintMaskImage;
	UIView* _colorTintView;
	UIImage* _colorTintMaskImage;
	UIView* _colorBurnTintView;
	UIImage* _colorBurnTintMaskImage;
	CAFilter* _gaussianBlurFilter;
	CAFilter* _colorSaturateFilter;
	CAFilter* _tintFilter;
	UIView* _contentView;
	UIView* _darkeningTintView;
	UIImage* _darkeningTintMaskImage;
	long long _maskMode;
	NSMutableSet* _partialMaskViews;
	UIView* _grayscaleTintMaskViewContainer;
	NSMutableDictionary* _grayscaleTintMaskViewMap;
	UIView* _colorTintMaskViewContainer;
	NSMutableDictionary* _colorTintMaskViewMap;
	UIView* _filterMaskViewContainer;
	NSMutableDictionary* _filterMaskViewMap;
	id _computeAndApplySettingsNotificationObserver;
	double _colorMatrixGrayscaleTintLevel;
	double _colorMatrixGrayscaleTintAlpha;
	UIColor* _colorMatrixColorTint;
	double _colorMatrixColorTintAlpha;
	long long _blurHardEdges;
	CFRunLoopObserverRef _updateInputBoundsRunLoopObserver;
	double _previousBackdropStatisticsRed;
	double _previousBackdropStatisticsGreen;
	double _previousBackdropStatisticsBlue;
	double _previousBackdropStatisticsContrast;
	<_UIBackdropViewGraphicsQualityChangeDelegate>* _graphicsQualityChangeDelegate;
	NSString* __blurQuality;
	double __blurRadius;
	double __saturationDeltaFactor;

}

@property (assign,nonatomic) long long style;                                                                             //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) bool autosizesToFitSuperview;                                                                //@synthesize autosizesToFitSuperview=_autosizesToFitSuperview - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                                                     //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) <_UIBackdropViewObserver> * observer;                                                        //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) bool computesColorSettings;                                                                  //@synthesize computesColorSettings=_computesColorSettings - In the implementation block
@property (assign,nonatomic) bool appliesOutputSettingsAutomatically;                                                     //@synthesize appliesOutputSettingsAutomatically=_appliesOutputSettingsAutomatically - In the implementation block
@property (assign,nonatomic) double appliesOutputSettingsAnimationDuration;                                               //@synthesize appliesOutputSettingsAnimationDuration=_appliesOutputSettingsAnimationDuration - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * inputSettings;                                                     //@synthesize inputSettings=_inputSettings - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * outputSettings;                                                    //@synthesize outputSettings=_outputSettings - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * savedInputSettingsDuringRenderInContext;                           //@synthesize savedInputSettingsDuringRenderInContext=_savedInputSettingsDuringRenderInContext - In the implementation block
@property (nonatomic,@dynamic,readonly) UIView * effectView; 
@property (assign,nonatomic) long long configuration;                                                                     //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) bool appliesOutputSettingsAutomaticallyEnabledComputesColorSettings;                         //@synthesize appliesOutputSettingsAutomaticallyEnabledComputesColorSettings=_appliesOutputSettingsAutomaticallyEnabledComputesColorSettings - In the implementation block
@property (assign,nonatomic) bool applyingBackdropChanges;                                                                //@synthesize applyingBackdropChanges=_applyingBackdropChanges - In the implementation block
@property (assign,nonatomic) bool applyingTransition;                                                                     //@synthesize applyingTransition=_applyingTransition - In the implementation block
@property (assign,nonatomic) bool requiresTintViews;                                                                      //@synthesize requiresTintViews=_requiresTintViews - In the implementation block
@property (assign,nonatomic) bool wantsColorSettings;                                                                     //@synthesize wantsColorSettings=_wantsColorSettings - In the implementation block
@property (assign,nonatomic) bool blursBackground;                                                                        //@synthesize blursBackground=_blursBackground - In the implementation block
@property (assign,nonatomic) bool allowsColorSettingsSuppression;                                                         //@synthesize allowsColorSettingsSuppression=_allowsColorSettingsSuppression - In the implementation block
@property (nonatomic,retain) _UIBackdropEffectView * backdropEffectView;                                                  //@synthesize backdropEffectView=_backdropEffectView - In the implementation block
@property (nonatomic,copy) NSString * groupName;                                                                          //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,retain) UIImage * filterMaskImage;                                                                   //@synthesize filterMaskImage=_filterMaskImage - In the implementation block
@property (nonatomic,retain) UIView * grayscaleTintView;                                                                  //@synthesize grayscaleTintView=_grayscaleTintView - In the implementation block
@property (nonatomic,retain) UIImage * grayscaleTintMaskImage;                                                            //@synthesize grayscaleTintMaskImage=_grayscaleTintMaskImage - In the implementation block
@property (nonatomic,retain) UIView * colorTintView;                                                                      //@synthesize colorTintView=_colorTintView - In the implementation block
@property (nonatomic,retain) UIImage * colorTintMaskImage;                                                                //@synthesize colorTintMaskImage=_colorTintMaskImage - In the implementation block
@property (nonatomic,retain) UIView * colorBurnTintView;                                                                  //@synthesize colorBurnTintView=_colorBurnTintView - In the implementation block
@property (nonatomic,retain) UIImage * colorBurnTintMaskImage;                                                            //@synthesize colorBurnTintMaskImage=_colorBurnTintMaskImage - In the implementation block
@property (nonatomic,retain) CAFilter * gaussianBlurFilter;                                                               //@synthesize gaussianBlurFilter=_gaussianBlurFilter - In the implementation block
@property (nonatomic,retain) CAFilter * colorSaturateFilter;                                                              //@synthesize colorSaturateFilter=_colorSaturateFilter - In the implementation block
@property (nonatomic,retain) CAFilter * tintFilter;                                                                       //@synthesize tintFilter=_tintFilter - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                                        //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * darkeningTintView;                                                                  //@synthesize darkeningTintView=_darkeningTintView - In the implementation block
@property (nonatomic,retain) UIImage * darkeningTintMaskImage;                                                            //@synthesize darkeningTintMaskImage=_darkeningTintMaskImage - In the implementation block
@property (assign,nonatomic) bool contentViewAccessed;                                                                    //@synthesize contentViewAccessed=_contentViewAccessed - In the implementation block
@property (assign,nonatomic) bool contentViewAccessorGuard;                                                               //@synthesize contentViewAccessorGuard=_contentViewAccessorGuard - In the implementation block
@property (assign,nonatomic) long long maskMode;                                                                          //@synthesize maskMode=_maskMode - In the implementation block
@property (nonatomic,retain) NSMutableSet * partialMaskViews;                                                             //@synthesize partialMaskViews=_partialMaskViews - In the implementation block
@property (nonatomic,retain) UIView * grayscaleTintMaskViewContainer;                                                     //@synthesize grayscaleTintMaskViewContainer=_grayscaleTintMaskViewContainer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * grayscaleTintMaskViewMap;                                              //@synthesize grayscaleTintMaskViewMap=_grayscaleTintMaskViewMap - In the implementation block
@property (nonatomic,retain) UIView * colorTintMaskViewContainer;                                                         //@synthesize colorTintMaskViewContainer=_colorTintMaskViewContainer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * colorTintMaskViewMap;                                                  //@synthesize colorTintMaskViewMap=_colorTintMaskViewMap - In the implementation block
@property (nonatomic,retain) UIView * filterMaskViewContainer;                                                            //@synthesize filterMaskViewContainer=_filterMaskViewContainer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * filterMaskViewMap;                                                     //@synthesize filterMaskViewMap=_filterMaskViewMap - In the implementation block
@property (assign,nonatomic) bool applySettingsAfterLayout;                                                               //@synthesize applySettingsAfterLayout=_applySettingsAfterLayout - In the implementation block
@property (nonatomic,retain) id computeAndApplySettingsNotificationObserver;                                              //@synthesize computeAndApplySettingsNotificationObserver=_computeAndApplySettingsNotificationObserver - In the implementation block
@property (assign,nonatomic) bool updateMaskViewsForViewReentrancyGuard;                                                  //@synthesize updateMaskViewsForViewReentrancyGuard=_updateMaskViewsForViewReentrancyGuard - In the implementation block
@property (assign,nonatomic) double colorMatrixGrayscaleTintLevel;                                                        //@synthesize colorMatrixGrayscaleTintLevel=_colorMatrixGrayscaleTintLevel - In the implementation block
@property (assign,nonatomic) double colorMatrixGrayscaleTintAlpha;                                                        //@synthesize colorMatrixGrayscaleTintAlpha=_colorMatrixGrayscaleTintAlpha - In the implementation block
@property (nonatomic,retain) UIColor * colorMatrixColorTint;                                                              //@synthesize colorMatrixColorTint=_colorMatrixColorTint - In the implementation block
@property (assign,nonatomic) double colorMatrixColorTintAlpha;                                                            //@synthesize colorMatrixColorTintAlpha=_colorMatrixColorTintAlpha - In the implementation block
@property (assign,nonatomic) bool simulatesMasks;                                                                         //@synthesize simulatesMasks=_simulatesMasks - In the implementation block
@property (assign,nonatomic) long long blurHardEdges;                                                                     //@synthesize blurHardEdges=_blurHardEdges - In the implementation block
@property (assign,nonatomic) CFRunLoopObserverRef updateInputBoundsRunLoopObserver;                                       //@synthesize updateInputBoundsRunLoopObserver=_updateInputBoundsRunLoopObserver - In the implementation block
@property (assign,nonatomic) bool backdropVisibilitySetOnce;                                                              //@synthesize backdropVisibilitySetOnce=_backdropVisibilitySetOnce - In the implementation block
@property (assign,nonatomic) bool blurRadiusSetOnce;                                                                      //@synthesize blurRadiusSetOnce=_blurRadiusSetOnce - In the implementation block
@property (assign,nonatomic) double previousBackdropStatisticsRed;                                                        //@synthesize previousBackdropStatisticsRed=_previousBackdropStatisticsRed - In the implementation block
@property (assign,nonatomic) double previousBackdropStatisticsGreen;                                                      //@synthesize previousBackdropStatisticsGreen=_previousBackdropStatisticsGreen - In the implementation block
@property (assign,nonatomic) double previousBackdropStatisticsBlue;                                                       //@synthesize previousBackdropStatisticsBlue=_previousBackdropStatisticsBlue - In the implementation block
@property (assign,nonatomic) double previousBackdropStatisticsContrast;                                                   //@synthesize previousBackdropStatisticsContrast=_previousBackdropStatisticsContrast - In the implementation block
@property (assign,nonatomic) <_UIBackdropViewGraphicsQualityChangeDelegate> * graphicsQualityChangeDelegate;              //@synthesize graphicsQualityChangeDelegate=_graphicsQualityChangeDelegate - In the implementation block
@property (nonatomic,copy) NSString * _blurQuality;                                                                       //@synthesize _blurQuality=__blurQuality - In the implementation block
@property (assign,nonatomic) double _blurRadius;                                                                          //@synthesize _blurRadius=__blurRadius - In the implementation block
@property (assign,nonatomic) double _saturationDeltaFactor;                                                               //@synthesize _saturationDeltaFactor=__saturationDeltaFactor - In the implementation block
@property (assign,nonatomic) bool _backdropVisible;                                                                       //@synthesize _backdropVisible=__backdropVisible - In the implementation block
@property (assign,setter=setZoomsBack:,nonatomic) bool _zoomsBack;                                                        //@synthesize _zoomsBack=__zoomsBack - In the implementation block
+(Class)layerClass;
+(id)allBackdropViews;
+(Class)defaultSettingsClass;
+(void)suppressColorSettingsForRunLoopModePush:(id)arg1 ;
+(void)restoreColorSettingsForRunLoopModePop:(id)arg1 ;
+(void)suppressColorSettingsForWillResignActive:(id)arg1 ;
+(void)restoreColorSettingsForDidBecomeActive:(id)arg1 ;
+(void)suppressColorSettingsForRequester:(id)arg1 ;
+(void)restoreColorSettingsForRequester:(id)arg1 ;
+(void)setAllBackdropViewsToGraphicsQuality:(long long)arg1 ;
+(void)adjustGraphicsQualityForAccessibilityIfNeeded:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(id)grayscaleTintMaskImage;
-(id)colorTintMaskImage;
-(id)filterMaskImage;
-(double)blurRadius;
-(double)saturationDeltaFactor;
-(long long)style;
-(void)setBlurRadius:(double)arg1 ;
-(void)setSaturationDeltaFactor:(double)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)contentView;
-(void)setContentView:(id)arg1 ;
-(void)didMoveToSuperview;
-(id)filters;
-(void)setGroupName:(id)arg1 ;
-(void)setGraphicsQualityChangeDelegate:(id)arg1 ;
-(id)initWithPrivateStyle:(long long)arg1 ;
-(id)inputSettings;
-(void)setBlurHardEdges:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)updateMaskViewsForView:(id)arg1 ;
-(void)applySettings:(id)arg1 ;
-(void)setComputesColorSettings:(bool)arg1 ;
-(void)setAllowsColorSettingsSuppression:(bool)arg1 ;
-(void)setConfiguration:(long long)arg1 ;
-(id)grayscaleTintMaskViewContainer;
-(id)colorTintMaskViewContainer;
-(id)filterMaskViewContainer;
-(void)transitionToStyle:(long long)arg1 ;
-(bool)computesColorSettings;
-(void)willCallRenderInContextOnBackdropViewLayer;
-(void)didCallRenderInContextOnBackdropViewLayer;
-(id)groupName;
-(void)setBackdropVisible:(bool)arg1 ;
-(void)setGrayscaleTintMaskImage:(id)arg1 ;
-(void)setColorTintMaskImage:(id)arg1 ;
-(void)setFilterMaskImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 privateStyle:(long long)arg2 ;
-(void)transitionToPrivateStyle:(long long)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(void)setShouldRasterizeEffectsView:(bool)arg1 ;
-(id)effectView;
-(void)setDisablesOccludedBackdropBlurs:(bool)arg1 ;
-(void)transitionToSettings:(id)arg1 ;
-(void)setDarkeningTintMaskImage:(id)arg1 ;
-(void)setBlurQuality:(id)arg1 ;
-(void)setZoomsBack:(bool)arg1 ;
-(bool)isBackdropVisible;
-(id)blurQuality;
-(long long)blurHardEdges;
-(id)colorBurnTintMaskImage;
-(void)setColorBurnTintMaskImage:(id)arg1 ;
-(id)darkeningTintMaskImage;
-(void)settingsDidChange:(id)arg1 ;
-(void)setBlursWithHardEdges:(bool)arg1 ;
-(bool)blursWithHardEdges;
-(bool)_backdropVisible;
-(bool)_zoomsBack;
-(double)_blurRadius;
-(id)_blurQuality;
-(double)_saturationDeltaFactor;
-(void)setAppliesOutputSettingsAnimationDuration:(double)arg1 ;
-(id)outputSettings;
-(void)backdropLayerStatisticsDidChange:(id)arg1 ;
-(bool)allowsColorSettingsSuppression;
-(void)setWantsColorSettings:(bool)arg1 ;
-(bool)wantsColorSettings;
-(id)graphicsQualityChangeDelegate;
-(id)backdropViewLayer;
-(void)setAutosizesToFitSuperview:(bool)arg1 ;
-(bool)autosizesToFitSuperview;
-(void)setInputSettings:(id)arg1 ;
-(void)setOutputSettings:(id)arg1 ;
-(void)setObservers:(id)arg1 ;
-(void)updateSubviewHierarchyIfNeededForSettings:(id)arg1 ;
-(void)computeAndApplySettings:(id)arg1 ;
-(void)setComputeAndApplySettingsNotificationObserver:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 autosizesToFitSuperview:(bool)arg2 settings:(id)arg3 ;
-(id)computeAndApplySettingsNotificationObserver;
-(void)clearUpdateInputBoundsRunLoopObserver;
-(id)backdropEffectView;
-(bool)applyingBackdropChanges;
-(bool)appliesOutputSettingsAutomatically;
-(void)applySettingsWithBuiltInAnimation:(id)arg1 ;
-(id)observers;
-(void)setApplyingBackdropChanges:(bool)arg1 ;
-(void)delayedComputeAndApplySettings;
-(void)addObserver:(id)arg1 ;
-(void)setAppliesOutputSettingsAutomaticallyEnabledComputesColorSettings:(bool)arg1 ;
-(bool)appliesOutputSettingsAutomaticallyEnabledComputesColorSettings;
-(void)setApplySettingsAfterLayout:(bool)arg1 ;
-(bool)applySettingsAfterLayout;
-(void)adjustTintImplementationIfNeeded:(id)arg1 ;
-(void)_updateInputBounds;
-(void)setMaskImage:(id)arg1 onLayer:(id)arg2 ;
-(id)grayscaleTintView;
-(id)colorTintView;
-(id)colorBurnTintView;
-(id)darkeningTintView;
-(id)grayscaleTintMaskViewMap;
-(id)colorTintMaskViewMap;
-(id)filterMaskViewMap;
-(long long)maskMode;
-(void)setGrayscaleTintMaskViewMap:(id)arg1 ;
-(void)setGrayscaleTintMaskViewContainer:(id)arg1 ;
-(void)setColorTintMaskViewMap:(id)arg1 ;
-(void)setColorTintMaskViewContainer:(id)arg1 ;
-(void)setFilterMaskViewMap:(id)arg1 ;
-(void)setFilterMaskViewContainer:(id)arg1 ;
-(bool)simulatesMasks;
-(void)removeOverlayBlendModeFromView:(id)arg1 ;
-(void)applyOverlayBlendModeToView:(id)arg1 ;
-(bool)updateMaskViewsForViewReentrancyGuard;
-(void)setUpdateMaskViewsForViewReentrancyGuard:(bool)arg1 ;
-(id)partialMaskViews;
-(void)setPartialMaskViews:(id)arg1 ;
-(void)updateMaskViewForView:(id)arg1 flag:(long long)arg2 ;
-(id)gaussianBlurFilter;
-(id)colorSaturateFilter;
-(id)tintFilter;
-(bool)blurRadiusSetOnce;
-(void)setBlurRadiusSetOnce:(bool)arg1 ;
-(void)setBlurFilterWithRadius:(double)arg1 blurQuality:(id)arg2 ;
-(void)setBlurFilterWithRadius:(double)arg1 blurQuality:(id)arg2 blurHardEdges:(long long)arg3 ;
-(void)setGaussianBlurFilter:(id)arg1 ;
-(void)_updateFilters;
-(void)scheduleUpdateInputBoundsIfNeeded;
-(CFRunLoopObserverRef)updateInputBoundsRunLoopObserver;
-(void)setUpdateInputBoundsRunLoopObserver:(CFRunLoopObserverRef)arg1 ;
-(void)setColorSaturateFilter:(id)arg1 ;
-(void)setTintFilter:(id)arg1 ;
-(double)colorMatrixGrayscaleTintLevel;
-(double)colorMatrixGrayscaleTintAlpha;
-(double)colorMatrixColorTintAlpha;
-(id)colorMatrixColorTint;
-(void)setColorMatrixGrayscaleTintLevel:(double)arg1 ;
-(void)setColorMatrixGrayscaleTintAlpha:(double)arg1 ;
-(void)setColorMatrixColorTint:(id)arg1 ;
-(void)setColorMatrixColorTintAlpha:(double)arg1 ;
-(bool)backdropVisibilitySetOnce;
-(void)setBackdropVisibilitySetOnce:(bool)arg1 ;
-(void)ensureProperSubviewOrdering;
-(long long)configuration;
-(void)setApplyingTransition:(bool)arg1 ;
-(void)prepareForTransitionToSettings:(id)arg1 ;
-(void)computeAndApplySettingsForTransition;
-(void)transitionIncrementallyToStyle:(long long)arg1 weighting:(double)arg2 ;
-(bool)applyingTransition;
-(bool)contentViewAccessorGuard;
-(void)setContentViewAccessorGuard:(bool)arg1 ;
-(void)setContentViewAccessed:(bool)arg1 ;
-(void)addBackdropEffectViewIfNeededForSettings:(id)arg1 ;
-(void)addGrayscaleTintViewIfNeededForSettings:(id)arg1 ;
-(void)addColorTintViewIfNeededForSettings:(id)arg1 ;
-(void)addColorBurnTintViewIfNeededForSettings:(id)arg1 ;
-(void)addContentViewIfNeededForSettings:(id)arg1 ;
-(void)addDarkeningTintViewIfNeededForSettings:(id)arg1 ;
-(void)setBackdropEffectView:(id)arg1 ;
-(void)setAppliesOutputSettingsAutomatically:(bool)arg1 ;
-(void)setGrayscaleTintView:(id)arg1 ;
-(void)setColorTintView:(id)arg1 ;
-(void)setColorBurnTintView:(id)arg1 ;
-(void)setDarkeningTintView:(id)arg1 ;
-(bool)contentViewAccessed;
-(bool)requiresTintViews;
-(void)setTintFilterForSettings:(id)arg1 ;
-(void)transitionComplete;
-(double)appliesOutputSettingsAnimationDuration;
-(bool)disablesOccludedBackdropBlurs;
-(id)initWithFrame:(CGRect)arg1 settings:(id)arg2 ;
-(void)setObserver:(id)arg1 ;
-(void)setMaskMode:(long long)arg1 ;
-(void)removeMaskViews;
-(void)applyOverlayBlendMode:(long long)arg1 toView:(id)arg2 ;
-(void)setUsesZoom;
-(void)_setBlursBackground:(bool)arg1 ;
-(void)transitionToColor:(id)arg1 ;
-(void)transitionIncrementallyToPrivateStyle:(long long)arg1 weighting:(double)arg2 ;
-(id)observer;
-(id)savedInputSettingsDuringRenderInContext;
-(void)setSavedInputSettingsDuringRenderInContext:(id)arg1 ;
-(void)setRequiresTintViews:(bool)arg1 ;
-(bool)blursBackground;
-(void)setBlursBackground:(bool)arg1 ;
-(void)setSimulatesMasks:(bool)arg1 ;
-(double)previousBackdropStatisticsRed;
-(void)setPreviousBackdropStatisticsRed:(double)arg1 ;
-(double)previousBackdropStatisticsGreen;
-(void)setPreviousBackdropStatisticsGreen:(double)arg1 ;
-(double)previousBackdropStatisticsBlue;
-(void)setPreviousBackdropStatisticsBlue:(double)arg1 ;
-(double)previousBackdropStatisticsContrast;
-(void)setPreviousBackdropStatisticsContrast:(double)arg1 ;
-(void)set_blurQuality:(id)arg1 ;
-(void)set_blurRadius:(double)arg1 ;
-(void)set_saturationDeltaFactor:(double)arg1 ;
-(void)set_backdropVisible:(bool)arg1 ;
@end
