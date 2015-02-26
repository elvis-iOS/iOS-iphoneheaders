/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:29 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSCHCompositeRendering <NSObject>
@optional
-(void)willBeginTransparencyLayer:(int)arg1 inContext:(CGContextRef)arg2;
-(void)didBeginTransparencyLayer:(int)arg1 inContext:(CGContextRef)arg2;
-(void)willEndTransparencyLayer:(int)arg1 inContext:(CGContextRef)arg2;
-(void)didEndTransparencyLayer:(int)arg1 inContext:(CGContextRef)arg2;

@required
-(id)transparencyLayers;
-(void)drawIntoLayer:(int)arg1 inContext:(CGContextRef)arg2 visible:(CGRect)arg3;
-(BOOL)needsAnySeparateLayers;

@end
