/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:47 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet, PSSpecifierUpdates;

@interface _PSDeferredUpdates : NSObject {

	BOOL _invalidatedSpecifiers;
	NSMutableSet* _searchEntries;
	PSSpecifierUpdates* _specifierUpdates;

}

@property (nonatomic,retain) NSMutableSet * searchEntries;                       //@synthesize searchEntries=_searchEntries - In the implementation block
@property (nonatomic,retain) PSSpecifierUpdates * specifierUpdates;              //@synthesize specifierUpdates=_specifierUpdates - In the implementation block
@property (assign,nonatomic) BOOL invalidatedSpecifiers;                         //@synthesize invalidatedSpecifiers=_invalidatedSpecifiers - In the implementation block
+(id)deferredUpdatesWithEntries:(id)arg1 specifierUpdates:(id)arg2 ;
+(id)deferredInvalidationUpdatesWithEntries:(id)arg1 ;
-(void)dealloc;
-(id)initWithSearchEntries:(id)arg1 specifierUpdates:(id)arg2 invalidatedSpecifiers:(BOOL)arg3 ;
-(NSMutableSet *)searchEntries;
-(void)setSearchEntries:(NSMutableSet *)arg1 ;
-(PSSpecifierUpdates *)specifierUpdates;
-(void)setSpecifierUpdates:(PSSpecifierUpdates *)arg1 ;
-(BOOL)invalidatedSpecifiers;
-(void)setInvalidatedSpecifiers:(BOOL)arg1 ;
@end
