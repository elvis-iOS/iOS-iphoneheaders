/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:01 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class TSUFlushingManager;

@interface TSUMemoryWatcher : NSObject {

	TSUFlushingManager* _flushingManager;
	char _going;
	char _stop;

}
-(void)dealloc;
-(void)stopObserving;
-(void)_periodicallySimulateMemoryWarning:(id)arg1 ;
-(void)_simulateMemoryWarning:(id)arg1 ;
-(id)initWithFlushingManager:(id)arg1 ;
-(void)beginObserving;
@end

