/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:50 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RemoteUI/RemoteUIController.h>

@class NSHTTPURLResponse;

@interface AAUIRemoteUIController : RemoteUIController {

	NSHTTPURLResponse* _redirectResponse;

}

@property (nonatomic,retain) NSHTTPURLResponse * redirectResponse;              //@synthesize redirectResponse=_redirectResponse - In the implementation block
-(void)setRedirectResponse:(NSHTTPURLResponse *)arg1 ;
-(NSHTTPURLResponse *)redirectResponse;
-(id)loader:(id)arg1 connection:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 ;
@end

