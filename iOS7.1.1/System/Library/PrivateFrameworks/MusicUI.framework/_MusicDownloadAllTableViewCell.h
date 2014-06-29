/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <StoreKitUI/SKUIItemOfferButtonDelegate.h>

@class SKUIItemOfferButton;

@interface _MusicDownloadAllTableViewCell : UITableViewCell <SKUIItemOfferButtonDelegate> {

	SKUIItemOfferButton* _itemOfferButton;
	bool _downloadAllCellForArtist;
	long long _downloadableSongCount;

}

@property (assign,nonatomic) long long downloadableSongCount;                                              //@synthesize downloadableSongCount=_downloadableSongCount - In the implementation block
@property (assign,getter=isDownloadAllCellForArtist,nonatomic) bool downloadAllCellForArtist;              //@synthesize downloadAllCellForArtist=_downloadAllCellForArtist - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSectionLocation:(int)arg1 animated:(bool)arg2 ;
-(void).cxx_destruct;
-(long long)downloadableSongCount;
-(void)setDownloadableSongCount:(long long)arg1 ;
-(void)setDownloadAllCellForArtist:(bool)arg1 ;
-(void)_itemOfferButtonAction:(id)arg1 withEvent:(id)arg2 ;
-(void)_updateDownloadStateViews;
-(bool)isDownloadAllCellForArtist;
-(void)itemOfferButtonWillAnimateTransition:(id)arg1 ;
@end
