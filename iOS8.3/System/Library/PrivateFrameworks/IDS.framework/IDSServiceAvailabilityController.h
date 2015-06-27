/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:03:39 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IDSServiceAvailabilityController : NSObject {

	NSMutableDictionary* _availabilityHandlers;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(char)addListenerID:(id)arg1 forService:(id)arg2 ;
-(char)removeListenerID:(id)arg1 forService:(id)arg2 ;
-(int)availabilityForListenerID:(id)arg1 forService:(id)arg2 ;
-(char)hasListenerID:(id)arg1 forService:(id)arg2 ;
-(void)_postNotificationForService:(id)arg1 availability:(int)arg2 ;
-(void)_handleServiceMonitorNotification:(id)arg1 ;
-(char)_isValidServiceType:(id)arg1 ;
-(void)_startListeningToMonitor:(id)arg1 ;
-(id)containerForService:(id)arg1 create:(char)arg2 ;
-(void)_stopListeningToMonitor:(id)arg1 ;
@end
