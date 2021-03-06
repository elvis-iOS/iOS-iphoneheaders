/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:15 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TUAudioPlayerDelegateProtocol;
@interface TUAudioPlayer : NSObject {

	id<TUAudioPlayerDelegateProtocol> _delegate;

}

@property (assign,nonatomic) id<TUAudioPlayerDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL playingSound; 
-(void)dealloc;
-(void)setDelegate:(id<TUAudioPlayerDelegateProtocol>)arg1 ;
-(id<TUAudioPlayerDelegateProtocol>)delegate;
-(void)stop;
-(void)playSelectedSound;
-(void)playSound:(int)arg1 numOfLoops:(int)arg2 pauseDuration:(double)arg3 ;
-(BOOL)playingSound;
@end

