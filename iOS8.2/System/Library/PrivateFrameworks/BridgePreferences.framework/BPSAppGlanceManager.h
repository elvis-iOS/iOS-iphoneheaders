/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:29 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BridgePreferences/NGSSettingsManagerDelegate.h>

@class PSListController, NGSGlance, NGSSettingsManager, NSString;

@interface BPSAppGlanceManager : NSObject <NGSSettingsManagerDelegate> {

	PSListController* _listControllerDelegate;
	NGSGlance* _glance;
	NGSSettingsManager* _manager;

}

@property (assign,nonatomic,__weak) PSListController * listControllerDelegate;              //@synthesize listControllerDelegate=_listControllerDelegate - In the implementation block
@property (nonatomic,retain) NGSGlance * glance;                                            //@synthesize glance=_glance - In the implementation block
@property (nonatomic,retain) NGSSettingsManager * manager;                                  //@synthesize manager=_manager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadSettings;
-(id)init;
-(void)setShowsGlance:(id)arg1 forSpecifier:(id)arg2 ;
-(id)showsGlance:(id)arg1 ;
-(void)settingsManagerReloadedGlances:(id)arg1 ;
-(id)glanceSpecifierForIdentifier:(id)arg1 ;
-(NGSGlance *)glance;
-(void)setGlance:(NGSGlance *)arg1 ;
-(void)_logGlanceDescriptions;
-(PSListController *)listControllerDelegate;
-(void)setListControllerDelegate:(PSListController *)arg1 ;
-(NGSSettingsManager *)manager;
-(void)setManager:(NGSSettingsManager *)arg1 ;
@end

