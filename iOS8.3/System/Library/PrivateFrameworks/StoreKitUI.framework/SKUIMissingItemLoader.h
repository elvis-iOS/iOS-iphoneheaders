/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:39:13 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIItemRequestDelegate.h>

@protocol SKUIMissingItemDelegate;
@class NSString, SKUIResourceLoader, NSMutableDictionary;

@interface SKUIMissingItemLoader : NSObject <SKUIItemRequestDelegate> {

	int _batchSize;
	id<SKUIMissingItemDelegate> _delegate;
	NSString* _imageProfile;
	NSString* _keyProfile;
	SKUIResourceLoader* _loader;
	NSMutableDictionary* _requests;

}

@property (assign,nonatomic) int batchSize;                                            //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,copy) NSString * imageProfile;                                    //@synthesize imageProfile=_imageProfile - In the implementation block
@property (nonatomic,copy) NSString * keyProfile;                                      //@synthesize keyProfile=_keyProfile - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIMissingItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setKeyProfile:(NSString *)arg1 ;
-(void)setDelegate:(id<SKUIMissingItemDelegate>)arg1 ;
-(id)init;
-(id<SKUIMissingItemDelegate>)delegate;
-(int)batchSize;
-(void)setBatchSize:(int)arg1 ;
-(void)loadItemsForPageComponent:(id)arg1 startIndex:(int)arg2 reason:(int)arg3 ;
-(NSString *)imageProfile;
-(void)setImageProfile:(NSString *)arg1 ;
-(NSString *)keyProfile;
-(void)itemRequest:(id)arg1 didFinishWithItems:(id)arg2 invalidItemIdentifiers:(id)arg3 ;
-(void)loadItemsWithIdentifiers:(id)arg1 reason:(int)arg2 ;
-(id)_existingRequestIDForItemID:(id)arg1 ;
-(void)_requestItems:(id)arg1 withReason:(int)arg2 ;
-(id)initWithResourceLoader:(id)arg1 ;
@end

