/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSKCommand.h>

@class TSDDrawableInfo, TSDPathSource;

@interface TSDDrawablePathSourceCommand : TSKCommand {

	TSDDrawableInfo* mInfo;
	TSDPathSource* mOldPathSource;
	TSDPathSource* mNewPathSource;

}

@property (nonatomic,readonly) TSDDrawableInfo * info; 
@property (nonatomic,readonly) TSDPathSource * newPathSource; 
@property (nonatomic,readonly) TSDPathSource * oldPathSource; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(bool)canCoalesceWithCommand:(id)arg1 ;
-(void)coalesceWithCommand:(id)arg1 ;
-(void)p_do;
-(id)initWithInfo:(id)arg1 newPathSource:(id)arg2 ;
-(id)oldPathSource;
-(id)newPathSource;
-(void)dealloc;
-(void)undo;
-(void)redo;
-(void)commit;
-(id)info;
-(void)setInfo:(id)arg1 ;
-(bool)process;
@end

