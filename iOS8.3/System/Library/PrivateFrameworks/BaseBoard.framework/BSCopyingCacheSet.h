/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:49:32 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet, NSSet;

@interface BSCopyingCacheSet : NSObject {

	NSMutableSet* _mutable;
	NSSet* _immutable;

}

@property (readonly) unsigned count; 
-(void)dealloc;
-(void)removeObject:(id)arg1 ;
-(unsigned)count;
-(void)addObject:(id)arg1 ;
-(id)description;
-(char)containsObject:(id)arg1 ;
-(id)immutableSet;
@end

