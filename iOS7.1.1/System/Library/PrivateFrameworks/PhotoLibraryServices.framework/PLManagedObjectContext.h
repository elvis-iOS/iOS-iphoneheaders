/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObjectContext.h>

@protocol PLManagedObjectContextPTPNotificationDelegate, OS_xpc_object;
@class PLMergePolicy, PLDelayedFiledSystemDeletions, NSMutableArray, NSMapTable, NSMutableSet, PLPhotoLibrary, NSObject;

@interface PLManagedObjectContext : NSManagedObjectContext {

	bool _hasMetadataChanges;
	bool _isConnectedToChangeHub;
	bool _mergingChanges;
	bool _savingDuringMerge;
	bool _isInitializingSingletons;
	bool _isBackingALAssetsLibrary;
	bool _suspendClientServerTransactions;
	PLMergePolicy* _mergePolicy;
	PLDelayedFiledSystemDeletions* _delayedDeletions;
	NSMutableArray* _delayedMomentAssetUpdates;
	NSMapTable* _delayedMomentAssetDeletions;
	NSMutableSet* _delayedCloudFeedDeletionEntries;
	NSMutableArray* _delayedCloudFeedAlbumUpdates;
	NSMutableArray* _delayedCloudFeedAssetInserts;
	NSMutableArray* _delayedCloudFeedAssetUpdates;
	NSMutableArray* _delayedCloudFeedCommentInserts;
	NSMutableArray* _delayedCloudFeedInvitationRecordUpdates;
	NSMutableArray* _delayedDupeAnalysisNormalInserts;
	NSMutableArray* _delayedDupeAnalysisCloudInserts;
	NSMutableSet* _delayedAssetsForFileSystemPersistency;
	NSMutableSet* _avalancheUUIDsForUpdate;
	PLPhotoLibrary* _photoLibrary;
	<PLManagedObjectContextPTPNotificationDelegate>* _ptpNotificationDelegate;
	bool _regenerateVideoThumbnails;
	NSObject<OS_xpc_object>* changeHubConnection;

}

@property (assign,nonatomic) PLPhotoLibrary * photoLibrary; 
@property (nonatomic,readonly) bool isUserInterfaceContext; 
@property (assign,nonatomic) bool regenerateVideoThumbnails;                                                         //@synthesize regenerateVideoThumbnails=_regenerateVideoThumbnails - In the implementation block
@property (assign,nonatomic) bool hasMetadataChanges;                                                                //@synthesize hasMetadataChanges=_hasMetadataChanges - In the implementation block
@property (assign,nonatomic) bool suspendClientServerTransactions;                                                   //@synthesize suspendClientServerTransactions=_suspendClientServerTransactions - In the implementation block
@property (nonatomic,readonly) bool mergingChanges;                                                                  //@synthesize mergingChanges=_mergingChanges - In the implementation block
@property (nonatomic,readonly) bool savingDuringMerge;                                                               //@synthesize savingDuringMerge=_savingDuringMerge - In the implementation block
@property (assign,nonatomic) bool isInitializingSingletons;                                                          //@synthesize isInitializingSingletons=_isInitializingSingletons - In the implementation block
@property (assign,nonatomic) NSObject<OS_xpc_object> * changeHubConnection; 
@property (nonatomic,retain) PLDelayedFiledSystemDeletions * delayedDeletions;                                       //@synthesize delayedDeletions=_delayedDeletions - In the implementation block
@property (assign,nonatomic) <PLManagedObjectContextPTPNotificationDelegate> * ptpNotificationDelegate;              //@synthesize ptpNotificationDelegate=_ptpNotificationDelegate - In the implementation block
@property (assign,nonatomic) bool isBackingALAssetsLibrary;                                                          //@synthesize isBackingALAssetsLibrary=_isBackingALAssetsLibrary - In the implementation block
+(id)managedObjectModel;
+(bool)storeIsOldEnough;
+(bool)databaseIsMissing;
+(id)contextForPhotoLibrary:(id)arg1 ;
+(id)sharedPersistentStoreCoordinator;
+(void)configurePersistentStoreCoordinator:(id)arg1 ;
+(void)getStoreURL:(id*)arg1 options:(id*)arg2 forFileURL:(id)arg3 ;
+(id)defaultStoreURL;
+(bool)moveStoreFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(id)databasePath;
+(void)getStoreURL:(id*)arg1 options:(id*)arg2 ;
+(void)recordVersion:(int)arg1 forStore:(id)arg2 extraMetadata:(id)arg3 ;
+(bool)useModelMigratorToCreateDatabase;
+(bool)canMergeRemoteChanges;
+(void)mergeChangesFromRemoteContextSave:(id)arg1 intoAllContextsNotIdenticalTo:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
+(id)allContextsNotIdenticalTo:(void*)arg1 ;
+(bool)assetsLibraryLoggingEnabled;
+(id)contextForDatabaseCreation;
+(id)readOnlyContext;
+(void)moveOldStoreAside;
+(bool)hasAtLeastOneAsset;
+(id)oldAuxDatabasePath;
+(void)delayedMomentDataFromChangeHubEvent:(id)arg1 insertsAndUpdates:(id*)arg2 deletes:(id*)arg3 ;
+(void)delayedCloudFeedDataFromChangeHubEvent:(id)arg1 albumUpdates:(id*)arg2 assetInserts:(id*)arg3 assetUpdates:(id*)arg4 commentInserts:(id*)arg5 invitationRecordUpdates:(id*)arg6 deletionEntries:(id*)arg7 ;
+(void)delayedDupeAnalysisDataFromChangeHubEvent:(id)arg1 normalInserts:(id*)arg2 cloudInserts:(id*)arg3 ;
+(void)delayedAssetsForFileSystemPersistencyUpdatesFromChangeHubEvent:(id)arg1 assetUpdates:(id*)arg2 ;
+(void)mergeIntoAllContextsChangesFromRemoteContextSave:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
+(void)handleUnknownMergeEvent;
-(void)dealloc;
-(bool)save:(id*)arg1 ;
-(bool)hasMetadataChanges;
-(void)setHasMetadataChanges:(bool)arg1 ;
-(bool)isUserInterfaceContext;
-(id)existingObjectWithID:(id)arg1 error:(id*)arg2 ;
-(id)photoLibrary;
-(id)executeFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)globalValueForKey:(id)arg1 ;
-(void)setGlobalValue:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)countForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(void)withDispatchGroup:(id)arg1 performBlock:(/*^block*/ id)arg2 ;
-(bool)isReadOnly;
-(bool)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2 ;
-(void)setPhotoLibrary:(id)arg1 ;
-(bool)mergingChanges;
-(void)recordAssetForMomentUpdate:(id)arg1 ;
-(void)recordAssetForCloudFeedUpdate:(id)arg1 ;
-(void)recordAssetForDupeAnalysis:(id)arg1 ;
-(void)recordAvalancheUUIDForUpdate:(id)arg1 ;
-(void)registerFilesystemDeletionInfo:(id)arg1 ;
-(void)recordAssetForFileSystemPersistencyUpdate:(id)arg1 ;
-(id)initWithConcurrencyType:(unsigned long long)arg1 useSharedPersistentStoreCoordinator:(bool)arg2 ;
-(void)connectToChangeHub;
-(void)setupLocalChangeNotifications;
-(void)tearDownLocalChangeNotifications;
-(void)setPtpNotificationDelegate:(id)arg1 ;
-(void)setDelayedDeletions:(id)arg1 ;
-(void)disconnectFromChangeHub;
-(bool)suspendClientServerTransactions;
-(id)delayedDeletions;
-(bool)_isValidDelete:(id)arg1 ;
-(void)_recordStreamAssetForDupeAnalyzis:(id)arg1 ;
-(void)_recordNormalAssetForDupeAnalyzis:(id)arg1 ;
-(bool)isBackingALAssetsLibrary;
-(bool)_tooManyAssetChangesToHandle:(unsigned long long)arg1 ;
-(id)pl_fetchObjectsWithIDs:(id)arg1 ;
-(void)_mergeChangesFromDidSaveDictionary:(id)arg1 usingObjectIDs:(bool)arg2 ;
-(id)ptpNotificationDelegate;
-(void)_notifyALAssetsLibraryWithChanges:(id)arg1 usingObjectIDs:(bool)arg2 ;
-(void)_contextObjectsDidChange:(id)arg1 ;
-(void)_informPTPDelegateAboutChangesFromNotification:(id)arg1 ;
-(long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4 ;
-(bool)globalBoolValueForKey:(id)arg1 defaultValue:(bool)arg2 ;
-(void)getDelayedMomentInsertsAndUpdates:(id*)arg1 deletes:(id*)arg2 ;
-(void)appendDelayedMomentDataToXPCMessage:(id)arg1 ;
-(void)recordAlbumForCloudFeedUpdate:(id)arg1 ;
-(void)recordCommentForCloudFeedUpdate:(id)arg1 ;
-(void)recordInvitationRecordForCloudFeedUpdate:(id)arg1 ;
-(void)getDelayedCloudFeedAlbumUpdates:(id*)arg1 assetInserts:(id*)arg2 assetUpdates:(id*)arg3 commentInserts:(id*)arg4 invitationRecordUpdates:(id*)arg5 deletionEntries:(id*)arg6 ;
-(void)appendDelayedCloudFeedDataToXPCMessage:(id)arg1 ;
-(void)getDelayedDupeAnalysisNormalInserts:(id*)arg1 cloudInserts:(id*)arg2 ;
-(void)appendDelayedDupeAnalysisToXPCMessage:(id)arg1 ;
-(void)appendDelayedAssetsForFileSystemPersistencyUpdate:(id)arg1 ;
-(void)getDelayedAssetsForFilesystemPersistencyUpdates:(id*)arg1 ;
-(id)getAndClearRecordedAvalancheUUIDsForUpdate;
-(id)changeHubConnection;
-(void)setChangeHubConnection:(id)arg1 ;
-(bool)savingDuringMerge;
-(void)setSuspendClientServerTransactions:(bool)arg1 ;
-(bool)regenerateVideoThumbnails;
-(void)setRegenerateVideoThumbnails:(bool)arg1 ;
-(bool)isInitializingSingletons;
-(void)setIsInitializingSingletons:(bool)arg1 ;
-(void)setIsBackingALAssetsLibrary:(bool)arg1 ;
@end
