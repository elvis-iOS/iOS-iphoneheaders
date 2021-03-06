/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:49 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MessageConsumer.h>

@class SearchOperation, NSMutableArray;

@interface MessageSearchResultsConsumer : NSObject <MessageConsumer> {

	SearchOperation* _operation;
	unsigned _sentBatchCount;
	unsigned _nextBatchSize;
	NSMutableArray* _pendingMessages;

}
-(void)_sendForcibly:(char)arg1 ;
-(void)dealloc;
-(void)done;
-(id)initWithOperation:(id)arg1 ;
-(char)shouldCancel;
-(void)newMessagesAvailable:(id)arg1 ;
@end

