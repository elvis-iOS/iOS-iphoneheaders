/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DGLBindable.h>

@interface TSCH3DGLESRTT : NSObject <TSCH3DGLBindable> {

	unsigned mTexture;

}
+(bool)isTexturable;
+(id)colorbufferWithAllocatorInfo:(const RenderbufferAllocatorInfo*)arg1 ;
+(id)depthbufferWithAllocatorInfo:(const RenderbufferAllocatorInfo*)arg1 ;
+(id)bufferWithAllocatorInfo:(const RenderbufferAllocatorInfo*)arg1 internalFormat:(unsigned)arg2 format:(unsigned)arg3 attachment:(unsigned)arg4 ;
+(bool)isEqual:(id)arg1 ;
-(void)destroyResourcesInContext:(id)arg1 ;
-(void)deactivateInContext:(id)arg1 ;
-(void)bindInSession:(id)arg1 ;
-(id)initWithGLTexture:(unsigned)arg1 ;
-(void)dealloc;
-(bool)valid;
@end

