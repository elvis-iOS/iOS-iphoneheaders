/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:00 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/NSFastEnumeration.h>

@interface TSUCFSetEnumerator : NSObject <NSFastEnumeration> {

	void** mInlineObjects[16];
	const void* mObjects;
	long mCount;
	long mIndex;

}
-(unsigned)countByEnumeratingWithState:(SCD_Struct_TS25*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(id)allObjects;
-(id)nextObject;
-(id)initWithCFSet:(CFSetRef)arg1 ;
@end

