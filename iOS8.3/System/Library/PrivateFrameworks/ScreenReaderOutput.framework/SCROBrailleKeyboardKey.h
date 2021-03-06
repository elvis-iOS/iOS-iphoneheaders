/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:27:57 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenReaderOutputServer/SCROBrailleKey.h>

@class NSString;

@interface SCROBrailleKeyboardKey : SCROBrailleKey {

	NSString* _keyString;
	unsigned _modifiers;

}
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setKeyString:(id)arg1 ;
-(id)keyString;
-(unsigned)modifiers;
-(void)setModifiers:(unsigned)arg1 ;
@end

