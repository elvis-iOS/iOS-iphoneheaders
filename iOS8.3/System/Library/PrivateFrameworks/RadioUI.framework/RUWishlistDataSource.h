/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:21:57 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol RUWishlistDataSourceDelegate;
@class RadioGetWishListRequest, NSArray;

@interface RUWishlistDataSource : NSObject {

	RadioGetWishListRequest* _wishlistRequest;
	NSArray* _wishlistedTracks;
	id<RUWishlistDataSourceDelegate> _delegate;

}

@property (assign,nonatomic) id<RUWishlistDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isRefreshing,nonatomic,readonly) char refreshing; 
@property (nonatomic,readonly) NSArray * wishlistedTracks;                           //@synthesize wishlistedTracks=_wishlistedTracks - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id<RUWishlistDataSourceDelegate>)arg1 ;
-(id<RUWishlistDataSourceDelegate>)delegate;
-(char)isRefreshing;
-(NSArray *)wishlistedTracks;
-(void)deleteAllWishlistedTracks;
-(void)deleteWishlistedTrack:(id)arg1 ;
-(void)refreshWishlist;
-(void)_notifyDidInvalidate;
@end
