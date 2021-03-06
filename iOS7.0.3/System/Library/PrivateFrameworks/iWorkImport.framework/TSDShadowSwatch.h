/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDPathPainter.h>

@class TSDShadow;

@interface TSDShadowSwatch : NSObject <TSDPathPainter> {

	TSDShadow* mShadow;

}

@property (nonatomic,readonly) TSDShadow * shadow; 
-(void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 forImage:(CGImageRef)arg3 swatchRect:(CGRect)arg4 wantsStroke:(BOOL)arg5 ;
-(void)p_drawContactShadowInContext:(CGContextRef)arg1 inRect:(CGRect)arg2 forShadow:(id)arg3 forImage:(CGImageRef)arg4 forSwatchRect:(CGRect)arg5 ;
-(void)p_drawCurvedShadowInContext:(CGContextRef)arg1 inRect:(CGRect)arg2 forShadow:(id)arg3 forImage:(CGImageRef)arg4 forSwatchRect:(CGRect)arg5 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)shadow;
-(void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(id)initWithShadow:(id)arg1 ;
@end

