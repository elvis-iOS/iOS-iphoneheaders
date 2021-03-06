/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:46 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PKPaymentValidating.h>

@class PKPaymentAuthorizationDataModel, NSString;

@interface PKPaymentDataItem : NSObject <PKPaymentValidating> {

	char _rejected;
	int _type;
	PKPaymentAuthorizationDataModel* _model;

}

@property (assign,nonatomic) int type;                                             //@synthesize type=_type - In the implementation block
@property (assign,getter=isRejected,nonatomic) char rejected;                      //@synthesize rejected=_rejected - In the implementation block
@property (assign,nonatomic) PKPaymentAuthorizationDataModel * model;              //@synthesize model=_model - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)dataType;
-(void)setRejected:(char)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(PKPaymentAuthorizationDataModel *)model;
-(void)setModel:(PKPaymentAuthorizationDataModel *)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(char)isRejected;
-(char)isValidWithError:(id*)arg1 ;
@end

