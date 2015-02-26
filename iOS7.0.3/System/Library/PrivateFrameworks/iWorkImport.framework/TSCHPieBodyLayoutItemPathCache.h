/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSArray;

@interface TSCHPieBodyLayoutItemPathCache : NSObject {

	unsigned seriesIndex;
	CGPathRef pathLayoutRelative;
	CGPathRef pathTransformRelative;
	NSArray* pathSelectionKnobs;
	CGPoint wedgeCenterPoint;
	CGRect rootedLayoutRect;

}

@property (nonatomic,readonly) unsigned seriesIndex; 
@property (nonatomic,readonly) CGRect rootedLayoutRect; 
@property (nonatomic,readonly) CGPoint wedgeCenterPoint; 
@property (nonatomic,readonly) CGPathRef pathLayoutRelative; 
@property (nonatomic,readonly) CGPathRef pathTransformRelative; 
@property (nonatomic,readonly) NSArray * pathSelectionKnobs; 
-(CGRect)rootedLayoutRect;
-(CGPathRef)pathLayoutRelative;
-(CGPathRef)pathTransformRelative;
-(CGPoint)wedgeCenterPoint;
-(id)pathSelectionKnobs;
-(id)initWithSeriesIndex:(unsigned)arg1 rootedLayoutRect:(CGRect)arg2 wedgeCenterPoint:(CGPoint)arg3 pathLayoutRelative:(CGPathRef)arg4 pathTransformRelative:(CGPathRef)arg5 pathSelectionKnobs:(id)arg6 ;
-(void)dealloc;
-(unsigned)seriesIndex;
@end
