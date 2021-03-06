/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:35 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CompanionCamera.framework/Support/companioncamerad
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject, NSData, NSString, NMSMessageCenter;

@interface NMSOutgoingRequest : NSObject {

	NSObject*<OS_dispatch_source> _replyTimer;
	BOOL _doNotCompress;
	BOOL _fireAndForget;
	unsigned short _messageID;
	NSData* _data;
	NSString* _idsIdentifier;
	/*^block*/id _responseHandler;
	/*^block*/id _errorHandler;
	/*^block*/id _didSendHandler;
	unsigned long long _priority;
	double _sendTimeout;
	double _replyTimeout;
	NMSMessageCenter* _messageCenter;
	id _pbRequest;

}

@property (nonatomic,retain) NSData * data;                                        //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned short messageID;                             //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                               //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,copy) id responseHandler;                                     //@synthesize responseHandler=_responseHandler - In the implementation block
@property (nonatomic,copy) id errorHandler;                                        //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy) id didSendHandler;                                      //@synthesize didSendHandler=_didSendHandler - In the implementation block
@property (assign,nonatomic) unsigned long long priority;                          //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) double sendTimeout;                                   //@synthesize sendTimeout=_sendTimeout - In the implementation block
@property (assign,nonatomic) double replyTimeout;                                  //@synthesize replyTimeout=_replyTimeout - In the implementation block
@property (assign,nonatomic) BOOL doNotCompress;                                   //@synthesize doNotCompress=_doNotCompress - In the implementation block
@property (assign,nonatomic) BOOL fireAndForget;                                   //@synthesize fireAndForget=_fireAndForget - In the implementation block
@property (assign,nonatomic,__weak) NMSMessageCenter * messageCenter;              //@synthesize messageCenter=_messageCenter - In the implementation block
@property (nonatomic,retain) id pbRequest;                                         //@synthesize pbRequest=_pbRequest - In the implementation block
+(id)request;
-(void)setPbResponseHandler:(/*^block*/id)arg1 ;
-(void)setReplyTimeout:(double)arg1 ;
-(void)startReplyTimer;
-(void)invalidateReplyTimer;
-(id)didSendHandler;
-(void)_replyTimerDidTimeout;
-(void)setDidSendHandler:(id)arg1 ;
-(double)replyTimeout;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)invalidate;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setPriority:(unsigned long long)arg1 ;
-(unsigned long long)priority;
-(NMSMessageCenter *)messageCenter;
-(id)pbRequest;
-(NSString *)idsIdentifier;
-(void)setSendTimeout:(double)arg1 ;
-(void)setPbRequest:(id)arg1 ;
-(void)setMessageCenter:(NMSMessageCenter *)arg1 ;
-(double)sendTimeout;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(BOOL)doNotCompress;
-(void)setDoNotCompress:(BOOL)arg1 ;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(void)setFireAndForget:(BOOL)arg1 ;
-(BOOL)fireAndForget;
-(void)setMessageID:(unsigned short)arg1 ;
-(unsigned short)messageID;
@end

