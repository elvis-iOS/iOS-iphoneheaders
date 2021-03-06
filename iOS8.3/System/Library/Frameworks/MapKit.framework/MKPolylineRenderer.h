/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:56:25 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayPathRenderer.h>

@class MKPolyline;

@interface MKPolylineRenderer : MKOverlayPathRenderer

@property (nonatomic,readonly) MKPolyline * polyline; 
-(void)drawMapRect:(SCD_Struct_MK2)arg1 zoomScale:(float)arg2 inContext:(CGContextRef)arg3 ;
-(id)initWithPolyline:(id)arg1 ;
-(void)createPath;
-(MKPolyline *)polyline;
@end

