/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <IDSCore/IDSCore-Structs.h>
#import <IDSFoundation/IDSBaseMessage.h>
#import <CoreFoundation/NSCopying.h>

@class NSData, NSString;

@interface IDSProfileMessage : IDSBaseMessage <NSCopying> {

	NSData* _pushCert;
	SecKeyRef _pushKey;
	SecKeyRef _pushPublicKey;
	NSData* _pushToken;
	NSString* _authToken;
	NSString* _profileID;

}

@property (nonatomic,copy) NSString * profileID;                    //@synthesize profileID=_profileID - In the implementation block
@property (nonatomic,copy) NSString * authToken;                    //@synthesize authToken=_authToken - In the implementation block
@property (assign,nonatomic) SecKeyRef pushPrivateKey;              //@synthesize pushKey=_pushKey - In the implementation block
@property (assign,nonatomic) SecKeyRef pushPublicKey;               //@synthesize pushPublicKey=_pushPublicKey - In the implementation block
@property (nonatomic,copy) NSData * pushCertificate;                //@synthesize pushCert=_pushCert - In the implementation block
@property (nonatomic,copy) NSData * pushToken;                      //@synthesize pushToken=_pushToken - In the implementation block
-(id)authToken;
-(void)setAuthToken:(id)arg1 ;
-(void)setPushToken:(id)arg1 ;
-(id)pushToken;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(int)command;
-(void)setProfileID:(id)arg1 ;
-(id)profileID;
-(void)setPushPrivateKey:(SecKeyRef)arg1 ;
-(void)setPushCertificate:(id)arg1 ;
-(BOOL)hasRequiredKeys:(id*)arg1 ;
-(id)additionalMessageHeadersForOutgoingPush;
-(id)additionalMessageHeaders;
-(void)handleResponseDictionary:(id)arg1 ;
-(id)pushCertificate;
-(SecKeyRef)pushPrivateKey;
-(SecKeyRef)pushPublicKey;
-(void)setPushPublicKey:(SecKeyRef)arg1 ;
-(BOOL)wantsBagKey;
-(BOOL)wantsHTTPHeaders;
-(BOOL)wantsCompressedBody;
-(BOOL)wantsBinaryPush;
-(int)responseCommand;
@end

