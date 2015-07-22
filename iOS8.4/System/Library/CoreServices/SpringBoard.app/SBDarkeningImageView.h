/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:32 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIImageView.h>

@class UIImage;

@interface SBDarkeningImageView : UIImageView {

	UIImage* _baseImage;
	double _brightness;

}

@property (assign,nonatomic) double brightness; 
-(void)setImage:(id)arg1 brightness:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(id)description;
-(void)setBrightness:(double)arg1 ;
-(double)brightness;
@end
