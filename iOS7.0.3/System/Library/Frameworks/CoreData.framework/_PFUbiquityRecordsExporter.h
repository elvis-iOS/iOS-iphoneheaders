/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSDate, PFUbiquityLocation, NSLock, NSMutableDictionary, NSObject;

@interface _PFUbiquityRecordsExporter : NSObject {

	NSString* _localPeerID;
	NSDate* _lastTransactionDate;
	PFUbiquityLocation* _ubiquityRootLocation;
	PFUbiquityLocation* _localRootLocation;
	NSString* _storeName;
	NSLock* _transactionLock;
	NSMutableDictionary* _pendingTransactionsToStoreNameAndTransactionNumber;
	BOOL _pendingTempLogMove;
	BOOL _allowTempLogStorage;
	BOOL _useLocalStorage;
	NSObject<OS_dispatch_queue>* _processingQueue;
	BOOL _throwOptimisticLockingException;

}

@property (nonatomic,readonly) NSString * localPeerID;                                //@synthesize localPeerID=_localPeerID - In the implementation block
@property (nonatomic,retain) PFUbiquityLocation * ubiquityRootLocation;               //@synthesize ubiquityRootLocation=_ubiquityRootLocation - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * localRootLocation;                //@synthesize localRootLocation=_localRootLocation - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * currentRootLocation; 
@property (retain) NSDate * lastTransactionDate;                                      //@synthesize lastTransactionDate=_lastTransactionDate - In the implementation block
@property (nonatomic,readonly) BOOL pendingTempLogMove;                               //@synthesize pendingTempLogMove=_pendingTempLogMove - In the implementation block
@property (assign,nonatomic) BOOL allowTempLogStorage;                                //@synthesize allowTempLogStorage=_allowTempLogStorage - In the implementation block
@property (assign,nonatomic) BOOL useLocalStorage;                                    //@synthesize useLocalStorage=_useLocalStorage - In the implementation block
@property (assign,nonatomic) BOOL throwOptimisticLockingException;                    //@synthesize throwOptimisticLockingException=_throwOptimisticLockingException - In the implementation block
-(id)localPeerID;
-(id)ubiquityRootLocation;
-(void)setLastTransactionDate:(id)arg1 ;
-(id)lastTransactionDate;
-(void)managedObjectContextDidSave:(id)arg1 ;
-(void)cleanUpFromRolledbackPendingTransaction:(id)arg1 withNotification:(id)arg2 ;
-(BOOL)shouldRespondToSaveNotification:(id)arg1 ;
-(void)setUseLocalStorage:(BOOL)arg1 ;
-(id)createDictionaryForObjectsInSaveNotification:(id)arg1 forTransactionOfType:(int)arg2 withExportContext:(id)arg3 andSaveSnapshot:(id)arg4 ;
-(void)scheduleTempLogMove;
-(void)moveLogsFromTempDirectory;
-(id)initWithLocalPeerID:(id)arg1 forStoreName:(id)arg2 ubiquityRootLocation:(id)arg3 localRootLocation:(id)arg4 andProcessingQueue:(id)arg5 ;
-(id)currentRootLocation;
-(void)beginWatchingForChangesFromStore:(id)arg1 ;
-(void)stopWatchingForChanges;
-(void)setUbiquityRootLocation:(id)arg1 ;
-(BOOL)pendingTempLogMove;
-(BOOL)allowTempLogStorage;
-(void)setAllowTempLogStorage:(BOOL)arg1 ;
-(id)localRootLocation;
-(BOOL)useLocalStorage;
-(BOOL)throwOptimisticLockingException;
-(void)setThrowOptimisticLockingException:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
@end

