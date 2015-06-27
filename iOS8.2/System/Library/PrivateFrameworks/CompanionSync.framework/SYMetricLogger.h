/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:47 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AWDServerConnection;

@interface SYMetricLogger : NSObject {

	AWDServerConnection* _connection;

}
+(id)sharedInstance;
-(id)init;
-(void)postReceiptOfMessage:(id)arg1 forService:(id)arg2 ;
-(void)postSequenceErrorOfType:(int)arg1 sequenceNumber:(unsigned long long)arg2 forService:(id)arg3 ;
-(void)postFullSyncDuration:(double)arg1 onMaster:(char)arg2 forService:(id)arg3 ;
@end
