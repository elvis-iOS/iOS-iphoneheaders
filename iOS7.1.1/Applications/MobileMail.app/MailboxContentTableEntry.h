/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MailboxContentTableEntry <NSObject>
@required
-(void)setHighlightedTerms:(id)arg1;
-(void)setShowsBestMatchedAddress:(BOOL)arg1;
-(void)setMessage:(id)arg1 threaded:(BOOL)arg2;
-(void)setThreadMessageCount:(unsigned)arg1 hasUnreadMessages:(BOOL)arg2 hasAttachments:(BOOL)arg3 hasFlagged:(BOOL)arg4 hasVIP:(BOOL)arg5 receivedInterval:(double)arg6;
-(void)updateFlagsFromMessage:(id)arg1;
-(void)setMailboxName:(id)arg1;
@end

