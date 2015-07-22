/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:32 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, NSString, UIImage;

@interface MSCLAuthorAlertActionView : UIView {

	UIEdgeInsets _finalLayoutMargins;
	UIImageView* _imageView;
	UILabel* _label;

}

@property (nonatomic,copy) NSString * authorName; 
@property (nonatomic,retain) UIImage * image; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(UIImage *)image;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)layoutMargins;
-(void)didMoveToSuperview;
-(NSString *)authorName;
-(void)setAuthorName:(NSString *)arg1 ;
-(void)setFinalLayoutMargins:(UIEdgeInsets)arg1 ;
@end
