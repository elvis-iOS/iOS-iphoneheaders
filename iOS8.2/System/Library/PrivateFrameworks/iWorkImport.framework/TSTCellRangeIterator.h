/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:16 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSTCellRangeIteratorDelegate;
#import <iWorkImport/iWorkImport-Structs.h>
@class TSTCellIterator;

@interface TSTCellRangeIterator : NSObject {

	TSTCellIterator* mCellIterator;
	SCD_Struct_TS495* mIterData;
	char mIterDataValid;
	char mCellValidForDelegate;
	id<TSTCellRangeIteratorDelegate> mDelegate;

}

@property (nonatomic,readonly) char cellValid; 
-(id)initWithTableModel:(id)arg1 region:(id)arg2 delegate:(id)arg3 ;
-(id)initWithTableModel:(id)arg1 range:(SCD_Struct_TS491)arg2 delegate:(id)arg3 ;
-(char)cellValid;
-(id)initWithTableModel:(id)arg1 delegate:(id)arg2 ;
-(char)processRange;
-(void)dealloc;
@end

