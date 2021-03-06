/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GLKit/GLKit-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface GLKTextureInfo : NSObject <NSCopying> {

	unsigned name;
	unsigned target;
	unsigned width;
	unsigned height;
	int alphaState;
	int textureOrigin;
	bool containsMipmaps;

}

@property (readonly) unsigned name; 
@property (readonly) unsigned target; 
@property (readonly) unsigned width; 
@property (readonly) unsigned height; 
@property (readonly) int alphaState; 
@property (readonly) int textureOrigin; 
@property (readonly) bool containsMipmaps; 
-(int)alphaState;
-(int)textureOrigin;
-(bool)containsMipmaps;
-(id)initWithTexture:(id)arg1 textureName:(unsigned)arg2 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(unsigned)name;
-(unsigned)target;
-(unsigned)width;
-(unsigned)height;
@end

