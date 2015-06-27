/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:46 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PKPaymentDataItem.h>

@class PKPaymentPass, PKPaymentApplication, CNContact;

@interface PKPaymentCardDataItem : PKPaymentDataItem

@property (nonatomic,readonly) PKPaymentPass * pass; 
@property (nonatomic,readonly) PKPaymentApplication * paymentApplication; 
@property (nonatomic,readonly) char requiresBillingAddress; 
@property (nonatomic,readonly) CNContact * billingAddress; 
+(int)dataType;
-(char)requiresBillingAddress;
-(PKPaymentApplication *)paymentApplication;
-(CNContact *)billingAddress;
-(char)isValidWithError:(id*)arg1 ;
-(PKPaymentPass *)pass;
@end
