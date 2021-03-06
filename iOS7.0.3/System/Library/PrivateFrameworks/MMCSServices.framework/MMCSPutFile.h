/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MMCSServices.framework/MMCSServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MMCSServices/MMCSSimpleFile.h>

@interface MMCSPutFile : MMCSSimpleFile {

	/*^block*/ id _block;
	/*^block*/ id _updateBlock;

}

@property (copy) id completionBlock;                  //@synthesize block=_block - In the implementation block
@property (copy) id progressUpdateBlock;              //@synthesize updateBlock=_updateBlock - In the implementation block
-(/*^block*/ id)completionBlock;
-(void)dealloc;
-(void)setProgress:(double)arg1 ;
-(void)setCompletionBlock:(/*^block*/ id)arg1 ;
-(void)setProgressUpdateBlock:(/*^block*/ id)arg1 ;
-(/*^block*/ id)progressUpdateBlock;
@end

