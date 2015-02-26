/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:22 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSData;

@interface TSMTraceFileParser : NSObject {

	NSData* mData;
	TSMTraceRecord_s* mRecordBuffer;
	unsigned long long mOffset;
	unsigned long long mDataLength;

}
+(BOOL)dataIsTraceFile:(id)arg1 ;
+(id)parserWithData:(id)arg1 ;
-(TSMTraceRecord_s*)nextTraceRecord;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
@end
