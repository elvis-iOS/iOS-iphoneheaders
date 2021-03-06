/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/CKEditableCollectionViewCell.h>

@interface CKTranscriptCell : CKEditableCollectionViewCell {

	bool _wantsDrawerLayout;
	BOOL _orientation;
	double _drawerPercentRevealed;

}

@property (assign,nonatomic) bool wantsDrawerLayout;                    //@synthesize wantsDrawerLayout=_wantsDrawerLayout - In the implementation block
@property (assign,nonatomic) BOOL orientation;                          //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) double drawerPercentRevealed;              //@synthesize drawerPercentRevealed=_drawerPercentRevealed - In the implementation block
-(void)configureForRowObject:(id)arg1 ;
-(void)configureForRow:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)orientation;
-(void)setOrientation:(BOOL)arg1 ;
-(void)layoutSubviewsForContents;
-(void)layoutSubviewsForDrawer;
-(double)drawerPercentRevealed;
-(bool)wantsDrawerLayout;
-(void)setDrawerPercentRevealed:(double)arg1 ;
-(void)setWantsDrawerLayout:(bool)arg1 ;
@end

