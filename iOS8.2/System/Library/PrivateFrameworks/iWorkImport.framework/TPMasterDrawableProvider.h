/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:24 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TPMasterDrawableProvider <NSObject>
@required
-(unsigned)countOfMasterDrawables;
-(id)masterDrawables;
-(void)addMasterDrawable:(id)arg1 atIndex:(unsigned)arg2 insertContext:(id)arg3 suppressDOLC:(char)arg4;
-(id)masterDrawablesSortedByZOrder:(id)arg1;
-(unsigned)indexOfMasterDrawable:(id)arg1;
-(void)addMasterDrawables:(id)arg1 atIndex:(unsigned)arg2 insertContext:(id)arg3 suppressDOLC:(char)arg4;
-(void)removeMasterDrawable:(id)arg1 suppressDOLC:(char)arg2;

@end
