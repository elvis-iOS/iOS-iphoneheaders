/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:28 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UITargetedProxy.h>
#import <UIKit/UIAlertViewDelegate.h>

@class NSString;

@interface _UIUserNotificationRestrictedAlertViewProxy : _UITargetedProxy <UIAlertViewDelegate> {

	id _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)restrictedProxyForAlertView:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)delegate;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

