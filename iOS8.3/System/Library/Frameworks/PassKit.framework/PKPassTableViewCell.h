/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:04:54 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PKCardOnFileTableViewCell.h>

@class PKPaymentPass;

@interface PKPassTableViewCell : PKCardOnFileTableViewCell {

	PKPaymentPass* _paymentPass;

}

@property (nonatomic,retain) PKPaymentPass * paymentPass;              //@synthesize paymentPass=_paymentPass - In the implementation block
-(void)setPaymentPass:(PKPaymentPass *)arg1 ;
-(void)dealloc;
-(PKPaymentPass *)paymentPass;
@end
