/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:11 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SSWishlist, NSArray;

@interface SKUIWishlist : NSObject {

	SSWishlist* _database;

}

@property (nonatomic,readonly) long long accountIdentifier; 
@property (nonatomic,copy,readonly) NSArray * items; 
+(id)activeWishlist;
-(id)initWithAccountIdentifier:(long long)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSArray *)items;
-(void)addItem:(id)arg1 ;
-(long long)accountIdentifier;
-(char)containsItemWithIdentifier:(long long)arg1 ;
-(void)postChangeNotification;
-(void)removeItemsWithItemIdentifiers:(id)arg1 ;
@end
