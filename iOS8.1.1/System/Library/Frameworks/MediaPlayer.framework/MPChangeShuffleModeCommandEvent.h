/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:32 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommandEvent.h>

@interface MPChangeShuffleModeCommandEvent : MPRemoteCommandEvent {

	unsigned long long _shuffleType;

}

@property (nonatomic,readonly) unsigned long long shuffleType;              //@synthesize shuffleType=_shuffleType - In the implementation block
-(unsigned long long)shuffleType;
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
@end
