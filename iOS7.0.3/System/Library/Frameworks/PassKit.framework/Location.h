/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:05:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <passd/SQLiteEntity.h>

@interface Location : SQLiteEntity
+(id)associationPropertyForEntityClass:(Class)arg1 ;
+(void)insertLocations:(id)arg1 forSource:(id)arg2 inDatabase:(id)arg3 ;
+(void)deleteEntitiesForPass:(id)arg1 inDatabase:(id)arg2 ;
+(id)locationsInDatabase:(id)arg1 forPassPID:(unsigned long long)arg2 withSourceType:(int)arg3 ;
+(id)_propertySettersForLocation;
+(id)_predicateForPassPID:(long long)arg1 ;
+(id)_predicateForPass:(id)arg1 ;
+(id)_locationsInDatabase:(id)arg1 matchingPredicate:(id)arg2 ;
+(id)_predicateForLocationSourcePID:(long long)arg1 ;
+(id)_predicateForLocationSource:(id)arg1 ;
+(id)_predicateForSourceType:(int)arg1 ;
+(id)locationsInDatabase:(id)arg1 forPass:(id)arg2 ;
+(id)locationsInDatabase:(id)arg1 forPassPID:(unsigned long long)arg2 ;
+(id)locationsInDatabase:(id)arg1 forLocationSource:(id)arg2 ;
+(id)locationsInDatabase:(id)arg1 forLocationSourcePID:(unsigned long long)arg2 ;
+(id)queryWithDatabase:(id)arg1 locationSourcePID:(unsigned long long)arg2 ;
+(id)databaseTable;
+(id)joinClauseForProperty:(id)arg1 ;
+(id)foreignDatabaseTablesToDelete;
+(id)foreignKeyColumnForTable:(id)arg1 ;
-(id)initWithLocation:(id)arg1 source:(id)arg2 inDatabase:(id)arg3 ;
@end

