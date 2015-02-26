/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:18 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLChangeNotification.h>

@class NSSet;

@interface PLAssetChangeNotification : PLChangeNotification {

	NSSet* _updatedAssets;

}

@property (nonatomic,copy) NSSet * updatedAssets;              //@synthesize updatedAssets=_updatedAssets - In the implementation block
+(id)notificationWithChangedAssets:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)_init;
-(id)name;
-(id)userInfo;
-(id)object;
-(NSSet *)updatedAssets;
-(id)_initWithChangedObjects:(id)arg1 ;
-(void)setUpdatedAssets:(NSSet *)arg1 ;
@end
