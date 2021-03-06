/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:34:03 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <AccessibilitySettings/VoiceOverBluetoothAlertDelegate.h>

@class NSMutableArray, NSMutableDictionary, PSSpecifier, NSString, VoiceOverBluetoothAlert, VoiceOverBluetoothSSPPairingRequest, UIAlertView, NSArray;

@interface VoiceOverBluetoothDevicesController : PSListController <VoiceOverBluetoothAlertDelegate> {

	NSMutableArray* _mainSpecifiersGroup;
	NSMutableArray* _deviceSpecifiersGroup;
	NSMutableDictionary* _devicesDict;
	NSMutableDictionary* _pairingPINDict;
	char _power;
	char _scanningEnabled;
	char _bluetoothIsBusy;
	PSSpecifier* _currentDeviceSpecifier;
	NSString* _primaryDeviceAddress;
	VoiceOverBluetoothAlert* _alert;
	VoiceOverBluetoothSSPPairingRequest* _sspAlert;
	char _togglingPower;
	unsigned _authorizedServices;
	UIAlertView* _powerAlert;

}

@property (assign,nonatomic) char scanningEnabled;                          //@synthesize scanningEnabled=_scanningEnabled - In the implementation block
@property (assign,nonatomic) char bluetoothIsBusy;                          //@synthesize bluetoothIsBusy=_bluetoothIsBusy - In the implementation block
@property (nonatomic,readonly) PSSpecifier * currentSpecifier;              //@synthesize currentDeviceSpecifier=_currentDeviceSpecifier - In the implementation block
@property (nonatomic,retain) NSString * primaryDeviceAddress;               //@synthesize primaryDeviceAddress=_primaryDeviceAddress - In the implementation block
@property (nonatomic,retain) NSArray * mainSpecifiersGroup;                 //@synthesize mainSpecifiersGroup=_mainSpecifiersGroup - In the implementation block
@property (assign,nonatomic) unsigned authorizedServices;                   //@synthesize authorizedServices=_authorizedServices - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)bluetoothIsBusy;
-(char)scanningEnabled;
-(void)_stopScanning;
-(void)_startScanning;
-(void)_cleanupPairing;
-(void)setAuthorizedServices:(unsigned)arg1 ;
-(void)setPrimaryDeviceAddress:(NSString *)arg1 ;
-(NSArray *)mainSpecifiersGroup;
-(void)setMainSpecifiersGroup:(NSArray *)arg1 ;
-(void)setScanningEnabled:(char)arg1 ;
-(void)showBluetoothPowerAlert:(char)arg1 ;
-(NSString *)primaryDeviceAddress;
-(void)primaryDeviceWasUnpaired;
-(void)_stopDiscoverable;
-(void)_stopConnectable;
-(void)_showScanningUI:(char)arg1 ;
-(void)deviceConnected:(id)arg1 ;
-(void)_pinRequestHandler:(id)arg1 ;
-(void)_sspConfirmationHandler:(id)arg1 ;
-(void)_sspNumericComparisonHandler:(id)arg1 ;
-(void)_sspPasskeyDisplayHandler:(id)arg1 ;
-(char)shouldAddDevice:(id)arg1 ;
-(void)_showBluetoothPowerFooter:(char)arg1 ;
-(id)devicesGroupName;
-(id)_pairedDeviceSpecifiers;
-(void)_startDiscoverable;
-(void)_startConnectable;
-(id)bluetoothPoweredOffFooter;
-(char)_isBluetoothPowerFooterShowing;
-(id)bluetoothPowerAlertMessage;
-(void)handleReloadSpecifiers;
-(unsigned)authorizedServices;
-(void)authenticationRequestHandler:(id)arg1 ;
-(void)devicePairedHandler:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)alertSheetDismissed:(id)arg1 ;
-(void)powerChangedHandler:(id)arg1 ;
-(void)deviceDiscoveredHandler:(id)arg1 ;
-(void)deviceUpdatedHandler:(id)arg1 ;
-(void)deviceRemovedHandler:(id)arg1 ;
-(void)deviceUnpairedHandler:(id)arg1 ;
-(void)deviceConnectedHandler:(id)arg1 ;
-(void)deviceDisconnectedHandler:(id)arg1 ;
-(void)setBluetoothIsBusy:(char)arg1 ;
-(void)_addDevice:(id)arg1 ;
-(void)_updateDevicePosition:(id)arg1 ;
-(void)_removeDevice:(id)arg1 ;
-(id)_specifierForDevice:(id)arg1 ;
-(PSSpecifier *)currentSpecifier;
-(id)specifiers;
-(void)reloadSpecifiers;
-(char)shouldReloadSpecifiersOnResume;
-(void)willResignActive;
-(void)willBecomeActive;
@end

