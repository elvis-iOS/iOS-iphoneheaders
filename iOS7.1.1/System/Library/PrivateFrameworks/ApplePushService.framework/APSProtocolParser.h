/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 3:34:43 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/apsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface APSProtocolParser : NSObject
-(id)copyAppTokenGenerateMessageWithTopicHash:(id)arg1 appId:(unsigned short)arg2 ;
-(id)copySetActiveState:(BOOL)arg1 forInterval:(unsigned)arg2 ;
-(id)copyConnectMessageWithToken:(id)arg1 interface:(int)arg2 activeInterval:(unsigned)arg3 metadata:(id)arg4 ;
-(BOOL)parseMessage:(id)arg1 parameters:(id*)arg2 isInvalid:(BOOL*)arg3 lengthParsed:(unsigned*)arg4 ;
-(id)copyFilterMessageWithEnabledHashes:(id)arg1 ignoredHashes:(id)arg2 opportunisticHashes:(id)arg3 ;
-(id)copyMessageAcknowledgeMessageWithResponse:(int)arg1 messageId:(id)arg2 ;
-(id)copyFlushMessageWithWantPaddingLength:(unsigned)arg1 paddingLength:(unsigned)arg2 ;
-(id)copyKeepAliveMessageWithMetadata:(id)arg1 ;
-(id)copyFlushResponseMessageWithPaddingLength:(unsigned)arg1 ;
-(id)copyMessageWithTopicHash:(id)arg1 identifier:(unsigned)arg2 payload:(id)arg3 ;
-(BOOL)_parseConnectedMessage:(id)arg1 parameters:(id*)arg2 isInvalid:(BOOL*)arg3 lengthParsed:(unsigned*)arg4 ;
-(BOOL)_parseMessageMessage:(id)arg1 parameters:(id*)arg2 isInvalid:(BOOL*)arg3 lengthParsed:(unsigned*)arg4 ;
-(BOOL)_parseKeepAliveResponseMessage:(id)arg1 parameters:(id*)arg2 isInvalid:(BOOL*)arg3 lengthParsed:(unsigned*)arg4 ;
-(BOOL)_parseSerialMessage:(id)arg1 parameters:(id*)arg2 isInvalid:(BOOL*)arg3 lengthParsed:(unsigned*)arg4 ;
-(void)_setSerialItemInParameters:(id)arg1 commandID:(unsigned)arg2 itemID:(unsigned)arg3 itemData:(id)arg4 ;
-(id)copySetActiveIntervalMessageWithInterval:(unsigned)arg1 ;
@end
