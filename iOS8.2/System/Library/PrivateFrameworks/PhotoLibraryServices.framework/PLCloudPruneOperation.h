/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:46 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLCloudOperation.h>

@interface PLCloudPruneOperation : PLCloudOperation {

	char _cancelled;

}
-(char)keepOriginalsEnabled;
-(id)_cloudResourceForCPLResource:(id)arg1 inPhotoLibrary:(id)arg2 outAssetsAffected:(id)arg3 ;
-(void)_resetCloudPlaceholderKindForAsset:(id)arg1 ;
-(char)canPruneResource;
-(void)markAsNotLocallyAvailable;
-(void)requestCancel;
-(unsigned)cost;
-(void)runOperationWithCompletionHandler:(/*^block*/id)arg1 ;
@end
