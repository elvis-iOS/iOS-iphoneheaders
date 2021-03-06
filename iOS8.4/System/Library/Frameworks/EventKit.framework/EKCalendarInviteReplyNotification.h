/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:42 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKCalendarNotification.h>

@interface EKCalendarInviteReplyNotification : EKCalendarNotification {

	int _status;
	unsigned long long _allowedEntityTypes;

}

@property (assign,nonatomic) int status;                                         //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) unsigned long long allowedEntityTypes;              //@synthesize allowedEntityTypes=_allowedEntityTypes - In the implementation block
-(unsigned long long)allowedEntityTypes;
-(id)inviteReplyNotificationFromEventStore:(id)arg1 ;
-(void)setAllowedEntityTypes:(unsigned long long)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(int)status;
-(void)setStatus:(int)arg1 ;
@end

