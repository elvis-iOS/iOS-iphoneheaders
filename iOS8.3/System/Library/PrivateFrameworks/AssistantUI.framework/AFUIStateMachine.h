/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:47:46 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AFUIStateMachineDelegate;
@class NSMutableDictionary;

@interface AFUIStateMachine : NSObject {

	id<AFUIStateMachineDelegate> _delegate;
	int _state;
	NSMutableDictionary* _endStatesByEventByStartState;

}

@property (assign,nonatomic,__weak) id<AFUIStateMachineDelegate> delegate;                                                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int state;                                                                                            //@synthesize state=_state - In the implementation block
@property (getter=_endStatesByEventByStartState,nonatomic,retain) NSMutableDictionary * endStatesByEventByStartState;              //@synthesize endStatesByEventByStartState=_endStatesByEventByStartState - In the implementation block
-(void)setDelegate:(id<AFUIStateMachineDelegate>)arg1 ;
-(id<AFUIStateMachineDelegate>)delegate;
-(int)state;
-(void)_setState:(int)arg1 ;
-(id)initWithInitialState:(int)arg1 ;
-(void)addTransitionFromState:(int)arg1 toState:(int)arg2 forEvent:(int)arg3 ;
-(void)performTransitionForEvent:(int)arg1 ;
-(id)_endStatesByEventByStartState;
-(id)_endStateNumberFromDictionary:(id)arg1 forEvent:(int)arg2 ;
-(void)_setState:(int)arg1 forEvent:(int)arg2 ;
-(void)setEndStatesByEventByStartState:(NSMutableDictionary *)arg1 ;
-(id)_descriptionForEvent:(int)arg1 ;
@end
