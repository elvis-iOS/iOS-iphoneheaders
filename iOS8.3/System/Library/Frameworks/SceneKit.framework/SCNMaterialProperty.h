/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:08:55 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNAnimatable.h>
#import <SceneKit/NSSecureCoding.h>

@class NSString, SCNOrderedDictionary, UIColor;

@interface SCNMaterialProperty : NSObject <SCNAnimatable, NSSecureCoding> {

	id _reserved;
	unsigned _isPresentationInstance : 1;
	unsigned _isCommonProfileProperty : 1;
	id _parent;
	long _propertyType;
	NSString* _customSlotName;
	SCNOrderedDictionary* _animations;
	UIColor* _borderColor;
	unsigned char _contentType;
	id _contents;
	int _mappingChannel;
	float _intensity;
	float _maxAnisotropy;
	int _minificationFilter;
	int _magnificationFilter;
	int _mipFilter;
	int _wrapS;
	int _wrapT;
	_C3DEffectSlot* _customSlot;
	C3DImageRef _c3dImage;
	C3DTextureProxyRef _textureProxy;
	SCNMatrix4* _contentTransform;

}

@property (nonatomic,retain) id contents; 
@property (assign,nonatomic) float intensity; 
@property (assign,nonatomic) int minificationFilter; 
@property (assign,nonatomic) int magnificationFilter; 
@property (assign,nonatomic) int mipFilter; 
@property (assign,nonatomic) SCNMatrix4 contentsTransform; 
@property (assign,nonatomic) int wrapS; 
@property (assign,nonatomic) int wrapT; 
@property (nonatomic,retain) id borderColor; 
@property (assign,nonatomic) int mappingChannel; 
@property (assign,nonatomic) float maxAnisotropy; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)SCNJSExportProtocol;
+(C3DImageRef)copyC3DImageFromImage:(id)arg1 ;
+(id)copyImageFromC3DImage:(C3DImageRef)arg1 ;
+(C3DImageRef)_copyC3DImageFromImageData:(id)arg1 typeID:(unsigned long)arg2 ;
+(id)_copyImageFromC3DImage:(C3DImageRef)arg1 ;
+(id)materialPropertyWithContents:(id)arg1 ;
+(char)supportsSecureCoding;
-(C3DSceneRef)sceneRef;
-(void*)__CFObject;
-(void)_syncObjCAnimations;
-(_C3DAnimationManager*)animationManager;
-(void)_pauseAnimation:(char)arg1 forKey:(id)arg2 ;
-(void)pauseAnimationForKey:(id)arg1 ;
-(void)resumeAnimationForKey:(id)arg1 ;
-(char)isAnimationForKeyPaused:(id)arg1 ;
-(void)removeAnimationForKey:(id)arg1 fadeOutDuration:(float)arg2 ;
-(void)__removeAnimation:(id)arg1 forKey:(id)arg2 ;
-(_C3DAnimationChannel*)copyAnimationChannelForKeyPath:(id)arg1 ;
-(char)isPausedOrPausedByInheritance;
-(id)presentationInstance;
-(void)_syncObjCModel;
-(void)parentWillDie:(id)arg1 ;
-(id)initWithParent:(id)arg1 propertyType:(long)arg2 ;
-(void)copyPropertiesFrom:(id)arg1 ;
-(_C3DEffectCommonProfile*)commonProfile;
-(void)_setC3DImageRef:(C3DImageRef)arg1 ;
-(id)presentationMaterialProperty;
-(id)slotName;
-(long)propertyType;
-(void)_clearContents;
-(id)_animationPathForKey:(id)arg1 ;
-(void)_updateMaterialColor:(id)arg1 ;
-(_C3DEffectSlot*)effectSlot;
-(_C3DTextureSampler*)textureSampler;
-(void)_updateMaterialFilters;
-(int)_presentationMappingChannel;
-(void)_updateMaterialBorderColor:(id)arg1 ;
-(void)_updateMaterialAttachment:(id)arg1 ;
-(void)_updateMaterialImage:(id)arg1 ;
-(void)_updateMaterialSKScene:(id)arg1 ;
-(void)_updateMaterialSKTexture:(id)arg1 ;
-(void)_updateMaterialLayer:(id)arg1 ;
-(void)setSkScene:(id)arg1 ;
-(void)setSkTexture:(id)arg1 ;
-(_C3DEffectSlot*)effectSlotCreateIfNeeded:(char)arg1 ;
-(void)_updateMaterialProceduralContents:(id)arg1 ;
-(void)__allocateContentTransformIfNeeded;
-(void)_updateMaterialPropertyTransform:(C3DMatrix4x4)arg1 ;
-(int)minificationFilter;
-(int)magnificationFilter;
-(int)mipFilter;
-(void)setMipFilter:(int)arg1 ;
-(SCNMatrix4)contentsTransform;
-(int)wrapS;
-(void)setWrapS:(int)arg1 ;
-(int)wrapT;
-(void)setWrapT:(int)arg1 ;
-(float)intensity;
-(void)setIntensity:(float)arg1 ;
-(int)mappingChannel;
-(void)setMappingChannel:(int)arg1 ;
-(id)initPresentationMaterialPropertyWithModelProperty:(id)arg1 ;
-(C3DColor4)borderColor4;
-(void)_layerDidChange:(id)arg1 ;
-(float)maxAnisotropy;
-(void)setMaxAnisotropy:(float)arg1 ;
-(void)_customEncodingOfSCNMaterialProperty:(id)arg1 ;
-(void)_customDecodingOfSCNMaterialProperty:(id)arg1 ;
-(void)_didDecodeSCNMaterialProperty:(id)arg1 ;
-(id)initWithParent:(id)arg1 andCustomName:(id)arg2 ;
-(void)synchronizeCustomPropertyWithParent:(id)arg1 andCustomName:(id)arg2 ;
-(C3DImageRef)getC3DImageRef;
-(C3DColor4)color4;
-(id)pvrtcData;
-(id)skScene;
-(id)skTexture;
-(void)setProceduralContents:(id)arg1 ;
-(id)proceduralContents;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)layer;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)_setParent:(id)arg1 ;
-(void)addAnimation:(id)arg1 ;
-(id)image;
-(void)setLayer:(id)arg1 ;
-(id)animationKeys;
-(id)animationForKey:(id)arg1 ;
-(void)removeAnimationForKey:(id)arg1 ;
-(id)contents;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)setMagnificationFilter:(int)arg1 ;
-(void)removeAllAnimations;
-(void)setContents:(id)arg1 ;
-(void)setContentsTransform:(SCNMatrix4)arg1 ;
-(void)setBorderColor:(id)arg1 ;
-(id)color;
-(void)_setColor:(id)arg1 ;
-(void)setColor:(id)arg1 ;
-(id)content;
-(id)borderColor;
-(void)setAttachment:(id)arg1 ;
-(id)attachment;
-(void)setMinificationFilter:(int)arg1 ;
-(id)parent;
-(void)setContent:(id)arg1 ;
@end

