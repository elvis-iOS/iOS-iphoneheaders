/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:48 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLAssetContainerChangeNotification.h>

@class PLShuffledAlbum, PLAssetContainerChangeNotification, NSIndexSet, NSOrderedSet;

@interface PLShuffledAlbumChangeNotification : PLAssetContainerChangeNotification {

	PLShuffledAlbum* _album;
	PLAssetContainerChangeNotification* _backingNotification;
	NSIndexSet* _changedIndexes;
	NSOrderedSet* _newSet;

}
+(id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)object;
-(id)album;
-(char)shouldReload;
-(id)deletedIndexes;
-(id)insertedIndexes;
-(id)changedIndexes;
-(void)_calculateDiffs;
-(id)_diffDescription;
-(char)_getOldSet:(id*)arg1 newSet:(id*)arg2 ;
-(id)_changedObjects;
-(char)titleDidChange;
-(char)keyAssetDidChange;
-(char)countDidChange;
-(id)initWithShuffledAlbum:(id)arg1 albumChangeNotification:(id)arg2 ;
@end

