/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Contacts.app/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <UIKit/UIResponder.h>
#import <UIKit/UIApplicationTestingDelegate.h>
#import <Contacts/ABUnknownPersonViewControllerDelegate.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, UIViewController, ContactsSplitViewController, ABPeoplePickerNavigationController, CNContact, NSMutableArray;

@interface AppDelegate : UIResponder <UIApplicationTestingDelegate, ABUnknownPersonViewControllerDelegate, UIApplicationDelegate> {

	UIWindow* _window;
	UIViewController* _rootViewController;
	ContactsSplitViewController* _splitViewController;
	ABPeoplePickerNavigationController* _peoplePicker;
	CNContact* _restoredContact;
	NSMutableArray* _receivedContactsQueue;

}

@property (nonatomic,retain) UIWindow * window;                                              //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) UIViewController * rootViewController;                          //@synthesize rootViewController=_rootViewController - In the implementation block
@property (nonatomic,retain) ContactsSplitViewController * splitViewController;              //@synthesize splitViewController=_splitViewController - In the implementation block
@property (nonatomic,retain) ABPeoplePickerNavigationController * peoplePicker;              //@synthesize peoplePicker=_peoplePicker - In the implementation block
@property (nonatomic,retain) CNContact * restoredContact;                                    //@synthesize restoredContact=_restoredContact - In the implementation block
@property (nonatomic,retain) NSMutableArray * receivedContactsQueue;                         //@synthesize receivedContactsQueue=_receivedContactsQueue - In the implementation block
-(void)setSplitViewController:(id)arg1 ;
-(BOOL)_showContactWithRecordID:(int)arg1 ;
-(id)restoredContact;
-(void)_showContactCardForRecord:(void*)arg1 ;
-(id)_vCardDataFromURL:(id)arg1 ;
-(void)_enqueueContact:(id)arg1 ;
-(void)setRestoredContact:(id)arg1 ;
-(id)receivedContactsQueue;
-(void)setReceivedContactsQueue:(id)arg1 ;
-(void)_presentNextContact;
-(void)cancelModalUnknownPerson:(id)arg1 ;
-(void)saveUnknownPerson:(id)arg1 ;
-(id)_dequeueContact;
-(void)_dismissContactAndPresentNext;
-(void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2 ;
-(id)window;
-(BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(BOOL)application:(id)arg1 shouldSaveApplicationState:(id)arg2 ;
-(BOOL)application:(id)arg1 shouldRestoreApplicationState:(id)arg2 ;
-(BOOL)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)setWindow:(id)arg1 ;
-(void)setRootViewController:(id)arg1 ;
-(id)rootViewController;
-(void)application:(id)arg1 willEncodeRestorableStateWithCoder:(id)arg2 ;
-(void)application:(id)arg1 didDecodeRestorableStateWithCoder:(id)arg2 ;
-(id)splitViewController;
-(BOOL)application:(id)arg1 runTest:(id)arg2 options:(id)arg3 ;
-(void).cxx_destruct;
-(id)peoplePicker;
-(void)setPeoplePicker:(id)arg1 ;
@end
