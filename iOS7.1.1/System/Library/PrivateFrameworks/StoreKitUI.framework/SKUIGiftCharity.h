/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray, SKUIArtwork;

@interface SKUIGiftCharity : NSObject {

	NSString* _amountDisclaimer;
	NSArray* _amounts;
	NSString* _description;
	NSString* _identifier;
	NSString* _legalText;
	NSString* _legalText2;
	SKUIArtwork* _logoArtwork;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * amountDisclaimer;                //@synthesize amountDisclaimer=_amountDisclaimer - In the implementation block
@property (nonatomic,readonly) NSString * charityDescription;              //@synthesize description=_description - In the implementation block
@property (nonatomic,readonly) NSString * legalText;                       //@synthesize legalText=_legalText - In the implementation block
@property (nonatomic,readonly) NSString * legalText2;                      //@synthesize legalText2=_legalText2 - In the implementation block
@property (nonatomic,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * donationAmounts;                  //@synthesize amounts=_amounts - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) SKUIArtwork * logoArtwork;                  //@synthesize logoArtwork=_logoArtwork - In the implementation block
-(id)name;
-(id)identifier;
-(void).cxx_destruct;
-(id)logoArtwork;
-(id)initWithCharityDictionary:(id)arg1 ;
-(id)amountDisclaimer;
-(id)charityDescription;
-(id)donationAmounts;
-(id)legalText;
-(id)legalText2;
@end

