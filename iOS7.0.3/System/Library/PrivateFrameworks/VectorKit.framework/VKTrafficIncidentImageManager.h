/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSCache, NSMapTable;

@interface VKTrafficIncidentImageManager : NSObject {

	NSCache* _imageCache;
	NSMapTable* _targetDisplayToProvider;

}
+(id)sharedManager;
-(void)dealloc;
-(id)imageForIncidentType:(int)arg1 contentScale:(float)arg2 targetDisplay:(int)arg3 ;
-(id)iconForIncidentType:(int)arg1 contentScale:(float)arg2 targetDisplay:(int)arg3 ;
-(id)imageForIncidentType:(int)arg1 contentScale:(float)arg2 ;
-(id)iconForIncidentType:(int)arg1 contentScale:(float)arg2 ;
-(void)setIncidentIconProvider:(/*^block*/ id)arg1 forTargetDisplay:(int)arg2 ;
@end
