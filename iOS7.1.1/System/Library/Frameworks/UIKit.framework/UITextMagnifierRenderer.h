/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@interface UITextMagnifierRenderer : UIView {

	int m_autoscrollDirections;
	int m_magnifierMethod;

}

@property (assign,nonatomic) int autoscrollDirections; 
@property (assign,nonatomic) int magnifierMethod; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setAutoscrollDirections:(int)arg1 ;
-(void)drawMagnifier:(CGRect)arg1 ;
-(int)autoscrollDirections;
-(void)drawAutoscroller:(CGRect)arg1 ;
-(int)magnifierMethod;
-(void)setMagnifierMethod:(int)arg1 ;
@end
