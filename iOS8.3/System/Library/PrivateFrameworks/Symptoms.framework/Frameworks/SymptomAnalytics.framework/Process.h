/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:44:11 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSSet, LiveUsage;

@interface Process : NSManagedObject

@property (nonatomic,retain) NSString * bundleName; 
@property (nonatomic,retain) NSDate * firstTimeStamp; 
@property (nonatomic,retain) NSString * procName; 
@property (nonatomic,retain) NSDate * timeStamp; 
@property (nonatomic,retain) NSSet * hasLiveUsage; 
@property (nonatomic,retain) LiveUsage * hintLiveUsage; 
@end
