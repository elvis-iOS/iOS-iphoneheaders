/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:36 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/NSCopying.h>

@class NSString, NSDate, CLLocation;

@interface _MKLocalSearchMerchantParameters : NSObject <NSCopying> {

	NSString* _merchantCode;
	NSString* _paymentNetwork;
	NSDate* _transactionDate;
	CLLocation* _transactionLocation;

}

@property (nonatomic,copy) NSString * merchantCode;                         //@synthesize merchantCode=_merchantCode - In the implementation block
@property (nonatomic,copy) NSString * paymentNetwork;                       //@synthesize paymentNetwork=_paymentNetwork - In the implementation block
@property (nonatomic,retain) NSDate * transactionDate;                      //@synthesize transactionDate=_transactionDate - In the implementation block
@property (nonatomic,retain) CLLocation * transactionLocation;              //@synthesize transactionLocation=_transactionLocation - In the implementation block
-(NSDate *)transactionDate;
-(void)setTransactionDate:(NSDate *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPaymentNetwork:(NSString *)arg1 ;
-(void)setMerchantCode:(NSString *)arg1 ;
-(void)setTransactionLocation:(CLLocation *)arg1 ;
-(NSString *)paymentNetwork;
-(NSString *)merchantCode;
-(CLLocation *)transactionLocation;
@end
