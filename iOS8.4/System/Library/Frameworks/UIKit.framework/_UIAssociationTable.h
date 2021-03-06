/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:09 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMapTable;

@interface _UIAssociationTable : NSObject {

	NSMapTable* _leftToRightHashTables;
	NSMapTable* _rightToLeftHashTables;

}
-(void)dealloc;
-(id)description;
-(BOOL)isEmpty;
-(id)initWithLeftValueOptions:(unsigned long long)arg1 rightValueOptions:(unsigned long long)arg2 ;
-(id)rightValueEnumerableForLeftValue:(id)arg1 ;
-(void)registerAssociationWithLeftValue:(id)arg1 rightValue:(id)arg2 ;
-(void)unregisterAssociationWithLeftValue:(id)arg1 rightValue:(id)arg2 ;
-(BOOL)hasRightValuesForLeftValue:(id)arg1 ;
-(id)leftValuesForRightValue:(id)arg1 ;
-(BOOL)hasLeftValuesForRightValue:(id)arg1 ;
-(id)leftValueEnumerable;
-(id)leftValues;
-(id)rightValues;
-(id)rightValueEnumerable;
-(id)rightValuesForLeftValue:(id)arg1 ;
-(id)leftValueEnumerableForRightValue:(id)arg1 ;
@end

