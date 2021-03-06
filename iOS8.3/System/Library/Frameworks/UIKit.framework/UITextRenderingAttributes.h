/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:31 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/NSCopying.h>

@class UIFont;

@interface UITextRenderingAttributes : NSObject <NSCopying> {

	UIFont* _font;
	float _minimumFontSize;
	float _actualFontSize;
	float _lineSpacing;
	int _lineBreakMode;
	int _baselineAdjustment;
	float _trackingAdjustment;
	float _minimumTrackingAdjustment;
	float _actualTrackingAdjustment;
	int _alignment;
	char _includeEmoji;
	CGRect _truncationRect;
	char _drawUnderline;

}
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

