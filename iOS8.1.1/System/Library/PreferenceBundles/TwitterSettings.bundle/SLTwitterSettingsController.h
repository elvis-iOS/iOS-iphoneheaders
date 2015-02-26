/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:09 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/TwitterSettings.bundle/TwitterSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FacebookSettings/SLSettingsController.h>
#import <TwitterSettings/SLTwitterAccountCreationDelegate.h>
#import <TwitterSettings/SLTwitterContactUpdaterDelegate.h>

@class ACAccount, ACAccountType, NSArray, NSMutableDictionary, PSSpecifier, SLTwitterContactUpdater, SLTwitterUpdateContactsFooterView, SLNetworkReachabilityWarning, UIAlertView, PSSetupController, NSString;

@interface SLTwitterSettingsController : SLSettingsController <SLTwitterAccountCreationDelegate, SLTwitterContactUpdaterDelegate> {

	ACAccount* _signInAccount;
	ACAccountType* _twitterAccountType;
	NSArray* _accounts;
	NSMutableDictionary* _authorizedAppList;
	NSArray* _authorizedAppListSpecifiers;
	PSSpecifier* _signInButtonSpecifier;
	PSSpecifier* _updateContactsGroupSpecifier;
	PSSpecifier* _updateContactsSpecifier;
	PSSpecifier* _createNewAccountGroupSpecifier;
	SLTwitterContactUpdater* _contactUpdater;
	SLTwitterUpdateContactsFooterView* _updateContactsFooterView;
	NSArray* _accountStateDependentSpecifiers;
	SLNetworkReachabilityWarning* _networkWarning;
	UIAlertView* _appInstallAlert;
	PSSetupController* _accountCreationContainerVC;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_specifierForAccount:(id)arg1 ;
-(id)_passwordWithSpecifier:(id)arg1 ;
-(id)_loginSpecifiers;
-(id)_networkWarning;
-(id)_authorizedAppsListSpecifiers;
-(void)_setAppAllowedAccess:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_isAppAllowedAccountAccessWithSpecifier:(id)arg1 ;
-(void)_learnMoreLinkButtonTapped:(id)arg1 ;
-(id)_usernameWithSpecifier:(id)arg1 ;
-(void)_handleAccountAuthenticationWithResult:(BOOL)arg1 error:(id)arg2 ;
-(void)_showAppDownloadAlert;
-(void)_cancelUpdateContactsTapped:(id)arg1 ;
-(id)_learnMoreLinkSpecifier;
-(id)_noAccountsSpecifiers;
-(void)twitterContactUpdater:(id)arg1 didFinishUpdatingContacts:(long long)arg2 ;
-(void)_signInButtonTapped:(id)arg1 ;
-(id)_twitterAccountType;
-(void)accountCreationController:(id)arg1 didFinishWithSuccess:(BOOL)arg2 ;
-(void)twitterContactUpdater:(id)arg1 didUpdateProgress:(float)arg2 ;
-(BOOL)_isTwitterParentalRestrictionEnabled;
-(void)_reloadAuthorizedAppList;
-(id)_accountListSpecifiers;
-(id)_createNewAccountButtonSpecifier;
-(id)_twitterApp;
-(void)_updateContactsButtonTapped:(id)arg1 ;
-(void)dealloc;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)navigationItem;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_willEnterForeground:(id)arg1 ;
-(void)appInstallerWillStart:(id)arg1 ;
-(void)_stopObservingAccountStoreDidChangeNotification;
-(void)_beginObservingAccountStoreDidChangeNotification;
-(void)_setUsername:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_createNewAccountButtonTapped:(id)arg1 ;
-(void)_textFieldValueDidChange:(id)arg1 ;
-(void)setPassword:(id)arg1 ;
-(void)setUsername:(id)arg1 ;
-(void)_updateSignInButton;
-(id)specifiers;
-(void)returnPressedAtEnd;
-(void)_accountStoreDidChange:(id)arg1 ;
@end
