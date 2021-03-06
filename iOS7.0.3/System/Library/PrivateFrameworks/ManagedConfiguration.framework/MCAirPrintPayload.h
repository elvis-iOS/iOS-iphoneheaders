/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSMutableArray;

@interface MCAirPrintPayload : MCPayload {

	unsigned _airPrintCount;
	NSMutableArray* _ippAddresses;

}

@property (assign,nonatomic) unsigned airPrintCount;                     //@synthesize airPrintCount=_airPrintCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * ippAddresses;              //@synthesize ippAddresses=_ippAddresses - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)restrictions;
-(id)description;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(unsigned)airPrintCount;
-(id)ippAddresses;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(void)setAirPrintCount:(unsigned)arg1 ;
-(void)setIppAddresses:(id)arg1 ;
-(void).cxx_destruct;
@end

