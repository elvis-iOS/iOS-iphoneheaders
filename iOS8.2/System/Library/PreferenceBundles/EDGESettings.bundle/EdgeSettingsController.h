/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:18 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PreferenceBundles/EDGESettings.bundle/EDGESettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSArray, NSDictionary, PSSystemConfiguration, NSMutableDictionary;

@interface EdgeSettingsController : PSListController {

	NSArray* _switchSpecifiers;
	NSArray* _proxyAuthSpecifiers;
	NSArray* _group1Specifiers;
	NSArray* _pacSpecifiers;
	NSArray* _manualSpecifiers;
	NSArray* _advancedSpecifiers;
	NSArray* _InternetContextSpecifiers;
	NSArray* _VVMContextSpecifiers;
	NSArray* _MMSContextSpecifiers;
	NSArray* _tetheringContextSpecifiers;
	NSArray* _lteAttachAPNSpecifiers;
	NSArray* _resetSpecifiers;
	char _proxyAuth;
	NSDictionary* _lastProxyDict;
	PSSystemConfiguration* _systemConfig;
	NSMutableDictionary* _lastAttachAPNDict;
	NSMutableDictionary* _newAttachAPNDict;
	char _cacheInitialized;
	NSMutableDictionary* _internetSettingsDictionary;
	NSMutableDictionary* _vvmSettingsDictionary;
	NSMutableDictionary* _mmsSettingsDictionary;
	NSMutableDictionary* _tetheringSettingsDictionary;

}
+(char)isAttachAPNEditingAllowed;
+(id)makeUIApnBasedOn:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)applicationWillSuspend;
-(void)applicationDidResume;
-(void)viewDidDisappear:(char)arg1 ;
-(id)_getAPNDictinaryForService:(int)arg1 ;
-(void)_updateKey:(id)arg1 toValue:(id)arg2 forServiceType:(int)arg3 ;
-(void)resetAPNsDictionaries;
-(char)shouldResetAttachAPN;
-(void)resetAttachAPNSettings;
-(id)_getMMSObjectForKey:(id)arg1 ;
-(void)_setMMSOverrideValue:(id)arg1 forKey:(id)arg2 ;
-(int)_pdpContextIndexForServiceType:(int)arg1 ;
-(char)_shouldShowUIForServiceType:(int)arg1 ;
-(id)copyStoredAPNSettings;
-(char)isTypeOfService:(id)arg1 ofServiceType:(int)arg2 ;
-(id)_APNDictionaryForServiceFromSC:(int)arg1 ;
-(id)_blankAPNDictionaryWithTypeMask:(int)arg1 ;
-(void)initAPNCacheDictionaries;
-(void)initDictionaryForUIApn:(id*)arg1 forServiceType:(int)arg2 ;
-(char)_isAPNDictionaryBlank:(id)arg1 ;
-(void)uploadSettingsOnCT:(id)arg1 ;
-(id)attachAPNSettings;
-(void)commitAttachAPNSettings;
-(void)commitAPNsSettings;
-(id)getAPNDataForSpecifier:(id)arg1 ;
-(void)setAPNData:(id)arg1 forSpecifier:(id)arg2 ;
-(void)resetCarrierSettings:(id)arg1 ;
-(id)getMMSValueForSpecifier:(id)arg1 ;
-(void)setMMSValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)getMMSNumericValueForSpecifier:(id)arg1 ;
-(void)setMMSNumericValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)edgeDNS:(id)arg1 ;
-(void)setEdgeDNS:(id)arg1 specifier:(id)arg2 ;
-(id)getAttachAPNDataForSpecifier:(id)arg1 ;
-(void)setAttachAPNData:(id)arg1 forSpecifier:(id)arg2 ;
-(id)specifiers;
@end

