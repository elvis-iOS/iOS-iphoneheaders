/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:08 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Podcasts/Podcasts-Structs.h>
@interface TKDeviceUtils : NSObject
+(CGRect)adjustedFrameForRect:(CGRect)arg1 ;
+(float)roundToPixel:(float)arg1 ;
+(CGRect)screenRectWithOrientation:(int)arg1 ;
+(char)isRetina;
+(char)isTallPhone;
+(CGRect)adjustedFrameForRect:(CGRect)arg1 withOrientation:(int)arg2 ;
+(float)pointToPixel;
+(char)isLandscape;
+(char)isTouch;
+(char)isShortPhone;
+(char)isPortrait;
+(char)isPhone;
+(char)isPad;
+(CGRect)screenRect;
@end
