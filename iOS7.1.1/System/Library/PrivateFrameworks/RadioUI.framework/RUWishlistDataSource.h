/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol RUWishlistDataSourceDelegate;
@class RadioGetWishListRequest, NSArray;

@interface RUWishlistDataSource : NSObject {

	RadioGetWishListRequest* _wishlistRequest;
	NSArray* _wishlistedTracks;
	<RUWishlistDataSourceDelegate>* _delegate;

}

@property (assign,nonatomic) <RUWishlistDataSourceDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isRefreshing,nonatomic,readonly) bool refreshing; 
@property (nonatomic,readonly) NSArray * wishlistedTracks;                           //@synthesize wishlistedTracks=_wishlistedTracks - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void).cxx_destruct;
-(bool)isRefreshing;
-(id)wishlistedTracks;
-(void)deleteAllWishlistedTracks;
-(void)deleteWishlistedTrack:(id)arg1 ;
-(void)refreshWishlist;
-(void)_notifyDidInvalidate;
@end
