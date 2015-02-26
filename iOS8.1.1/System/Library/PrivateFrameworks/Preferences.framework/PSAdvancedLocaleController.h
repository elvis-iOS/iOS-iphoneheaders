/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:26 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@interface PSAdvancedLocaleController : PSListController {

	BOOL _automaticLocaleDisabled;

}

@property (assign,nonatomic) BOOL automaticLocaleDisabled;              //@synthesize automaticLocaleDisabled=_automaticLocaleDisabled - In the implementation block
+(BOOL)automaticLanguageUpdateEnabled;
-(id)init;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(void)reloadLocale;
-(BOOL)automaticLocaleDisabled;
-(void)setAutomaticLocaleDisabled:(BOOL)arg1 ;
-(void)localeChangedAction;
-(void)setAutomatic:(id)arg1 specifier:(id)arg2 ;
-(id)automatic:(id)arg1 ;
@end
