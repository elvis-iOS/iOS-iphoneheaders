/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <RadioUI/MPUStackViewDataSource.h>

@class MPUStackView, UIImage, UIView;

@interface RUWelcomeCollectionViewCell : UICollectionViewCell <MPUStackViewDataSource> {

	MPUStackView* _stackView;
	UIImage* _artworkImage;
	CGSize _artworkSize;

}

@property (nonatomic,retain) UIImage * artworkImage;                      //@synthesize artworkImage=_artworkImage - In the implementation block
@property (assign,nonatomic) CGSize artworkSize;                          //@synthesize artworkSize=_artworkSize - In the implementation block
@property (nonatomic,retain) UIView * perspectiveTargetView; 
@property (assign,nonatomic) CGPoint vanishingPoint; 
+(CGSize)artworkSizeForOrientation:(long long)arg1 ;
-(id)artworkImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void).cxx_destruct;
-(void)setArtworkImage:(id)arg1 ;
-(void)stackView:(id)arg1 applyAttributesToItem:(id)arg2 atIndex:(long long)arg3 ;
-(void)setPerspectiveTargetView:(id)arg1 ;
-(void)setVanishingPoint:(CGPoint)arg1 ;
-(void)updateForChangedDistanceFromVanishingPoint;
-(long long)numberOfItemsInStackView:(id)arg1 ;
-(void)stackView:(id)arg1 didCreateItem:(id)arg2 ;
-(id)perspectiveTargetView;
-(CGPoint)vanishingPoint;
-(void)setArtworkSize:(CGSize)arg1 ;
-(CGSize)artworkSize;
@end

