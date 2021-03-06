/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol CDXClientSessionDelegate, OS_dispatch_source;
@class CDXClient, NSData, NSMutableIndexSet, NSObject, NSIndexSet;

@interface CDXClientSession : NSObject {

	<CDXClientSessionDelegate>* delegate_;
	CDXClient* CDXClient_;
	NSData* ticket_;
	NSData* sessionKey_;
	NSData* sessionKeyPrepped_;
	NSMutableIndexSet* participantsInFlight_;
	int retransmitAttempts_;
	NSData* lastSent_;
	unsigned short seq_;
	unsigned char pid_;
	unsigned short* ack_;
	NSObject<OS_dispatch_source>* retransmitTimer_;
	/*^block*/ id inboundHandler_;

}

@property (nonatomic,readonly) CDXClient * CDXClient; 
@property (assign,nonatomic) <CDXClientSessionDelegate> * delegate; 
@property (nonatomic,copy) NSData * ticket; 
@property (nonatomic,readonly) NSData * sessionKey; 
@property (nonatomic,readonly) NSIndexSet * participantsInFlight; 
@property (nonatomic,copy) id inboundHandler; 
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)invalidate;
-(void)stopRetransmitTimer;
-(BOOL)sendRaw:(id)arg1 toParticipants:(id)arg2 ;
-(BOOL)retransmitEvent;
-(id)CDXClient;
-(id)ticket;
-(id)encrypt:(id)arg1 ;
-(BOOL)sendData:(id)arg1 toParticipants:(id)arg2 ;
-(void)resetRetransmitTimer;
-(id)decrypt:(id)arg1 ticket:(id)arg2 ;
-(id)initWithCDXClient:(id)arg1 ticket:(id)arg2 sessionKey:(id)arg3 ;
-(void)setTicket:(id)arg1 ;
-(void)recvRaw:(id)arg1 ticket:(id)arg2 ;
-(id)sessionKey;
-(id)participantsInFlight;
-(/*^block*/ id)inboundHandler;
-(void)setInboundHandler:(/*^block*/ id)arg1 ;
-(BOOL)sendData:(id)arg1 ;
@end

