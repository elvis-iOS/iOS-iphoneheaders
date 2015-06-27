/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:59:28 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
@interface BLRetouchReefRepairOperator : NSObject {

	void* _buffer;
	int _rowBytes;
	int _width;
	int _height;
	void* _maskBuffer;
	int _maskRowBytes;
	int _maskWidth;
	int _maskHeight;
	int _brushSize;
	CGRect _maskRect;

}
+(int)borderWithBrushSize:(int)arg1 ;
-(void)repair;
-(id)initWithRepairSourceData:(void*)arg1 rowBytes:(int)arg2 width:(int)arg3 height:(int)arg4 ;
-(void)setMaskRect:(CGRect)arg1 ;
-(void)setMaskData:(void*)arg1 rowBytes:(int)arg2 width:(int)arg3 height:(int)arg4 ;
-(void)setBrushSize:(int)arg1 ;
-(CGPoint)analyzeOffset;
-(void)repairWithOffset:(CGPoint)arg1 ;
@end
