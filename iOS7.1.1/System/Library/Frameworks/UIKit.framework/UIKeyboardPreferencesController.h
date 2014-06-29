/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface UIKeyboardPreferencesController : NSObject
+(id)sharedPreferencesController;
+(void)handleSpecificHardwareKeyboard;
-(void)dealloc;
-(id)init;
-(bool)boolForKey:(int)arg1 ;
-(void)setValue:(id)arg1 forKey:(int)arg2 ;
-(id)valueForKey:(int)arg1 ;
-(double)rivenSizeFactor:(double)arg1 ;
-(void)saveInputModes:(id)arg1 ;
-(void)setInputModeLastUsed:(id)arg1 ;
-(bool)spaceConfirmationEnabled;
-(bool)typologyEnabled;
-(void)synchronizePreferences;
-(void)releaseDontSynchronizePreferences;
-(void)preferencesControllerChanged:(id)arg1 ;
-(void)touchSynchronizePreferencesTimer;
-(bool)costlyCapture;
@end
