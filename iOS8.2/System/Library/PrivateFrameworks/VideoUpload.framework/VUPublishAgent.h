/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VideoUpload.framework/VideoUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PLPublishingAgent.h>
#import <VideoUpload/VUPublishViewControllerDelegate.h>
#import <VideoUpload/VUPublishPostDelegate.h>

@class UINavigationController, VUPublishPost, VUPublishViewController;

@interface VUPublishAgent : PLPublishingAgent <VUPublishViewControllerDelegate, VUPublishPostDelegate> {

	UINavigationController* _navigationController;
	VUPublishPost* _publishPost;
	VUPublishViewController* _publishViewController;

}
-(id)navigationController;
-(id)mediaTitle;
-(char)allowsViewingOnHost;
-(char)allowsTellingFriend;
-(void)resignPublishingSheetResponders;
-(void)publishViewControllerPublished:(id)arg1 ;
-(void)publishViewControllerCancelled:(id)arg1 ;
-(Class)publishViewControllerClass;
-(void)publishPost:(id)arg1 didFailWithError:(id)arg2 ;
-(void)publishPostSucceeded:(id)arg1 ;
-(void)publishPost:(id)arg1 hasWrittenBytes:(int)arg2 expectsToWrite:(int)arg3 ;
@end

