/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUAlbumListTableViewController.h>

@class UIBarButtonItem, NSArray;

@interface PUUIAlbumListViewController : PUAlbumListTableViewController {

	UIBarButtonItem* _imagePickerCancelButton;
	NSArray* __imagePickerMediaTypes;

}

@property (setter=_setImagePickerMediaTypes:,nonatomic,copy) NSArray * _imagePickerMediaTypes;              //@synthesize _imagePickerMediaTypes=__imagePickerMediaTypes - In the implementation block
-(id)init;
-(unsigned)supportedInterfaceOrientations;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)_setImagePickerMediaTypes:(id)arg1 ;
-(void)setAlbumList:(id)arg1 ;
-(void)updateNavigationBarAnimated:(BOOL)arg1 ;
-(BOOL)pu_wantsNavigationBarVisible;
-(id)_imagePickerMediaTypes;
-(void)_handleImagePickerCancel:(id)arg1 ;
-(void)_setAlbumList:(NSObject*)arg1 mediaTypes:(id)arg2 ;
-(id)newGridViewControllerForAlbum:(NSObject*)arg1 ;
-(BOOL)shouldAllowEmailInAlbumSubtitle;
-(void).cxx_destruct;
@end

