/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableDictionary, NSMutableSet, NSString;

@interface TSDGLShader : NSObject {

	NSMutableDictionary* _uniforms;
	NSMutableSet* _uniformsNeedingUpdate;
	NSMutableDictionary* _attributeLocations;
	bool _isActive;
	unsigned _programObject;
	NSString* _name;

}

@property (nonatomic,copy) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned programObject;              //@synthesize programObject=_programObject - In the implementation block
@property (nonatomic,readonly) bool isActive;                       //@synthesize isActive=_isActive - In the implementation block
+(id)defaultVelocityVisualizerFragmentShaderString;
-(int)locationForAttribute:(id)arg1 ;
-(id)initWithVertexShaderFileName:(id)arg1 fragmentShaderFileName:(id)arg2 bundle:(id)arg3 uniforms:(id)arg4 attributes:(id)arg5 defines:(id)arg6 ;
-(void)setGLint:(int)arg1 forUniform:(id)arg2 ;
-(void)setGLFloat:(float)arg1 forUniform:(id)arg2 ;
-(void)setPoint4D:(tquat<float>)arg1 forUniform:(id)arg2 ;
-(id)initWithShaderFileName:(id)arg1 bundle:(id)arg2 uniforms:(id)arg3 attributes:(id)arg4 defines:(id)arg5 ;
-(id)p_contentsOfShader:(id)arg1 extension:(id)arg2 bundle:(id)arg3 ;
-(id)initWithVertexShader:(id)arg1 fragmentShader:(id)arg2 uniforms:(id)arg3 attributes:(id)arg4 defines:(id)arg5 ;
-(bool)loadVertexShader:(id)arg1 fragmentShader:(id)arg2 defines:(id)arg3 ;
-(unsigned)programObject;
-(bool)p_compileShader:(unsigned*)arg1 withType:(unsigned)arg2 shaderString:(id)arg3 defines:(id)arg4 ;
-(id)p_qualifierForUniform:(id)arg1 class:(Class)arg2 ;
-(void)p_setQualifiersIfNecessary;
-(void)setGLint:(int)arg1 forShaderQualifier:(id)arg2 ;
-(id)shaderQualifierForUniform:(id)arg1 type:(long long)arg2 ;
-(void)setGLFloat:(float)arg1 forShaderQualifier:(id)arg2 ;
-(void)setPoint2D:(SCD_Struct_TS479)arg1 forShaderQualifier:(id)arg2 ;
-(void)setPoint2D:(SCD_Struct_TS479)arg1 forUniform:(id)arg2 ;
-(void)setPoint3D:(SCD_Struct_TS483)arg1 forShaderQualifier:(id)arg2 ;
-(void)setPoint4D:(tquat<float>)arg1 forShaderQualifier:(id)arg2 ;
-(void)setMat3WithAffineTransform:(CGAffineTransform)arg1 forShaderQualifier:(id)arg2 ;
-(void)setMat4WithTransform3D:(CATransform3D)arg1 forShaderQualifier:(id)arg2 ;
-(id)initWithDefaultTextureShader;
-(id)initWithDefaultTextureCoordinatesShader;
-(id)initWithDefaultTextureAndOpacityShader;
-(id)initWithDefaultRandomColorShader;
-(id)initWithDefaultRandomColorTextureShader;
-(id)initWithDefaultVelocityShader;
-(id)initWithDefaultVelocityMeshShader;
-(id)initWithDefaultVelocityCollectionShader;
-(id)initWithDefaultVelocityVisualizerShader;
-(id)initWithDefaultVerticalBlurShader;
-(id)initWithDefaultHorizontalBlurShader;
-(id)initWithDefaultUniformMotionBlurShader;
-(id)initWithShaderFileName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithVertexShader:(id)arg1 fragmentShader:(id)arg2 ;
-(void)setInteger:(long long)arg1 forShaderQualifier:(id)arg2 ;
-(void)setInteger:(long long)arg1 forUniform:(id)arg2 ;
-(void)setCGFloat:(double)arg1 forShaderQualifier:(id)arg2 ;
-(void)setCGFloat:(double)arg1 forUniform:(id)arg2 ;
-(void)setLifeSpan:(SCD_Struct_TS479)arg1 forShaderQualifier:(id)arg2 ;
-(void)setLifeSpan:(SCD_Struct_TS479)arg1 forUniform:(id)arg2 ;
-(void)setPoint3D:(SCD_Struct_TS483)arg1 forUniform:(id)arg2 ;
-(void)setColor:(tquat<float>)arg1 forShaderQualifier:(id)arg2 ;
-(void)setColor:(tquat<float>)arg1 forUniform:(id)arg2 ;
-(void)setMat3WithAffineTransform:(CGAffineTransform)arg1 forUniform:(id)arg2 ;
-(void)setMat4WithTransform3D:(CATransform3D)arg1 forUniform:(id)arg2 ;
-(bool)validateUniforms;
-(void)dealloc;
-(id)description;
-(bool)isActive;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)deactivate;
-(void)activate;
-(int)locationForUniform:(id)arg1 ;
-(void)teardown;
@end

