/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:21 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCENamedReferenceTrie : NSObject {

	TSCENamedReferenceTrieNode* mRoot;

}
-(id)trackedReferencesExactlyMatchingString:(id)arg1 scopedToTable:(CFUUIDRef)arg2 ;
-(BOOL)replaceName:(id)arg1 withName:(id)arg2 inTable:(CFUUIDRef)arg3 trackedReference:(id)arg4 ;
-(BOOL)insertName:(id)arg1 inTable:(CFUUIDRef)arg2 trackedReference:(id)arg3 ;
-(void)deleteName:(id)arg1 inTable:(CFUUIDRef)arg2 trackedReference:(id)arg3 ;
-(id)trackedReferencesMatchingString:(id)arg1 scopedToTable:(CFUUIDRef)arg2 ;
-(id)description;
@end
