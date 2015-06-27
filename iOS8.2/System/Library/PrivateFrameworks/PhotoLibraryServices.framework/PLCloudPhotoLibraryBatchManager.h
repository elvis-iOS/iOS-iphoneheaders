/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:48 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, PLCloudPhotoLibraryBatchContainer, NSMutableSet;

@interface PLCloudPhotoLibraryBatchManager : NSObject {

	NSMutableArray* _batches;
	PLCloudPhotoLibraryBatchContainer* _currentBatch;
	char _wasDrained;
	NSMutableSet* _masterHistory;
	unsigned long long _resourceBudget;

}
-(void)dealloc;
-(id)init;
-(void)reset;
-(void)addRecord:(id)arg1 ;
-(int)currentBatchCount;
-(char)isAboveMaximumResourceBudget;
-(id)drainBatches;
@end
