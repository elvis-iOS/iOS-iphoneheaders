/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSRunLoop, NSArray;

@interface _MPNonRetainingDelayedPerformContext : NSObject {

	id target;
	SEL selector;
	id argument;
	NSRunLoop* rl;
	NSArray* modes;
	CFRunLoopTimerRef dperf;
	CFArrayRef dperfs;

}
@end
