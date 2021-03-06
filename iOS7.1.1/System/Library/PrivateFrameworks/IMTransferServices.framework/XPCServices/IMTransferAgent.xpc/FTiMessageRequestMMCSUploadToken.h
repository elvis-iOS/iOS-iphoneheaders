/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:13:14 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IMTransferServices.framework/XPCServices/IMTransferAgent.xpc/IMTransferAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMTransferAgent/IMTransferAgent-Structs.h>
#import <IDSFoundation/IDSMessage.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSNumber, NSData;

@interface FTiMessageRequestMMCSUploadToken : IDSMessage <NSCopying> {

	NSString* _responseAuthToken;
	NSNumber* _length;
	NSData* _signature;
	NSString* _responseRequestURL;
	NSString* _responseRequestorID;

}

@property (copy) NSData * signature;                          //@synthesize signature=_signature - In the implementation block
@property (copy) NSNumber * length;                           //@synthesize length=_length - In the implementation block
@property (copy) NSString * responseAuthToken;                //@synthesize responseAuthToken=_responseAuthToken - In the implementation block
@property (copy) NSString * responseRequestURL;               //@synthesize responseRequestURL=_responseRequestURL - In the implementation block
@property (copy) NSString * responseRequestorID;              //@synthesize responseRequestorID=_responseRequestorID - In the implementation block
-(id)responseAuthToken;
-(id)responseRequestURL;
-(id)responseRequestorID;
-(void)setResponseAuthToken:(id)arg1 ;
-(void)setResponseRequestorID:(id)arg1 ;
-(void)setResponseRequestURL:(id)arg1 ;
-(int)command;
-(void)dealloc;
-(id)init;
-(id)length;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setLength:(id)arg1 ;
-(void)handleResponseDictionary:(id)arg1 ;
-(int)responseCommand;
-(id)messageBody;
-(id)signature;
-(void)setSignature:(id)arg1 ;
-(id)requiredKeys;
@end

