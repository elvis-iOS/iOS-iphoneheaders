/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:28 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCH3DChartScene : NSObject {

	ChartSceneInfo mSceneInfo;

}
+(bool)supportsValueAxisLabelAlignmentCaching;
+(void)addObjectsToSceneWithSceneInfo:(const ChartSceneInfo*)arg1 ;
-(id)seriesType;
-(id)chartInfo;
-(id)initWithSceneInfo:(const ChartSceneInfo*)arg1 ;
-(void)addAllObjectsToScene;
-(void)addLabelsToScene;
-(void)addChartTitlesToScene;
-(const SCD_Struct_TS408*)layoutSettings;
-(void)adjustSceneSettings;
-(void)addObjectsToScene;
-(void)addAllLabelsToScene;
-(void)addSeriesObjectsToScene;
-(id)scene;
-(id).cxx_construct;
-(id)chartType;
@end
