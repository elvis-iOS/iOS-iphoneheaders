/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:31 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/NSFastEnumeration.h>

@class NSMutableArray;

@interface SBStringMetrics : NSObject <NSFastEnumeration> {

	NSMutableArray* _fragments;

}
-(void)addFragment:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_SB26*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(unsigned long long)fragmentCount;
-(id)fragments;
@end
