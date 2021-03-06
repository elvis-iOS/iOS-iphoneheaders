/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:12 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HDJournalEntry.h>

@class HKAchievement;

@interface _HDAchievementInsertionJournalEntry : HDJournalEntry {

	HKAchievement* _achievement;

}

@property (nonatomic,readonly) HKAchievement * achievement;              //@synthesize achievement=_achievement - In the implementation block
+(char)supportsSecureCoding;
+(int)behavior;
+(void)applyEntries:(id)arg1 withDaemon:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(HKAchievement *)achievement;
-(id)initWithAchievement:(id)arg1 ;
@end

