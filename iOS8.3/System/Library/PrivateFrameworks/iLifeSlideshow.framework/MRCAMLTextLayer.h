/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:32:41 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLifeSlideshow/MRCAMLLayer.h>

@class MRImage, MRTextRenderer;

@interface MRCAMLTextLayer : MRCAMLLayer {

	MRImage* textImage;
	MRTextRenderer* textRenderer;

}

@property (nonatomic,retain) MRImage * textImage; 
@property (nonatomic,retain) MRTextRenderer * textRenderer; 
-(void)dealloc;
-(MRTextRenderer *)textRenderer;
-(void)setTextRenderer:(MRTextRenderer *)arg1 ;
-(void)setTextImage:(MRImage *)arg1 ;
-(MRImage *)textImage;
@end

