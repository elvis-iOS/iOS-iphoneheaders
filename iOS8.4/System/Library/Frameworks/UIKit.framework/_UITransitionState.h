/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:15 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate;

@interface _UITransitionState : NSObject {

	long long _transitionDirection;
	/*^block*/id _completion;
	NSDate* _beginDate;

}

@property (nonatomic,readonly) long long transitionDirection;                       //@synthesize transitionDirection=_transitionDirection - In the implementation block
@property (nonatomic,readonly) long long effectiveTransitionDirection; 
@property (nonatomic,readonly) NSDate * beginDate;                                  //@synthesize beginDate=_beginDate - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
-(void)dealloc;
-(id)description;
-(BOOL)isActive;
-(id)initWithTransitionDirection:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(long long)transitionDirection;
-(void)cleanupWithFinishedState:(BOOL)arg1 completedState:(BOOL)arg2 ;
-(BOOL)isCompatibleWithTransitionInDirection:(long long)arg1 ;
-(long long)effectiveTransitionDirection;
-(NSDate *)beginDate;
-(void)markBeginDate;
@end

