/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:17 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MPUFoundation/MPUQueryDataSource.h>

@class NSMutableDictionary;

@interface VideosQueryDataSource : MPUQueryDataSource {

	NSMutableDictionary* _badgeCounts;

}
-(id)representativeItemForEntityAtIndexPath:(id)arg1 ;
-(char)entityIsInCloudAtIndexPath:(id)arg1 ;
-(unsigned)badgeCountForEntityAtIndexPath:(id)arg1 ;
-(char)showsIndexBar;
-(char)usesSections;
-(void)_invalidateCalculatedEntities;
-(int)editingTypeForEntityAtIndex:(unsigned)arg1 ;
@end

