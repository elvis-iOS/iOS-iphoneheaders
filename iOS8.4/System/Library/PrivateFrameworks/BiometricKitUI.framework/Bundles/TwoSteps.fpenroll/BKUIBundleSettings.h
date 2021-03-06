/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:53 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/Bundles/TwoSteps.fpenroll/TwoSteps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface BKUIBundleSettings : NSObject
+(BOOL)isUserStudy;
+(BOOL)isHideRadarButton;
+(BOOL)isFpEnrollHapticFeedbackDisabled;
+(void)setDefaultSettingsValues;
+(float)floatForUserDefaultsKey:(id)arg1 ;
+(long long)integerForUserDefaultsKey:(id)arg1 ;
+(BOOL)boolForUserDefaultsKey:(id)arg1 ;
+(void)setBool:(BOOL)arg1 forUserDefaultsKey:(id)arg2 ;
+(void)setInteger:(long long)arg1 forUserDefaultsKey:(id)arg2 ;
+(void)synchronize;
+(id)objectForKey:(id)arg1 ;
+(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

