/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKit/StoreKit-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSNumber;

@interface SKPaymentQueueClient : NSObject <NSCopying> {

	bool _allowsBootstrapCellularData;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	bool _hidesConfirmationDialogs;
	bool _ignoresInAppPurchaseRestriction;
	NSString* _receiptDirectoryPath;
	bool _requiresAuthenticationForPayment;
	NSNumber* _storeExternalVersion;
	NSNumber* _storeItemIdentifier;
	NSString* _vendorIdentifier;

}

@property (assign,nonatomic) bool allowsBootstrapCellularData;                   //@synthesize allowsBootstrapCellularData=_allowsBootstrapCellularData - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                          //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                             //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (assign,nonatomic) bool hidesConfirmationDialogs;                      //@synthesize hidesConfirmationDialogs=_hidesConfirmationDialogs - In the implementation block
@property (assign,nonatomic) bool ignoresInAppPurchaseRestriction;               //@synthesize ignoresInAppPurchaseRestriction=_ignoresInAppPurchaseRestriction - In the implementation block
@property (nonatomic,copy) NSString * receiptDirectoryPath;                      //@synthesize receiptDirectoryPath=_receiptDirectoryPath - In the implementation block
@property (assign,nonatomic) bool requiresAuthenticationForPayment;              //@synthesize requiresAuthenticationForPayment=_requiresAuthenticationForPayment - In the implementation block
@property (nonatomic,copy) NSNumber * storeExternalVersion;                      //@synthesize storeExternalVersion=_storeExternalVersion - In the implementation block
@property (nonatomic,copy) NSNumber * storeItemIdentifier;                       //@synthesize storeItemIdentifier=_storeItemIdentifier - In the implementation block
@property (nonatomic,copy) NSString * vendorIdentifier;                          //@synthesize vendorIdentifier=_vendorIdentifier - In the implementation block
-(id)bundleVersion;
-(id)storeItemIdentifier;
-(void)setHidesConfirmationDialogs:(bool)arg1 ;
-(void)setIgnoresInAppPurchaseRestriction:(bool)arg1 ;
-(void)setReceiptDirectoryPath:(id)arg1 ;
-(void)setRequiresAuthenticationForPayment:(bool)arg1 ;
-(void)setStoreExternalVersion:(id)arg1 ;
-(void)setStoreItemIdentifier:(id)arg1 ;
-(void)setVendorIdentifier:(id)arg1 ;
-(bool)hidesConfirmationDialogs;
-(bool)ignoresInAppPurchaseRestriction;
-(id)receiptDirectoryPath;
-(bool)requiresAuthenticationForPayment;
-(id)storeExternalVersion;
-(id)vendorIdentifier;
-(void)dealloc;
-(id)bundleIdentifier;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(bool)allowsBootstrapCellularData;
-(void)setAllowsBootstrapCellularData:(bool)arg1 ;
-(void)setBundleIdentifier:(id)arg1 ;
-(void)setBundleVersion:(id)arg1 ;
@end

