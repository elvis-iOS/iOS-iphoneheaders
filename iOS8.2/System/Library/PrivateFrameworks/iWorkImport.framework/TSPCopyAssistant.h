/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:03 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSPPasteboardWriteAssistant.h>

@class TSPPasteboard;

@interface TSPCopyAssistant : TSPPasteboardWriteAssistant {

	TSPPasteboard* _pasteboard;
	char _didAttemptToCopy;

}
-(void)copyToPasteboardIsSmartCopy:(char)arg1 ;
-(id)initWithPasteboard:(id)arg1 sourceContext:(id)arg2 ;
-(id)initWithContext:(id)arg1 ;
-(void)copyToPasteboard;
-(void)loadData;
@end
