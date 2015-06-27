/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:16 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SSSQLiteDatabase, NSNumber;

@interface SSWishlist : NSObject {

	long long _accountIdentifier;
	SSSQLiteDatabase* _database;

}

@property (nonatomic,readonly) long long accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * lastSyncTime; 
+(char)existsForAccountIdentifier:(long long)arg1 ;
-(id)initWithAccountIdentifier:(long long)arg1 ;
-(void)dealloc;
-(long long)accountIdentifier;
-(void)performTransactionWithBlock:(/*^block*/id)arg1 ;
-(void)setLastSyncTime:(NSNumber *)arg1 ;
-(NSNumber *)lastSyncTime;
-(char)deleteBackingStore;
@end
