/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:00:49 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/Plugins/FMF.assistantBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FMF/FMF-Structs.h>
@class NSDictionary, NSString, ACAccountStore;

@interface Common : NSObject {

	NSDictionary* configuration;
	char _accountInfoLoaded;
	char _isRenewingAccountCredentials;
	char _isTokenAccessible;
	char _isAccountPresent;
	NSString* _personID;
	NSString* _appToken;
	NSString* _fmfHost;
	NSString* _username;
	ACAccountStore* _accountStore;

}

@property (nonatomic,readonly) NSString * username;                          //@synthesize username=_username - In the implementation block
@property (nonatomic,readonly) NSString * personID;                          //@synthesize personID=_personID - In the implementation block
@property (nonatomic,readonly) NSString * appToken;                          //@synthesize appToken=_appToken - In the implementation block
@property (nonatomic,retain) NSString * fmfHost;                             //@synthesize fmfHost=_fmfHost - In the implementation block
@property (nonatomic,readonly) NSString * redirectedHost; 
@property (assign,nonatomic) char accountInfoLoaded;                         //@synthesize accountInfoLoaded=_accountInfoLoaded - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;                  //@synthesize accountStore=_accountStore - In the implementation block
@property (assign,nonatomic) char isRenewingAccountCredentials;              //@synthesize isRenewingAccountCredentials=_isRenewingAccountCredentials - In the implementation block
@property (assign,nonatomic) char isTokenAccessible;                         //@synthesize isTokenAccessible=_isTokenAccessible - In the implementation block
@property (assign,nonatomic) char isAccountPresent;                          //@synthesize isAccountPresent=_isAccountPresent - In the implementation block
+(id)sharedInstance;
-(void)setFmfHost:(NSString *)arg1 ;
-(NSString *)redirectedHost;
-(void)loadAccountInfo;
-(void)setIsAccountPresent:(char)arg1 ;
-(char)hasFMFUser;
-(void)clearFMFAccount;
-(void)setIsTokenAccessible:(char)arg1 ;
-(char)isAccountPresent;
-(char)gestaltQueryBool:(CFStringRef)arg1 ;
-(void)setAccountInfoLoaded:(char)arg1 ;
-(char)accountInfoLoaded;
-(char)isFMFAllowed;
-(void)setIsRenewingAccountCredentials:(char)arg1 ;
-(char)isTokenAccessible;
-(void)redirected:(id)arg1 ;
-(NSString *)fmfHost;
-(id)deviceUDID;
-(char)isDeviceSecured;
-(id)gestaltQuery:(CFStringRef)arg1 ;
-(char)isAppRestricted;
-(char)tokenIsNotAccessible;
-(void)flushRedirection;
-(char)isRenewingAccountCredentials;
-(void)dealloc;
-(id)init;
-(id)buildVersion;
-(ACAccountStore *)accountStore;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(id)osVersion;
-(NSString *)personID;
-(NSString *)username;
-(NSString *)appToken;
-(id)productType;
@end

