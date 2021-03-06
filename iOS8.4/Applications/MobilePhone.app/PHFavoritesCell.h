/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:51 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIImageView, NSLayoutConstraint, NSMutableArray, PHFavoritesEntry;

@interface PHFavoritesCell : UITableViewCell {

	UILabel* _titleTextLabel;
	UILabel* _labelTextLabel;
	UIImageView* _iconGlyphView;
	UIImageView* _contactPhotoView;
	NSLayoutConstraint* _bottomMarginConstraint;
	NSLayoutConstraint* _iconLabelConstraint;
	long _buildConstraintsOnceToken;
	NSMutableArray* _contactPhotoConstraints;
	NSMutableArray* _textLabelConstraints;
	NSMutableArray* _iconGlyphConstraints;
	PHFavoritesEntry* _favoritesEntry;

}

@property (assign,nonatomic) PHFavoritesEntry * favoritesEntry;              //@synthesize favoritesEntry=_favoritesEntry - In the implementation block
@property (readonly) char shouldShowTextLabel; 
@property (readonly) char shouldShowIconGlyph; 
@property (readonly) char shouldShowContactPhotos; 
+(char)shouldShowContactPhotos;
+(id)faceTimeAudioGlyph;
+(id)faceTimeAudioGlyphPress;
+(id)faceTimeGlyph;
+(id)faceTimeGlyphPress;
+(float)editingMarginWidth;
+(float)marginWidth;
-(char)shouldShowContactPhotos;
-(void)_handleContentSizeCategoryDidChange:(id)arg1 ;
-(void)_handleFavoritesShowsContactPhotosChanged:(id)arg1 ;
-(void)_handleFavoritesEntryChanged:(id)arg1 ;
-(void)_populateSubviewsFromFavoritesItem;
-(void)_buildConstraints;
-(char)shouldShowTextLabel;
-(char)shouldShowIconGlyph;
-(void)setFavoritesEntry:(PHFavoritesEntry *)arg1 ;
-(PHFavoritesEntry *)favoritesEntry;
-(void)_updateFonts;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(char)_drawsTopSeparatorDuringReordering;
-(void)_setReordering:(char)arg1 ;
-(void)_updateConstraints;
@end

