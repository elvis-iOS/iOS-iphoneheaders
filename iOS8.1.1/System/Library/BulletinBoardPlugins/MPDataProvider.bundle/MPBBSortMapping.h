/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:49 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/BulletinBoardPlugins/MPDataProvider.bundle/MPDataProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, NSString;

@interface MPBBSortMapping : NSObject {

	NSMutableArray* _recordIDsToSuppress;
	NSMutableDictionary* _bulletinRecordIDToSortIdentifier;
	NSString* _domain;

}

@property (nonatomic,retain) NSMutableArray * recordIDsToSuppress;                                //@synthesize recordIDsToSuppress=_recordIDsToSuppress - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * bulletinRecordIDToSortIdentifier;              //@synthesize bulletinRecordIDToSortIdentifier=_bulletinRecordIDToSortIdentifier - In the implementation block
@property (readonly) NSString * domain;                                                           //@synthesize domain=_domain - In the implementation block
-(id)initForDomain:(id)arg1 ;
-(void)suppressBulletinsWithSortIdentifierLessThanOrEqualTo:(id)arg1 ;
-(void)flushCacheKeepingRecordIDs:(id)arg1 ;
-(BOOL)isBulletinSuppressedForRecordID:(id)arg1 ;
-(void)suppressBulletinForRecordID:(id)arg1 ;
-(NSMutableArray *)recordIDsToSuppress;
-(NSMutableDictionary *)bulletinRecordIDToSortIdentifier;
-(void)setBulletinRecordIDToSortIdentifier:(NSMutableDictionary *)arg1 ;
-(void)setRecordIDsToSuppress:(NSMutableArray *)arg1 ;
-(void)_loadSortMappingFromPreferences;
-(void)_saveSortMappingToPreferences;
-(void)_suppressBulletinForRecordID:(id)arg1 saving:(BOOL)arg2 ;
-(void)dealloc;
-(NSString *)domain;
@end

