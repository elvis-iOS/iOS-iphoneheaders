/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EMSheetMapper.h>

@class EDWorksheet, CMStyle, ECColumnWidthConvertor;

@interface EMWorksheetMapper : EMSheetMapper {

	EDWorksheet* edWorksheet;
	CMStyle* mStyle;
	int mMaxPopulatedColumn;
	int mMaxPopulatedRow;
	double* mColumnGrid;
	double* mRowGrid;
	int mWidth;
	int mHeight;
	ECColumnWidthConvertor* mColumnWidthConvertor;

}
-(void)countRowsAndColumnsWithState:(id)arg1 ;
-(void)setRowGrid;
-(void)mapTableAt:(id)arg1 withState:(id)arg2 ;
-(void)mapDrawablesAt:(id)arg1 withState:(id)arg2 ;
-(void)mapColumnInfosAt:(id)arg1 withState:(id)arg2 ;
-(void)mapGridAt:(id)arg1 ;
-(void)mapTableStyleAt:(id)arg1 withState:(id)arg2 ;
-(void)dealloc;
-(int)width;
-(int)height;
-(bool)isVisible;
-(int)columnCount;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(int)preprocessWidthWithState:(id)arg1 ;
-(int)preprocessHeightWithState:(id)arg1 ;
-(id)columnWidthConvertor;
-(double*)rowGrid;
-(double*)columnGrid;
-(int)maxRowNumber;
-(double)defaultColumnWidth;
-(double)defaultRowHeight;
-(CGSize)preprocessSizeWithState:(id)arg1 ;
-(id)initWithEDWorksheet:(id)arg1 parent:(id)arg2 ;
-(double)xlColumnWidthToPoints:(double)arg1 ;
-(void)_initWithState:(id)arg1 ;
-(CGSize)preprocessDrawableSizeWithState:(id)arg1 ;
@end
