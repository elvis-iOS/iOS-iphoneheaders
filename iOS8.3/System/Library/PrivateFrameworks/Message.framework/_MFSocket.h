/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:30:28 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Message/Message-Structs.h>
@class NSCondition, MFStream, NSString, NSInvocation, NSArray, NSData;

@interface _MFSocket : NSObject {

	NSCondition* _condition;
	MFStream* _stream;
	NSString* _protocol;
	NSString* _host;
	NSString* _service;
	CFStringRef _connectionServiceType;
	NSInvocation* _eventHandler;
	NSArray* _clientCertificates;
	int _lowThroughputCounter;
	int _numTimeoutSecs;
	char _allowsTrustPrompt;
	char _usesOpportunisticSockets;
	char _socketCanRead;
	char _socketCanWrite;
	NSString* _sourceApplicationBundleIdentifier;
	NSString* _accountIdentifier;

}

@property (assign,nonatomic) int timeout;                                             //@synthesize numTimeoutSecs=_numTimeoutSecs - In the implementation block
@property (assign,nonatomic) char allowsTrustPrompt;                                  //@synthesize allowsTrustPrompt=_allowsTrustPrompt - In the implementation block
@property (assign,nonatomic) char usesOpportunisticSockets;                           //@synthesize usesOpportunisticSockets=_usesOpportunisticSockets - In the implementation block
@property (nonatomic,retain) NSArray * clientCertificates;                            //@synthesize clientCertificates=_clientCertificates - In the implementation block
@property (nonatomic,copy) NSString * sourceApplicationBundleIdentifier;              //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * accountIdentifier;                              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * serverCertificates; 
@property (nonatomic,readonly) NSString * remoteHostname; 
@property (nonatomic,readonly) unsigned remotePortNumber; 
@property (nonatomic,readonly) NSData * sourceIPAddress; 
@property (nonatomic,readonly) char isReadable; 
@property (nonatomic,readonly) char isWritable; 
@property (nonatomic,readonly) char isCellularConnection; 
@property (nonatomic,readonly) char isValid; 
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isValid;
-(char)isWritable;
-(void)setEventHandler:(id)arg1 ;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSString *)sourceApplicationBundleIdentifier;
-(NSString *)accountIdentifier;
-(void)setTimeout:(int)arg1 ;
-(NSArray *)clientCertificates;
-(void)setClientCertificates:(NSArray *)arg1 ;
-(void)setConnectionServiceType:(CFStringRef)arg1 ;
-(char)allowsTrustPrompt;
-(void)setAllowsTrustPrompt:(char)arg1 ;
-(void)enableThroughputMonitoring:(char)arg1 ;
-(id)securityProtocol;
-(char)setSecurityProtocol:(id)arg1 ;
-(NSString *)remoteHostname;
-(NSData *)sourceIPAddress;
-(char)_startSSLHandshakeWithProtocol:(id)arg1 disableSSL2:(char)arg2 errorPtr:(id*)arg3 ;
-(unsigned)_bufferedByteCount;
-(NSArray *)serverCertificates;
-(char)connectToHost:(id)arg1 withPort:(unsigned)arg2 service:(id)arg3 ;
-(int)writeBytes:(const char*)arg1 length:(unsigned long)arg2 ;
-(int)readBytes:(char*)arg1 length:(unsigned long)arg2 ;
-(unsigned)remotePortNumber;
-(char)usesOpportunisticSockets;
-(void)setUsesOpportunisticSockets:(char)arg1 ;
-(char)isReadable;
-(int)timeout;
-(char)isCellularConnection;
-(void)abort;
@end

