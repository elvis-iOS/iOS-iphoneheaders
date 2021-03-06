/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHSageGeometryHelper.h>

@interface TSCH2DSageGeometryHelper : TSCHSageGeometryHelper {

	float mVerticalAxisOverhang;
	float mHorizontalAxisOverhang;
	float mRightAxisWidthChange;
	float mBottomAxisHeightChange;
	float mTopAxisHeightChange;
	CGSize mBottomLeftChartTitleOverhang;
	CGSize mTopRightChartTitleOverhang;
	CGSize mBottomLeftValueAxisTitleOverhang;
	CGSize mTopRightValueAxisTitleOverhang;
	CGSize mBottomLeftCategoryAxisTitleOverhang;
	CGSize mTopRightCategoryAxisTitleOverhang;
	CGSize mBottomLeftValueAxisY2TitleOverhang;
	CGSize mTopRightValueAxisY2TitleOverhang;
	CGRect mChartBodyBounds;
	CGRect mExplodedBounds;
	CGRect mChartTitleBounds;
	CGRect mValueAxisTitleBounds;
	CGRect mCategoryAxisTitleBounds;
	CGRect mValueAxisY2TitleBounds;
	CGRect mTopLegendBounds;
	CGRect mLeftLegendBounds;
	CGRect mBottomLegendBounds;
	CGRect mRightLegendBounds;
	CGRect mTopAxisLabelsBounds;
	CGRect mLeftAxisLabelsBounds;
	CGRect mBottomAxisLabelsBounds;
	CGRect mRightAxisLabelsBounds;
	CGRect mTopAxisBounds;
	CGRect mLeftAxisBounds;
	CGRect mBottomAxisBounds;
	CGRect mRightAxisBounds;
	CGPoint mExplodedBodyShift;
	CGPoint mOutsideLabelsChartTitleShift;
	BOOL mChartLayoutValid;
	BOOL mChartExplodedSizeValid;
	BOOL mChartAxisSizeValid;
	BOOL mChartAxisLabelsSizeValid;
	BOOL mChartTitleSizeValid;
	BOOL mValueAxisTitleSizeValid;
	BOOL mCategoryAxisTitleSizeValid;
	BOOL mValueAxisY2TitleSizeValid;
	BOOL mChartLegendSizeValid;
	BOOL mChartValueElementsGeometryValid;

}
+(CGRect)computeSageChartAreaBoundsForChartInfo:(id)arg1 geometryRect:(CGRect)arg2 returningContainingViewportSize:(id*)arg3 ;
-(BOOL)aspectRatioLocked;
-(CGRect)computeSageLayoutCBB;
-(void)calculateChartAxisLabelsSize;
-(void)calculateChartAxisSize;
-(void)calculateChartTitleSize;
-(void)calculateValueAxisTitleSize;
-(void)calculateCategoryAxisTitleSize;
-(void)calculateValueAxisY2TitleSize;
-(BOOL)calculateChartExplodedSize;
-(void)calculateChartBodySize;
-(float)_topAxisOuterWidth;
-(BOOL)leftAxisLabelsVisible;
-(float)_verticalAxisLabelsWidth:(bool)arg1 ;
-(BOOL)bottomAxisLabelsVisible;
-(float)_horizontalAxisLabelsHeight;
-(BOOL)rightAxisLabelsVisible;
-(BOOL)topAxisLabelsVisible;
-(id)p_model;
-(BOOL)p_labelsVisible:(id)arg1 ;
-(float)_rightAxisOuterWidth;
-(float)_bottomAxisOuterWidth;
-(float)_leftAxisOuterWidth;
-(CGSize)measureText:(id)arg1 withParagraphStyle:(id)arg2 ;
-(float)chartTitlePadding;
-(BOOL)isScatter;
-(float)yAxisTitlePadding:(BOOL)arg1 ;
-(float)xAxisTitlePadding;
-(float)p_widthFromTicksAndStrokeForAxis:(id)arg1 ;
-(float)_seriesSymbolWidth;
-(float)distanceFromYAxisUsingParagraphStyle:(id)arg1 ;
-(float)seriesCategoryLabelsHorizontalGutter;
-(float)distanceFromXAxisUsingParagraphStyle:(id)arg1 ;
-(BOOL)isArea;
-(float)seriesCategoryLabelsVerticalGutter;
-(float)fontHeight:(id)arg1 ;
-(float)xAxisLabelHeight;
-(float)yAxisLabelHeight:(BOOL)arg1 ;
-(BOOL)isVertical;
-(BOOL)isPie;
-(BOOL)isLine;
@end

