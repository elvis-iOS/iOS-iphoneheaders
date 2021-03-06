/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:37:55 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface FTDeviceSupport : NSObject {

	NSString* _number;
	char _blockPost;
	char _supportsFrontCamera;
	char _supportsBackCamera;
	char _supportsiMessage;
	char _supportsSMS;
	char _supportsMMS;
	char _mmsConfigured;
	char _supportsHandoff;
	char _supportsTethering;
	char _supportsFT;
	char _supportsFTA;
	char _supportsWiFi;
	char _supportsWLAN;
	char _supportsNonWiFiFaceTime;
	char _supportsCellularData;
	char _shouldUseSIMState;
	char _commCenterDead;
	char _simBecameNotReady;
	char _simInserted;
	int _carrierBundleSupported;
	int _iMessageAllowedToken;
	char _faceTimeBlocked;
	char _iMessageBlocked;
	char _accountModificationRestricted;
	int _performanceClass;

}

@property (nonatomic,readonly) char isTelephonyDevice; 
@property (nonatomic,readonly) char faceTimeAvailable; 
@property (nonatomic,readonly) char faceTimeBlocked; 
@property (nonatomic,readonly) char faceTimeSupported; 
@property (nonatomic,readonly) char callingAvailable; 
@property (nonatomic,readonly) char callingBlocked; 
@property (nonatomic,readonly) char callingSupported; 
@property (nonatomic,readonly) char nonWifiFaceTimeAvailable; 
@property (nonatomic,readonly) char nonWifiCallingAvailable; 
@property (nonatomic,readonly) char iMessageAvailable; 
@property (nonatomic,readonly) char iMessageBlocked; 
@property (nonatomic,readonly) char iMessageSupported; 
@property (nonatomic,readonly) char identityServicesSupported; 
@property (nonatomic,readonly) char madridAvailable; 
@property (nonatomic,readonly) char madridBlocked; 
@property (nonatomic,readonly) char madridSupported; 
@property (nonatomic,readonly) char conferencingEnabled; 
@property (nonatomic,readonly) char conferencingBlocked; 
@property (nonatomic,readonly) char conferencingAllowed; 
@property (nonatomic,readonly) char registrationSupported; 
@property (nonatomic,readonly) char commCenterDead; 
@property (nonatomic,readonly) char accountModificationRestricted; 
@property (nonatomic,readonly) char wantsBreakBeforeMake; 
@property (nonatomic,readonly) char SIMInserted; 
@property (nonatomic,readonly) char isC2KEquipment; 
@property (nonatomic,readonly) char supportsSimultaneousVoiceAndDataRightNow; 
@property (nonatomic,readonly) char supportsSMSIdentification; 
@property (nonatomic,readonly) char supportsAppleIDIdentification; 
@property (nonatomic,readonly) char supportsHandoff;                                       //@synthesize supportsHandoff=_supportsHandoff - In the implementation block
@property (nonatomic,readonly) char supportsTethering;                                     //@synthesize supportsTethering=_supportsTethering - In the implementation block
@property (nonatomic,readonly) char supportsSMS;                                           //@synthesize supportsSMS=_supportsSMS - In the implementation block
@property (nonatomic,readonly) char supportsMMS;                                           //@synthesize supportsMMS=_supportsMMS - In the implementation block
@property (nonatomic,readonly) char mmsConfigured;                                         //@synthesize mmsConfigured=_mmsConfigured - In the implementation block
@property (nonatomic,readonly) char supportsWiFi;                                          //@synthesize supportsWiFi=_supportsWiFi - In the implementation block
@property (nonatomic,readonly) char supportsCellularData;                                  //@synthesize supportsCellularData=_supportsCellularData - In the implementation block
@property (nonatomic,readonly) char supportsWLAN;                                          //@synthesize supportsWLAN=_supportsWLAN - In the implementation block
@property (nonatomic,readonly) char supportsNonWiFiFaceTime;                               //@synthesize supportsNonWiFiFaceTime=_supportsNonWiFiFaceTime - In the implementation block
@property (nonatomic,readonly) char supportsNonWiFiCalling; 
@property (nonatomic,readonly) char supportsFrontFacingCamera;                             //@synthesize supportsFrontCamera=_supportsFrontCamera - In the implementation block
@property (nonatomic,readonly) char supportsBackFacingCamera;                              //@synthesize supportsBackCamera=_supportsBackCamera - In the implementation block
@property (nonatomic,readonly) NSDictionary * CTNetworkInformation; 
@property (nonatomic,readonly) NSDictionary * telephonyCapabilities; 
@property (nonatomic,readonly) NSString * deviceName; 
@property (nonatomic,readonly) NSString * deviceColor; 
@property (nonatomic,readonly) NSString * enclosureColor; 
@property (nonatomic,readonly) NSString * deviceIDPrefix; 
@property (nonatomic,readonly) NSString * deviceTypeIDPrefix; 
@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) NSString * userAgentString; 
@property (nonatomic,readonly) NSString * productName; 
@property (nonatomic,readonly) NSString * productVersion; 
@property (nonatomic,readonly) NSString * productBuildVersion; 
@property (nonatomic,readonly) NSString * deviceInformationString; 
@property (nonatomic,readonly) NSString * telephoneNumber; 
@property (nonatomic,readonly) int performanceClass; 
@property (nonatomic,readonly) int deviceType; 
+(id)sharedInstance;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(NSString *)model;
-(void)_updateCapabilities;
-(char)supportsSMS;
-(char)isTelephonyDevice;
-(char)faceTimeSupported;
-(char)callingSupported;
-(char)supportsMMS;
-(char)madridSupported;
-(NSString *)deviceName;
-(NSString *)productName;
-(NSString *)productVersion;
-(char)supportsSMSIdentification;
-(char)iMessageAvailable;
-(char)supportsWiFi;
-(char)accountModificationRestricted;
-(char)isC2KEquipment;
-(void)_watchNotifyTokens;
-(void)_updateManagedConfigurationSettings;
-(void)_registerForCarrierNotifications;
-(void)_registerForCapabilityNotifications;
-(void)_registerForCoreTelephonyNotifications;
-(void)_registerForLockdownNotifications;
-(void)_registerForManagedConfigurationNotifications;
-(void)_unregisterForManagedConfigurationNotifications;
-(void)_unregisterForCoreTelephonyNotifications;
-(void)_unregisterForCarrierNotifications;
-(void)_unregisterForCommCenterReadyNotifications;
-(int)performanceClass;
-(void)_registerForCommCenterReadyNotifications;
-(char)madridBlocked;
-(char)callingBlocked;
-(char)faceTimeBlocked;
-(char)madridAvailable;
-(char)conferencingEnabled;
-(char)conferencingBlocked;
-(char)conferencingAllowed;
-(char)iMessageSupported;
-(char)supportsAppleIDIdentification;
-(NSDictionary *)telephonyCapabilities;
-(void)_lockdownStateChanged:(id)arg1 ;
-(void)carrierSettingsChanged:(id)arg1 ;
-(void)_commCenterAlive;
-(void)_operatorChanged;
-(void)_carrierChanged;
-(void)_registerForInternalCoreTelephonyNotifications;
-(char)commCenterDead;
-(char)iMessageBlocked;
-(char)identityServicesSupported;
-(char)registrationSupported;
-(NSString *)deviceIDPrefix;
-(NSString *)deviceTypeIDPrefix;
-(char)SIMInserted;
-(void)_simStatusChanged:(id)arg1 ;
-(void)_handleTechnologyChange:(id)arg1 ;
-(void)_handlePhoneNumberRegistrationStateChanged:(id)arg1 ;
-(NSDictionary *)CTNetworkInformation;
-(char)nonWifiCallingAvailable;
-(NSString *)enclosureColor;
-(char)supportsHandoff;
-(char)supportsTethering;
-(char)nonWifiFaceTimeAvailable;
-(char)faceTimeAvailable;
-(char)callingAvailable;
-(char)supportsFrontFacingCamera;
-(char)supportsBackFacingCamera;
-(char)wantsBreakBeforeMake;
-(char)supportsNonWiFiFaceTime;
-(NSString *)telephoneNumber;
-(char)mmsConfigured;
-(NSString *)userAgentString;
-(NSString *)deviceInformationString;
-(NSString *)productBuildVersion;
-(NSString *)deviceColor;
-(char)supportsWLAN;
-(char)supportsNonWiFiCalling;
-(char)supportsCellularData;
-(char)supportsSimultaneousVoiceAndDataRightNow;
-(int)deviceType;
@end

