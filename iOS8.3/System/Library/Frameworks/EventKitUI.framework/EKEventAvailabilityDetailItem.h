/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:47:26 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventDetailItem.h>

@class UITableViewCell, NSArray;

@interface EKEventAvailabilityDetailItem : EKEventDetailItem {

	UITableViewCell* _cell;
	int _availability;
	unsigned _supportedAvailabilities;
	NSArray* _choices;
	unsigned _availabilityIndexInChoices;

}
-(char)configureWithCalendar:(id)arg1 preview:(char)arg2 ;
-(id)cellForSubitemAtIndex:(unsigned)arg1 ;
-(float)defaultCellHeightForSubitemAtIndex:(unsigned)arg1 forWidth:(float)arg2 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned)arg2 ;
-(char)editItemViewControllerCommit:(id)arg1 ;
-(char)editItemViewControllerShouldShowDetachAlert;
-(void)setEvent:(id)arg1 store:(id)arg2 ;
-(void)reset;
@end

