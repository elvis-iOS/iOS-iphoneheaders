/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:59 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CalDAV/CoreDAVPostTaskDelegate.h>

@class CalDAVCalendarServerInviteNotificationItem, NSURL, NSString;

@interface CalDAVReplyToSharedCalendarInvitationTaskGroup : CoreDAVTaskGroup <CoreDAVPostTaskDelegate> {

	CalDAVCalendarServerInviteNotificationItem* _invitation;
	BOOL _acceptInvitation;
	NSURL* _calendarHomeURL;
	NSURL* _sharedAs;

}

@property (assign,nonatomic) id<CoreDAVTaskGroupDelegate> delegate; 
@property (nonatomic,retain) NSURL * sharedAs;                                                     //@synthesize sharedAs=_sharedAs - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerInviteNotificationItem * invitation;              //@synthesize invitation=_invitation - In the implementation block
@property (assign,nonatomic) BOOL acceptInvitation;                                                //@synthesize acceptInvitation=_acceptInvitation - In the implementation block
@property (nonatomic,retain) NSURL * calendarHomeURL;                                              //@synthesize calendarHomeURL=_calendarHomeURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)setAcceptInvitation:(BOOL)arg1 ;
-(void)setSharedAs:(NSURL *)arg1 ;
-(id)generateReply;
-(id)initWithInvitation:(id)arg1 acceptInvitation:(BOOL)arg2 atCalendarHomeURL:(id)arg3 accountInfoProvider:(id)arg4 taskManager:(id)arg5 ;
-(NSURL *)sharedAs;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 ;
-(void)startTaskGroup;
-(CalDAVCalendarServerInviteNotificationItem *)invitation;
-(void)setInvitation:(CalDAVCalendarServerInviteNotificationItem *)arg1 ;
-(NSURL *)calendarHomeURL;
-(void)setCalendarHomeURL:(NSURL *)arg1 ;
-(BOOL)acceptInvitation;
@end
