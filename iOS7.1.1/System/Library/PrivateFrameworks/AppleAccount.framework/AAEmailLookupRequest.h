/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class ACAccount, NSArray;

@interface AAEmailLookupRequest : AARequest {

	ACAccount* _account;
	NSArray* _emailAddresses;

}

@property (nonatomic,retain) ACAccount * account;                   //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSArray * emailAddresses;              //@synthesize emailAddresses=_emailAddresses - In the implementation block
+(Class)responseClass;
-(void).cxx_destruct;
-(id)urlString;
-(id)urlRequest;
-(id)urlCredential;
-(id)initWithAccount:(id)arg1 emailAddresses:(id)arg2 ;
-(id)initWithURLString:(id)arg1 account:(id)arg2 emailAddresses:(id)arg3 ;
-(id)account;
-(id)emailAddresses;
-(void)setEmailAddresses:(id)arg1 ;
-(void)setAccount:(id)arg1 ;
@end
