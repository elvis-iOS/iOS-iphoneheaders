/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class ISDialog;

@interface DevicePasscodePromptOperation : ISOperation {

	ISDialog* _dialog;
	/*^block*/id _tokenBlock;

}

@property (copy) id tokenBlock; 
-(void)setTokenBlock:(id)arg1 ;
-(id)tokenBlock;
-(void)dealloc;
-(void)run;
-(id)initWithTitle:(id)arg1 message:(id)arg2 ;
-(long long)_keyboardType;
@end
