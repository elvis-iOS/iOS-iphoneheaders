/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:01:42 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoLibrary/PhotoLibrary-Structs.h>
@interface PLPlacesMapKitSupport : NSObject {

	Class _pinAnnotationViewClass;
	Class _annotationViewClass;
	Class _mapViewClass;
	Class _polylineClass;
	Class _polylineViewClass;
	SCD_Struct_PL20 _mapRectWorld;
	SCD_Struct_PL20 _mapRectNull;
	/*function pointer*/void* _mkMapRectMakeWithRadialDistance;
	/*function pointer*/void* _mkMapRectUnion;
	/*function pointer*/void* _mkMapRectIntersectsRect;
	/*function pointer*/void* _mkMapRectIntersectsMapRectWrappingMeridian;
	/*function pointer*/void* _mkCoordinateRegionForMapRect;
	/*function pointer*/void* _mkMapRectForCoordinateRegion;
	/*function pointer*/void* _mkMapPointForCoordinate;
	/*function pointer*/void* _mkCoordinateForMapPoint;
	/*function pointer*/void* _mkMapPointsPerMeterAtLatitude;
	/*function pointer*/void* _mkMetersPerMapPointAtLatitude;

}
+(id)sharedInstance;
-(Class)mapViewClass;
-(Class)annotationViewClass;
-(Class)polylineViewClass;
-(char)mapRectIntersectsRect:(SCD_Struct_PL20)arg1 rect:(SCD_Struct_PL20)arg2 ;
-(SCD_Struct_PL20)mapRectWorld;
-(SCD_Struct_PL20)coordinateRegionForMapRect:(SCD_Struct_PL20)arg1 ;
-(SCD_Struct_PL20)mapRectForCoordinateRegion:(SCD_Struct_PL20)arg1 ;
-(double)metersPerMapPointAtLatitude:(double)arg1 ;
-(SCD_Struct_PL20)mapRectAtCoordinate:(SCD_Struct_PL19)arg1 radialDistance:(double)arg2 ;
-(char)mapRectIntersectsWrappingMeridian:(SCD_Struct_PL20)arg1 rect:(SCD_Struct_PL20)arg2 ;
-(Class)polylineClass;
-(double)mapPointsPerMeterAtLatitude:(double)arg1 ;
-(SCD_Struct_PL19)mapPointForCoordinate:(SCD_Struct_PL19)arg1 ;
-(SCD_Struct_PL20)mapRectNull;
-(SCD_Struct_PL20)mapRectUnion:(SCD_Struct_PL20)arg1 rect:(SCD_Struct_PL20)arg2 ;
-(SCD_Struct_PL19)coordinateForMapPoint:(SCD_Struct_PL19)arg1 ;
-(id)init;
-(Class)pinAnnotationViewClass;
@end

