/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface MNBTAManager : NSObject {

	NSMutableArray* _jobs;

}
+(id)sharedManager;
-(void)_jobEvent:(id)arg1 name:(id)arg2 ;
-(id)_jobForName:(id)arg1 ;
-(void)removeJob:(id)arg1 ;
-(void)addJob:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

