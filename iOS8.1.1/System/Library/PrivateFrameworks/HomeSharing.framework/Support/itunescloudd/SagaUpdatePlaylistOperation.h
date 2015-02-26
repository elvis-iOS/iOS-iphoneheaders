/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class NSArray;

@interface SagaUpdatePlaylistOperation : CloudLibraryOperation {

	unsigned _databaseRevision;
	NSArray* _itemSagaIDs;
	unsigned long long _playlistSagaID;

}

@property (nonatomic,readonly) unsigned databaseRevision;              //@synthesize databaseRevision=_databaseRevision - In the implementation block
-(id)newPropertyListRepresentation;
-(id)initWithPlaylistSagaID:(unsigned long long)arg1 itemSagaIDs:(id)arg2 ;
-(void)main;
-(unsigned)databaseRevision;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
@end
