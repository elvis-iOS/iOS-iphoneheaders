/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
#import <ScreenReaderCore/SCRCThreadedWeakLinkedObject.h>

@class SCROConnection, NSLock, NSMutableAttributedString, NSData, SCRCTargetSelectorTimer;

@interface SCROBrailleClient : SCRCThreadedWeakLinkedObject {

	SCROConnection* _connection;
	NSLock* _lock;
	id _delegate;
	NSMutableAttributedString* _mainStringPending;
	NSMutableAttributedString* _mainStringCache;
	NSData* _aggregatedStatusPending;
	NSData* _aggregatedStatusCache;
	SCRCTargetSelectorTimer* _deathTimer;
	bool _isReady;
	bool _needsDisplay;
	bool _keepConnectionAlive;
	bool _delegateWantsKeypresses;
	bool _wantsDisconnectMessage;
	bool _wantsReconnectMessage;
	bool _wantsDisplayConfigurationChanged;
	bool _displayDescriptorCallbackEnabled;

}
-(bool)isConnected;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(bool)needsDisplay;
-(void)displayIfNeeded;
-(void)display;
-(id)initWithDelegate:(id)arg1 ;
-(void)invalidateThreadsWithWeakLinks;
-(void)_deathTimerHandler;
-(id)_lazyConnection;
-(void)_registerDelegate;
-(id)_getWorkingString;
-(void)_refreshAfterReconnect;
-(void)setDisplayDescriptorCallbackEnabled:(bool)arg1 ;
-(void)_setupDeviceDetection;
-(void)_deviceConnected:(id)arg1 ;
-(void)setKeepConnectionAlive:(bool)arg1 ;
-(bool)keepConnectionAlive;
-(void)loadDisplayWithBluetoothDeviceAddress:(id)arg1 ;
-(void)removeDisplayWithBluetoothDeviceAddress:(id)arg1 ;
-(void)setTableIdentifier:(id)arg1 ;
-(id)pendingMainAttributedString;
-(void)setAnnouncementString:(id)arg1 ;
-(void)setAlertString:(id)arg1 timeout:(double)arg2 priority:(int)arg3 ;
-(id)pendingAggregatedStatus;
-(void)setExpandedStatusDisplayModeWithStatus:(id)arg1 ;
-(bool)displayDescriptorCallbackEnabled;
-(id)tokenArray;
-(void)setSelection:(NSRange)arg1 forToken:(long long)arg2 ;
-(void)selectAllForToken:(long long)arg1 ;
-(void)unselectAllForToken:(long long)arg1 ;
-(void)setFocused:(bool)arg1 forToken:(long long)arg2 ;
-(int)contractionMode;
-(void)setMasterStatusCellIndex:(long long)arg1 ;
-(void)setAggregatedStatus:(id)arg1 ;
-(id)aggregatedStatus;
-(void)setVirtualStatusAlignment:(int)arg1 ;
-(int)virtualStatusAlignment;
-(long long)masterStatusCellIndex;
-(void)simulateKeypress:(id)arg1 ;
-(bool)automaticBrailleTranslationEnabled;
-(void)setAutomaticBrailleTranslationEnabled:(bool)arg1 ;
-(void)setAlwaysUsesNemethCodeForTechnicalText:(bool)arg1 ;
-(bool)alwaysUsesNemethCodeForTechnicalText;
-(id)driverConfiguration;
-(bool)isConfigured;
-(void)setPrimaryBrailleDisplay:(int)arg1 ;
-(id)mainAttributedString;
-(void)setMainAttributedString:(id)arg1 ;
-(void)panDisplayLeft:(int)arg1 ;
-(void)panDisplayRight:(int)arg1 ;
-(int)displayMode;
-(void)setAnnouncementsDisplayMode;
-(void)exitCurrentDisplayMode;
-(id)tableIdentifier;
-(void)setContractionMode:(int)arg1 ;
-(bool)showEightDotBraille;
-(void)setShowEightDotBraille:(bool)arg1 ;
-(void)setShowDotsSevenAndEight:(bool)arg1 ;
-(bool)showDotsSevenAndEight;
-(void)showPreviousAnnouncement;
-(void)showNextAnnouncement;
-(long long)tokenForRouterIndex:(long long)arg1 location:(long long*)arg2 appToken:(id*)arg3 forDisplayWithToken:(int)arg4 ;
-(void)setPrepareToMemorizeNextKey:(bool)arg1 immediate:(bool)arg2 forDisplayWithToken:(int)arg3 ;
-(void)handleCallback:(id)arg1 ;
@end

