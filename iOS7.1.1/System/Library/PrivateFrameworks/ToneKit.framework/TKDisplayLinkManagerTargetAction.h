/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface TKDisplayLinkManagerTargetAction : NSObject {

	id _target;
	SEL _actionSelector;
	NSString* _actionSelectorName;
	unsigned long long _frameInterval;
	unsigned long long _displayDidRefreshCount;

}

@property (setter=_setTarget:,nonatomic,retain) id _target;                                                              //@synthesize target=_target - In the implementation block
@property (assign,setter=_setActionSelector:,nonatomic) SEL _actionSelector;                                             //@synthesize actionSelector=_actionSelector - In the implementation block
@property (setter=_setActionSelectorName:,nonatomic,copy) NSString * _actionSelectorName;                                //@synthesize actionSelectorName=_actionSelectorName - In the implementation block
@property (assign,setter=_setFrameInterval:,nonatomic) unsigned long long _frameInterval;                                //@synthesize frameInterval=_frameInterval - In the implementation block
@property (assign,setter=_setDisplayDidRefreshCount:,nonatomic) unsigned long long _displayDidRefreshCount;              //@synthesize displayDidRefreshCount=_displayDidRefreshCount - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)_target;
-(void)_setTarget:(id)arg1 ;
-(id)initWithTarget:(id)arg1 actionSelector:(SEL)arg2 frameInterval:(unsigned long long)arg3 ;
-(id)initWithTarget:(id)arg1 actionSelector:(SEL)arg2 ;
-(void)displayDidRefresh:(id)arg1 ;
-(void)_setActionSelector:(SEL)arg1 ;
-(void)_setFrameInterval:(unsigned long long)arg1 ;
-(void)_setActionSelectorName:(id)arg1 ;
-(SEL)_actionSelector;
-(id)_actionSelectorName;
-(unsigned long long)_displayDidRefreshCount;
-(unsigned long long)_frameInterval;
-(void)_setDisplayDidRefreshCount:(unsigned long long)arg1 ;
@end

