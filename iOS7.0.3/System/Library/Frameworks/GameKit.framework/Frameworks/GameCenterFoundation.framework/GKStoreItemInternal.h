/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSNumber, NSString, NSURL, NSDate;

@interface GKStoreItemInternal : GKInternalRepresentation {

	NSNumber* _adamID;
	NSString* _artistName;
	NSString* _priceDisplay;
	NSURL* _viewItemURL;
	NSURL* _shortViewItemURL;
	NSURL* _tellAFriendMessageContentsUrl;
	NSDate* _expirationDate;
	unsigned _numberOfUserRatings;
	float _averageUserRating;
	BOOL _owned;

}

@property (nonatomic,retain) NSNumber * adamID;                                  //@synthesize adamID=_adamID - In the implementation block
@property (nonatomic,retain) NSString * artistName;                              //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,retain) NSString * priceDisplay;                            //@synthesize priceDisplay=_priceDisplay - In the implementation block
@property (nonatomic,retain) NSURL * viewItemURL;                                //@synthesize viewItemURL=_viewItemURL - In the implementation block
@property (nonatomic,retain) NSURL * shortViewItemURL;                           //@synthesize shortViewItemURL=_shortViewItemURL - In the implementation block
@property (nonatomic,retain) NSURL * tellAFriendMessageContentsUrl;              //@synthesize tellAFriendMessageContentsUrl=_tellAFriendMessageContentsUrl - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                            //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) unsigned numberOfUserRatings;                       //@synthesize numberOfUserRatings=_numberOfUserRatings - In the implementation block
@property (assign,nonatomic) float averageUserRating;                            //@synthesize averageUserRating=_averageUserRating - In the implementation block
@property (assign,nonatomic) BOOL owned;                                         //@synthesize owned=_owned - In the implementation block
+(id)secureCodedPropertyKeys;
-(id)tellAFriendMessageContentsUrl;
-(void)setTellAFriendMessageContentsUrl:(id)arg1 ;
-(BOOL)owned;
-(void)setOwned:(BOOL)arg1 ;
-(id)priceDisplay;
-(id)viewItemURL;
-(float)averageUserRating;
-(void)setViewItemURL:(id)arg1 ;
-(id)shortViewItemURL;
-(void)setShortViewItemURL:(id)arg1 ;
-(id)adamID;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(BOOL)isValid;
-(id)artistName;
-(void)setArtistName:(id)arg1 ;
-(id)expirationDate;
-(void)setExpirationDate:(id)arg1 ;
-(void)setPriceDisplay:(id)arg1 ;
-(void)setAdamID:(id)arg1 ;
-(void)setAverageUserRating:(float)arg1 ;
-(unsigned)numberOfUserRatings;
-(void)setNumberOfUserRatings:(unsigned)arg1 ;
@end

