/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:18 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ToneLibrary/ToneLibrary-Structs.h>
@class NSDictionary, TLAccessQueue;

@interface TLVibrationManager : NSObject {

	BOOL _needsRefresh;
	BOOL _allowsAutoRefresh;
	unsigned long long _specialBehaviors;
	NSDictionary* _cachedSystemVibrationPatterns;
	NSDictionary* _cachedUserGeneratedVibrationPatterns;
	TLAccessQueue* _accessQueue;

}

@property (assign,nonatomic) BOOL needsRefresh;                                                                                                  //@synthesize needsRefresh=_needsRefresh - In the implementation block
@property (assign,nonatomic) BOOL allowsAutoRefresh; 
@property (nonatomic,readonly) BOOL shouldVibrateForCurrentRingerSwitchState; 
@property (nonatomic,readonly) BOOL shouldVibrateOnRing; 
@property (nonatomic,readonly) BOOL shouldVibrateOnSilent; 
@property (assign,setter=_setAllowsAutoRefresh:,nonatomic) BOOL _allowsAutoRefresh;                                                              //@synthesize allowsAutoRefresh=_allowsAutoRefresh - In the implementation block
@property (assign,setter=_setSpecialBehaviors:,nonatomic) unsigned long long _specialBehaviors;                                                  //@synthesize specialBehaviors=_specialBehaviors - In the implementation block
@property (getter=_isUnitTestingModeEnabled,nonatomic,readonly) BOOL _unitTestingModeEnabled; 
@property (nonatomic,readonly) NSDictionary * _systemVibrationPatterns; 
@property (setter=_setCachedSystemVibrationPatterns:,nonatomic,retain) NSDictionary * _cachedSystemVibrationPatterns;                            //@synthesize cachedSystemVibrationPatterns=_cachedSystemVibrationPatterns - In the implementation block
@property (nonatomic,readonly) NSDictionary * _userGeneratedVibrationPatterns; 
@property (setter=_setCachedUserGeneratedVibrationPatterns:,nonatomic,retain) NSDictionary * _cachedUserGeneratedVibrationPatterns;              //@synthesize cachedUserGeneratedVibrationPatterns=_cachedUserGeneratedVibrationPatterns - In the implementation block
@property (setter=_setAccessQueue:,retain) TLAccessQueue * _accessQueue;                                                                         //@synthesize accessQueue=_accessQueue - In the implementation block
+(id)sharedVibrationManager;
+(void)_handleVibrationPreferencesDidChangeNotification;
+(void)_handleVibrateOnRingOrSilentDidChangeNotification;
-(void)_handleUserGeneratedVibrationsDidChangeNotification;
-(BOOL)vibrationWithIdentifierIsValid:(id)arg1 ;
-(void)setAllowsAutoRefresh:(BOOL)arg1 ;
-(id)nameOfVibrationWithIdentifier:(id)arg1 ;
-(BOOL)refresh;
-(void)dealloc;
-(id)init;
-(TLAccessQueue *)_accessQueue;
-(id)_nameOfVibrationWithIdentifier:(id)arg1 ;
-(id)patternForVibrationWithIdentifier:(id)arg1 ;
-(id)noneVibrationPattern;
-(BOOL)shouldVibrateForCurrentRingerSwitchState;
-(id)patternForVibrationWithIdentifier:(id)arg1 repeating:(BOOL)arg2 ;
-(id)currentVibrationIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2 ;
-(id)currentVibrationIdentifierForAlertType:(int)arg1 ;
-(id)noneVibrationName;
-(id)allUserSelectableSystemVibrationIdentifiers;
-(id)allUserGeneratedVibrationIdentifiers;
-(BOOL)deleteUserGeneratedVibrationPatternWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)addUserGeneratedVibrationPattern:(id)arg1 name:(id)arg2 error:(id*)arg3 ;
-(BOOL)setName:(id)arg1 forUserGeneratedVibrationWithIdentifier:(id)arg2 error:(id*)arg3 ;
-(void)_setAccessQueue:(id)arg1 ;
-(void)_performBlockInAccessQueue:(/*^block*/id)arg1 ;
-(id)_newServiceConnection;
-(id)_initWithSpecialBehaviors:(unsigned long long)arg1 ;
-(void)_setSpecialBehaviors:(unsigned long long)arg1 ;
-(void)_setAllowsAutoRefresh:(BOOL)arg1 ;
-(BOOL)_isUnitTestingModeEnabled;
-(void)_setCachedSystemVibrationPatterns:(id)arg1 ;
-(void)_setCachedUserGeneratedVibrationPatterns:(id)arg1 ;
-(BOOL)_allowsAutoRefresh;
-(unsigned long long)_specialBehaviors;
-(BOOL)needsRefresh;
-(NSDictionary *)_cachedUserGeneratedVibrationPatterns;
-(void)_setNeedsRefresh:(BOOL)arg1 ;
-(NSDictionary *)_userGeneratedVibrationPatterns;
-(void)setCurrentVibrationIdentifier:(id)arg1 forAlertType:(int)arg2 accountIdentifier:(id)arg3 ;
-(id)_copySystemWideVibrationPatternPreferenceKeyForAlertType:(int)arg1 accountIdentifier:(id)arg2 ;
-(id)defaultVibrationIdentifierForAlertType:(int)arg1 ;
-(id)_currentVibrationIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2 ;
-(id)_patternForSystemVibrationWithIdentifier:(id)arg1 ;
-(NSDictionary *)_cachedSystemVibrationPatterns;
-(NSDictionary *)_systemVibrationPatterns;
-(id)_localizedNameForVibrationWithIdentifier:(id)arg1 ;
-(id)_retrieveUserGeneratedVibrationPatternsUsingService;
-(BOOL)_setUserGeneratedVibrationPatternsUsingService:(id)arg1 error:(id*)arg2 ;
-(void)_didChangeUserGeneratedVibrationPatterns;
-(BOOL)_saveUserGeneratedVibrationPatterns:(id)arg1 error:(id*)arg2 ;
-(BOOL)_removeAllUserGeneratedVibrationPatternsUsingServiceWithError:(id*)arg1 ;
-(BOOL)_booleanPreferenceForKey:(CFStringRef)arg1 defaultValue:(BOOL)arg2 ;
-(BOOL)shouldVibrateOnSilent;
-(BOOL)shouldVibrateOnRing;
-(unsigned long long)_storedSystemVibrationDataMigrationVersion;
-(void)setCurrentVibrationIdentifier:(id)arg1 forAlertType:(int)arg2 ;
-(void)_makeSystemVibrationDataMigrationVersionCurrentIfNecessary;
-(BOOL)allowsAutoRefresh;
-(id)currentVibrationNameForAlertType:(int)arg1 ;
-(id)currentVibrationPatternForAlertType:(int)arg1 ;
-(id)defaultVibrationNameForAlertType:(int)arg1 ;
-(id)defaultVibrationPatternForAlertType:(int)arg1 ;
-(BOOL)_vibrationIsSettableForAlertType:(int)arg1 ;
-(unsigned long long)_numberOfUserGeneratedVibrations;
-(BOOL)_removeAllUserGeneratedVibrationsWithError:(id*)arg1 ;
-(BOOL)_migrateLegacySettings;
@end
