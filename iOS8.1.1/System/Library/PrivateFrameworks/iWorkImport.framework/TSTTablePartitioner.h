/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:40 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDPartitioner.h>

@class TSTTableInfo, TSDInfoGeometry, TSTLayout, TSUPointerKeyDictionary, NSMutableDictionary;

@interface TSTTablePartitioner : NSObject <TSDPartitioner> {

	TSTTableInfo* mTableInfo;
	TSDInfoGeometry* mInfoGeometry;
	double mFirstPartitionWidth;
	CGSize mScaleToFit;
	TSTLayout* mScaledLayout;
	TSUPointerKeyDictionary* mHintMatricesByCanvas;
	NSMutableDictionary* mPartitioningPassCache;

}

@property (nonatomic,readonly) TSTLayout * scaledLayout; 
@property (nonatomic,readonly) TSTTableInfo * tableInfo; 
@property (nonatomic,readonly) double inlineTableWidth; 
@property (assign,nonatomic) CGSize scaleToFit; 
@property (nonatomic,readonly) BOOL scaleIsValid; 
@property (nonatomic,copy) TSDInfoGeometry * infoGeometry; 
-(CGSize)scaleToFit;
-(void)setScaleToFit:(CGSize)arg1 ;
-(TSDInfoGeometry *)infoGeometry;
-(id)nextHintForSize:(CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(BOOL)arg4 outFinished:(out BOOL*)arg5 ;
-(id)layoutForHint:(id)arg1 parentLayout:(id)arg2 ;
-(id)nextLayoutForSize:(CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(BOOL)arg4 outFinished:(out BOOL*)arg5 ;
-(BOOL)didHint:(id)arg1 syncWithNextHint:(id)arg2 horizontally:(BOOL)arg3 delta:(int)arg4 ;
-(id)hintForLayout:(id)arg1 ;
-(TSTTableInfo *)tableInfo;
-(BOOL)scaleIsValid;
-(TSTLayout *)scaledLayout;
-(void)setInfoGeometry:(TSDInfoGeometry *)arg1 ;
-(void)validateScaledLayout;
-(BOOL)p_didFinishPartitioningHint:(id)arg1 horizontally:(BOOL)arg2 ;
-(SCD_Struct_TS496)measureCellRangeForNextPartitionOfSize:(CGSize)arg1 previousHint:(id)arg2 horizontally:(BOOL)arg3 ;
-(id)partitioningPassForHint:(id)arg1 withPreviousHint:(id)arg2 ;
-(id)hintCacheKeyForHint:(id)arg1 ;
-(BOOL)shouldReuseLayout:(id)arg1 forSize:(CGSize)arg2 parentLayout:(id)arg3 hint:(id)arg4 ;
-(void)p_flushCacheAfterPartitioningFinished:(id)arg1 lastHint:(id)arg2 horizontally:(BOOL)arg3 ;
-(id)partitioningPassForFirstPartitionSize:(CGSize)arg1 ;
-(id)hintCacheKeyForPartitioningPass:(id)arg1 andHintID:(SCD_Struct_TS272)arg2 ;
-(double)inlineTableWidth;
-(id)initWithInfo:(id)arg1 ;
-(void)dealloc;
@end

