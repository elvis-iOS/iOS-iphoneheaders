/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppStore/AppStore-Structs.h>
#import <StoreKitUI/SKUIItem.h>

@class SSPurchasableAppItem, SKUIItemOffer;

@interface ASPurchasedItem : SKUIItem {

	SSPurchasableAppItem* _purchasableItem;
	SKUIItemOffer* _redownloadOffer;
	char _hideable;

}

@property (getter=isSupportedOnIPad,nonatomic,readonly) char supportedOnIPad; 
@property (getter=isSupportedOnIPhone,nonatomic,readonly) char supportedOnIPhone; 
@property (getter=isFamilyShareable,nonatomic,readonly) char familyShareable; 
@property (assign,getter=isHideable,nonatomic) char hideable;                                  //@synthesize hideable=_hideable - In the implementation block
-(char)isHideable;
-(id)initWithPurchasableAppItem:(id)arg1 ;
-(void)setHideable:(char)arg1 ;
-(char)isSupportedOnIPhone;
-(char)isSupportedOnIPad;
-(id)versionString;
-(id)bundleIdentifier;
-(id)title;
-(float)userRating;
-(id)artistName;
-(int)itemKind;
-(long long)itemIdentifier;
-(id)productPageURLString;
-(int)parentalControlsRank;
-(id)primaryItemOffer;
-(char)isNewsstandApp;
-(id)artworkURLForSize:(int)arg1 ;
-(id)categoryName;
-(NSRange)ageBandRange;
-(id)itemKindString;
-(long long)versionIdentifier;
-(int)numberOfUserRatings;
-(id)largestArtworkURL;
-(char)isFamilyShareable;
@end

