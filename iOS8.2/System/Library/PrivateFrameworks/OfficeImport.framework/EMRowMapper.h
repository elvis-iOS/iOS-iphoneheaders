/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:33 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMMapper.h>

@class EDRowBlock;

@interface EMRowMapper : CMMapper {

	EDRowBlock* mRowBlock;
	EDRowInfo* mRowInfo;
	double* columnGrid;
	unsigned columnCount;

}
+(void)mapEmptyRowAt:(id)arg1 colspan:(unsigned)arg2 height:(double)arg3 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(char)isColumnHidden:(unsigned)arg1 ;
-(EDCellHeader*)cellWithColumnNumber:(unsigned)arg1 ;
-(void)insertEmptyCellAt:(id)arg1 withColSpan:(unsigned)arg2 height:(double)arg3 ;
-(void)mapEmptyCellsAt:(id)arg1 withState:(id)arg2 firstColumn:(unsigned)arg3 lastColumn:(unsigned)arg4 ;
-(id)initWithEDRowBlock:(id)arg1 rowInfo:(EDRowInfo*)arg2 parent:(id)arg3 ;
-(char)isMergedCell:(EDCellHeader*)arg1 ;
@end

