/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBBulletinDateLabel <NSObject>
@property (assign,getter=isAllDay,nonatomic) char allDay; 
@property (assign,nonatomic) id<SBDateLabelDelegate> delegate; 
@property (assign,nonatomic) int labelType; 
@property (assign,nonatomic) char isTimestamp; 
@required
-(void)setEndDate:(id)arg1 withTimeZone:(id)arg2;
-(void)setStartDate:(id)arg1 withTimeZone:(id)arg2;
-(void)startCoalescingUpdates;
-(void)stopCoalescingUpdates;
-(int)labelType;
-(void)setLabelType:(int)arg1;
-(char)isTimestamp;
-(void)setIsTimestamp:(char)arg1;
-(char)isAllDay;
-(void)setDelegate:(id)arg1;
-(id<SBDateLabelDelegate>)delegate;
-(void)prepareForReuse;
-(void)setAllDay:(char)arg1;

@end

