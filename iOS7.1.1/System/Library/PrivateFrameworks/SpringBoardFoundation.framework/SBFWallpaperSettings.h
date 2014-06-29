/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface SBFWallpaperSettings : _UISettings {

	bool _replaceBlurs;
	unsigned long long _colorBoxSize;
	long long _blurReplacementMode;

}

@property (assign,nonatomic) unsigned long long colorBoxSize;              //@synthesize colorBoxSize=_colorBoxSize - In the implementation block
@property (assign,nonatomic) bool replaceBlurs;                            //@synthesize replaceBlurs=_replaceBlurs - In the implementation block
@property (assign,nonatomic) long long blurReplacementMode;                //@synthesize blurReplacementMode=_blurReplacementMode - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setColorBoxSize:(unsigned long long)arg1 ;
-(unsigned long long)colorBoxSize;
-(bool)replaceBlurs;
-(void)setReplaceBlurs:(bool)arg1 ;
-(long long)blurReplacementMode;
-(void)setBlurReplacementMode:(long long)arg1 ;
@end
