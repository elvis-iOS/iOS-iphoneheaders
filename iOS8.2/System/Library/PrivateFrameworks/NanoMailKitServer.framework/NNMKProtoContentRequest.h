/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:31 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <NanoMailKitServer/NSCopying.h>

@class NSString;

@interface NNMKProtoContentRequest : PBRequest <NSCopying> {

	unsigned _fullSyncVersion;
	NSString* _messageId;
	char _highPriority;
	SCD_Struct_NN2 _has;

}

@property (assign,nonatomic) char hasFullSyncVersion; 
@property (assign,nonatomic) unsigned fullSyncVersion;              //@synthesize fullSyncVersion=_fullSyncVersion - In the implementation block
@property (nonatomic,readonly) char hasMessageId; 
@property (nonatomic,retain) NSString * messageId;                  //@synthesize messageId=_messageId - In the implementation block
@property (assign,nonatomic) char hasHighPriority; 
@property (assign,nonatomic) char highPriority;                     //@synthesize highPriority=_highPriority - In the implementation block
-(NSString *)messageId;
-(void)setMessageId:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHighPriority:(char)arg1 ;
-(char)highPriority;
-(void)setFullSyncVersion:(unsigned)arg1 ;
-(void)setHasFullSyncVersion:(char)arg1 ;
-(char)hasFullSyncVersion;
-(unsigned)fullSyncVersion;
-(char)hasMessageId;
-(void)setHasHighPriority:(char)arg1 ;
-(char)hasHighPriority;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
