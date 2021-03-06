/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:31 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <NanoMailKitServer/NSCopying.h>

@class NSString;

@interface NNMKProtoAttachmentMetadata : PBCodable <NSCopying> {

	NSString* _contentId;
	NSString* _fileName;
	unsigned _fileSize;
	float _imageHeight;
	float _imageWidth;
	unsigned _type;
	char _renderOnClient;
	SCD_Struct_NN8 _has;

}

@property (nonatomic,readonly) char hasContentId; 
@property (nonatomic,retain) NSString * contentId;                //@synthesize contentId=_contentId - In the implementation block
@property (nonatomic,readonly) char hasFileName; 
@property (nonatomic,retain) NSString * fileName;                 //@synthesize fileName=_fileName - In the implementation block
@property (assign,nonatomic) char hasFileSize; 
@property (assign,nonatomic) unsigned fileSize;                   //@synthesize fileSize=_fileSize - In the implementation block
@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) unsigned type;                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char hasRenderOnClient; 
@property (assign,nonatomic) char renderOnClient;                 //@synthesize renderOnClient=_renderOnClient - In the implementation block
@property (assign,nonatomic) char hasImageWidth; 
@property (assign,nonatomic) float imageWidth;                    //@synthesize imageWidth=_imageWidth - In the implementation block
@property (assign,nonatomic) char hasImageHeight; 
@property (assign,nonatomic) float imageHeight;                   //@synthesize imageHeight=_imageHeight - In the implementation block
-(NSString *)fileName;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setContentId:(NSString *)arg1 ;
-(NSString *)contentId;
-(void)setHasType:(char)arg1 ;
-(char)hasType;
-(void)setHasFileSize:(char)arg1 ;
-(char)hasFileSize;
-(char)hasContentId;
-(char)renderOnClient;
-(void)setRenderOnClient:(char)arg1 ;
-(char)hasFileName;
-(void)setHasRenderOnClient:(char)arg1 ;
-(char)hasRenderOnClient;
-(void)setHasImageWidth:(char)arg1 ;
-(char)hasImageWidth;
-(void)setHasImageHeight:(char)arg1 ;
-(char)hasImageHeight;
-(void)setImageWidth:(float)arg1 ;
-(void)setImageHeight:(float)arg1 ;
-(float)imageWidth;
-(float)imageHeight;
-(unsigned)fileSize;
-(void)setFileSize:(unsigned)arg1 ;
-(void)setFileName:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

