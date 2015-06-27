/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:05:17 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <CloudKitDaemon/NSCopying.h>

@class CKDPCommentContent, CKDPCommentedOnId, NSString;

@interface CKDPPostCommentRequest : PBRequest <NSCopying> {

	CKDPCommentContent* _commentContent;
	CKDPCommentedOnId* _identifier;
	NSString* _path;

}

@property (nonatomic,readonly) char hasIdentifier; 
@property (nonatomic,retain) CKDPCommentedOnId * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) char hasPath; 
@property (nonatomic,retain) NSString * path;                                  //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) char hasCommentContent; 
@property (nonatomic,retain) CKDPCommentContent * commentContent;              //@synthesize commentContent=_commentContent - In the implementation block
+(id)options;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(CKDPCommentedOnId *)identifier;
-(NSString *)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(CKDPCommentedOnId *)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(char)hasPath;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(char)hasIdentifier;
-(void)setCommentContent:(CKDPCommentContent *)arg1 ;
-(char)hasCommentContent;
-(CKDPCommentContent *)commentContent;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
