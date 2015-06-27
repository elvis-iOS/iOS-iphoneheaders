/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:09 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartAxisLayoutItem.h>

@class TSCHChartAxisSeriesLabelsLayoutItem, TSCHChartCategoryAxisLabelsLayoutItem;

@interface TSCHChartCategoryAxisLayoutItem : TSCHChartAxisLayoutItem {

	TSCHChartAxisSeriesLabelsLayoutItem* mSeriesLabels;
	TSCHChartCategoryAxisLabelsLayoutItem* mCategoryLabels;

}

@property (nonatomic,readonly) TSCHChartAxisSeriesLabelsLayoutItem * axisSeriesLabelsLayoutItem; 
@property (nonatomic,readonly) TSCHChartCategoryAxisLabelsLayoutItem * axisCategoryLabelsLayoutItem; 
+(id)selectionPathType;
-(id)renderersWithRep:(id)arg1 ;
-(TSCHChartCategoryAxisLabelsLayoutItem *)axisCategoryLabelsLayoutItem;
-(TSCHChartAxisSeriesLabelsLayoutItem *)axisSeriesLabelsLayoutItem;
-(void)buildSubTree;
-(void)p_layoutLabelsNow;
-(CGRect)protected_layoutSpaceRectForAllLabels;
-(void)dealloc;
@end
