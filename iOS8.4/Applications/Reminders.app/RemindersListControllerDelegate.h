/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:11 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol RemindersListControllerDelegate <NSObject>
@optional
-(char)listControllerIsOnTop:(id)arg1;
-(void)listControllerFinishedLoadingData:(id)arg1;

@required
-(void)listControllerBeganEditing:(id)arg1;
-(void)listControllerEndedEditing:(id)arg1;
-(void)listControllerWillBeShown:(id)arg1;
-(void)listControllerWillBeHidden:(id)arg1;
-(void)listControllerDeletedList:(id)arg1 atIndex:(int)arg2;
-(void)listControllerCanceledEditing:(id)arg1;
-(void)listControllerBeganModalEditing:(id)arg1;
-(void)listControllerEndedModalEditing:(id)arg1;
-(void)listControllerCreatedNewList:(id)arg1;

@end

