/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:13 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIFont;

@interface UIAutocorrectTextView : UIView {

	NSString* m_string;
	int m_type;
	int m_edgeType;
	UIFont* m_textFont;
	BOOL m_animating;
	BOOL m_isLongString;

}

@property (assign,nonatomic) BOOL animating; 
@property (assign,nonatomic) BOOL isLongString; 
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)setAnimating:(BOOL)arg1 ;
-(void)setEdgeType:(int)arg1 ;
-(CGRect)_calculateRectForExpandedHitRegion;
-(id)initWithFrame:(CGRect)arg1 string:(id)arg2 type:(int)arg3 edgeType:(int)arg4 ;
-(BOOL)animating;
-(BOOL)isLongString;
-(void)setIsLongString:(BOOL)arg1 ;
@end

