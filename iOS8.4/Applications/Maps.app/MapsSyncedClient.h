/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:36 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol MapsSyncedClient <NSObject>
@property (nonatomic,readonly) NSString * syncIdentifier; 
@property (nonatomic,readonly) NSArray * syncedItems; 
@property (nonatomic,readonly) char syncSupportsKVO; 
@property (nonatomic,readonly) char syncInvertedOrdering; 
@property (nonatomic,readonly) char syncShouldUseItemPositions; 
@property (nonatomic,readonly) char syncShouldUseCustomStore; 
@optional
-(char)syncInvertedOrdering;
-(char)shouldAddSyncedItem:(id)arg1 atIndex:(unsigned)arg2;
-(void)insertSyncedItems:(id)arg1 atIndexes:(id)arg2;
-(void)removeSyncedItemsAtIndexes:(id)arg1;
-(void)updateSyncedItemAtIndexes:(id)arg1;
-(void)syncManagerDidUpdateSyncedItems:(id)arg1;
-(char)syncShouldUseItemPositions;
-(char)syncShouldUseCustomStore;

@required
-(NSString *)syncIdentifier;
-(id)newSyncedItemForSyncData:(id)arg1;
-(NSArray *)syncedItems;
-(char)syncSupportsKVO;

@end
