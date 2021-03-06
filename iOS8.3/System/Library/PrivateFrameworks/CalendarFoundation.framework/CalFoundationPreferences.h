/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:49:51 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CalPreferences, NSString, NSArray;

@interface CalFoundationPreferences : NSObject {

	CalPreferences* _preferences;

}

@property (nonatomic,readonly) char logAutoFlush; 
@property (nonatomic,readonly) char logEmitUserNotifications; 
@property (nonatomic,readonly) NSString * logFilePath; 
@property (nonatomic,readonly) NSArray * logSimpleConfiguration; 
+(id)shared;
-(id)init;
-(char)logAutoFlush;
-(char)logEmitUserNotifications;
-(NSArray *)logSimpleConfiguration;
-(NSString *)logFilePath;
@end

