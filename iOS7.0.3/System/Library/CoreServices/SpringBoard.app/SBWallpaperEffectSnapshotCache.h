/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBWallpaperObserver.h>

@class NSMutableSet;

@interface SBWallpaperEffectSnapshotCache : NSObject <SBWallpaperObserver> {

	NSMutableSet* _mappedImageKeys;

}
+(id)sharedInstance;
-(void)wallpaperWillChangeForVariant:(int)arg1 ;
-(id)snapshotForKey:(id)arg1 withGenerationBlockIfNecessary:(/*^block*/ id)arg2 ;
-(void)dealloc;
-(id)init;
@end

