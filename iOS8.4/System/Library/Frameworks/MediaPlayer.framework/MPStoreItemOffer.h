/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:11 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/NSSecureCoding.h>

@class NSDictionary, NSArray, NSString, NSNumber;

@interface MPStoreItemOffer : NSObject <NSSecureCoding> {

	NSDictionary* _lookupDictionary;

}

@property (nonatomic,copy,readonly) NSArray * assets; 
@property (nonatomic,copy,readonly) NSString * buyParameters; 
@property (nonatomic,copy,readonly) NSString * formattedPrice; 
@property (nonatomic,copy,readonly) NSString * offerType; 
@property (nonatomic,copy,readonly) NSNumber * price; 
+(BOOL)supportsSecureCoding;
-(NSString *)offerType;
-(id)initWithLookupItemOffer:(id)arg1 ;
-(NSString *)buyParameters;
-(NSString *)formattedPrice;
-(NSNumber *)price;
-(id)actionTextForType:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithLookupDictionary:(id)arg1 ;
-(NSArray *)assets;
@end
