/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMotion/CMLogItem.h>

@interface CMOnBodyStatus : CMLogItem {

	int fResult;
	int fConfidence;

}

@property (nonatomic,readonly) int result; 
@property (nonatomic,readonly) int confidence; 
-(int)confidence;
-(id)initWithOnBodyResult:(int)arg1 confidence:(int)arg2 timestamp:(double)arg3 ;
-(int)result;
@end

