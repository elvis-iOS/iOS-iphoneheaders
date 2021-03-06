/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:04:08 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSMutableSet, NSDate;

@interface PLFileSystemImportAsset : NSObject {

	NSMutableSet* _urls;
	NSDate* _dateCreated;
	NSObject* _destinationAlbum;
	int assetKind;

}

@property (nonatomic,retain) NSMutableSet * urls;                                      //@synthesize urls=_urls - In the implementation block
@property (nonatomic,retain) NSDate * dateCreated;                                     //@synthesize dateCreated=_dateCreated - In the implementation block
@property (nonatomic,retain) NSObject*<PLAlbumProtocol> destinationAlbum;              //@synthesize destinationAlbum=_destinationAlbum - In the implementation block
@property (assign,nonatomic) int assetKind; 
-(void)dealloc;
-(id)description;
-(int)compare:(id)arg1 ;
-(NSDate *)dateCreated;
-(void)setDateCreated:(NSDate *)arg1 ;
-(id)initWithURLs:(id)arg1 creationDate:(id)arg2 destinationAlbum:(NSObject*)arg3 assetKind:(int)arg4 ;
-(NSMutableSet *)urls;
-(NSObject*<PLAlbumProtocol>)destinationAlbum;
-(char)isCameraKit;
-(void)setUrls:(NSMutableSet *)arg1 ;
-(void)setDestinationAlbum:(NSObject*<PLAlbumProtocol>)arg1 ;
-(void)setAssetKind:(int)arg1 ;
-(int)assetKind;
@end

