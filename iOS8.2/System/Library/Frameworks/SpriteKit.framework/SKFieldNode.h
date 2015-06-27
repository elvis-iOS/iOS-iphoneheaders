/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:51 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class PKPhysicsField, SKRegion, SKTexture;

@interface SKFieldNode : SKNode {

	PKPhysicsField* _field;
	SKRegion* _region;
	float _smoothness;
	float _animationSpeed;
	SKTexture* _texture;
	char _exclusive;

}

@property (nonatomic,retain) SKRegion * region; 
@property (assign,nonatomic) float strength; 
@property (assign,nonatomic) float falloff; 
@property (assign,nonatomic) float minimumRadius; 
@property (assign,getter=isEnabled,nonatomic) char enabled; 
@property (assign,getter=isExclusive,nonatomic) char exclusive;              //@synthesize exclusive=_exclusive - In the implementation block
@property (assign,nonatomic) unsigned categoryBitMask; 
@property (assign,nonatomic)  direction; 
@property (assign,nonatomic) float smoothness; 
@property (assign,nonatomic) float animationSpeed; 
@property (nonatomic,retain) SKTexture * texture; 
+(id)dragField;
+(id)vortexField;
+(id)radialGravityField;
+(id)noiseFieldWithSmoothness:(float)arg1 animationSpeed:(float)arg2 ;
+(id)turbulenceFieldWithSmoothness:(float)arg1 animationSpeed:(float)arg2 ;
+(id)springField;
+(id)electricField;
+(id)magneticField;
+(id)customFieldWithEvaluationBlock:(/*^block*/id)arg1 ;
+(id)linearGravityFieldWithVector:;
+(id)velocityFieldWithVector:;
+(id)velocityFieldWithTexture:(id)arg1 ;
-(float)falloff;
-(void)setFalloff:(float)arg1 ;
-(void)setSmoothness:(float)arg1 ;
-(void)setAnimationSpeed:(float)arg1 ;
-(char)isExclusive;
-(void)setExclusive:(char)arg1 ;
-(float)smoothness;
-(float)animationSpeed;
-(void)setMinimumRadius:(float)arg1 ;
-(float)minimumRadius;
-(id)_descriptionClassName;
-(id)initWithCoder:(id)arg1 field:(id)arg2 ;
-(char)isEqualToNode:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDirection:;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-()direction;
-(void)setRegion:(SKRegion *)arg1 ;
-(SKRegion *)region;
-(float)strength;
-(void)setStrength:(float)arg1 ;
-(unsigned)categoryBitMask;
-(void)setCategoryBitMask:(unsigned)arg1 ;
-(id)field;
-(SKTexture *)texture;
-(void)setTexture:(SKTexture *)arg1 ;
@end
