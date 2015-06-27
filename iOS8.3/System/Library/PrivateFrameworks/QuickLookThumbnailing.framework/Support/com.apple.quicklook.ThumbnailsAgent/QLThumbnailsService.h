/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:20:59 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/Support/com.apple.quicklook.ThumbnailsAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <com.apple.quicklook.ThumbnailsAgent/QLThumbnailsInterface.h>

@interface QLThumbnailsService : NSObject <QLThumbnailsInterface> {

	int _pid;

}

@property (assign) int pid;              //@synthesize pid=_pid - In the implementation block
-(id)initWithClientProcessIdentifier:(int)arg1 ;
-(void)hasThumbnailForURL:(id)arg1 updateLastHitDate:(char)arg2 completion:(/*^block*/id)arg3 ;
-(int)pid;
-(void)setPid:(int)arg1 ;
-(void)thumbnailsStoreURLForURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)removeThumbnailAdditionsOnURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)askThumbnailAdditionIndex:(/*^block*/id)arg1 ;
@end
