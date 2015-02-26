/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:20 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <vot/vot-Structs.h>
#import <vot/VOTElementManagementProtocol.h>

@protocol VOTElementUpdateProtocol;
@class VOTElement, NSString;

@interface VOTElementManagerTV : NSObject <VOTElementManagementProtocol> {

	VOTElement* _firstResponder;
	VOTElement* _currentElement;
	VOTElement* _currentApplication;
	NSString* _lastHeaderText;
	id<VOTElementUpdateProtocol> updateDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<VOTElementUpdateProtocol> updateDelegate; 
-(void)_handleFirstResponderChangedNotification:(id)arg1 ;
-(void)_handleAnnouncementNotification:(id)arg1 ;
-(void)_handleScreenChangedNotification:(id)arg1 ;
-(void)_handleKeyboardKeySelectedNotification:(id)arg1 ;
-(void)_handleActiveControlUpdated:(id)arg1 ;
-(id)_headerTextForElement:(id)arg1 ;
-(void)handleNotification:(int)arg1 withData:(id)arg2 ;
-(void)handleHomeButtonPress;
-(void)handleStateReset;
-(void)handlePlayPauseButtonPress;
-(BOOL)allowsSystemControlEvent;
-(void)updateCurrentElementFrame;
-(CGRect)currentLineFrame;
-(void)updateApplication;
-(void)updateApplicationAndSpeak:(id)arg1 ;
-(BOOL)shouldAllowSpeaking;
-(BOOL)isReadingAll;
-(void)systemServerDied;
-(id)currentElement;
-(void)moveToElementMatchingRotorType:(int)arg1 inDirection:(long long)arg2 ;
-(id<VOTElementUpdateProtocol>)updateDelegate;
-(void)setUpdateDelegate:(id<VOTElementUpdateProtocol>)arg1 ;
-(void)sendRequest:(id)arg1 ;
-(void)dealloc;
-(void)handleEvent:(id)arg1 ;
-(id)currentApplication;
@end
