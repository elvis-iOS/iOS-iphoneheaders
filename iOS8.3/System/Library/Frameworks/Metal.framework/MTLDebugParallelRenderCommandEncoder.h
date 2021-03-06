/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:01:20 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLToolsParallelRenderCommandEncoder.h>

@class MTLRenderPassDescriptor;

@interface MTLDebugParallelRenderCommandEncoder : MTLToolsParallelRenderCommandEncoder {

	MTLRenderPassDescriptor* _descriptor;

}

@property (nonatomic,copy,readonly) MTLRenderPassDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
-(id)renderCommandEncoder;
-(id)sampledRenderCommandEncoderWithProgramInfoBuffer:(SCD_Struct_MT21*)arg1 capacity:(unsigned)arg2 ;
-(id)initWithBaseRenderPass:(id)arg1 commandBuffer:(id)arg2 descriptor:(id)arg3 ;
-(id)description;
-(MTLRenderPassDescriptor *)descriptor;
@end

