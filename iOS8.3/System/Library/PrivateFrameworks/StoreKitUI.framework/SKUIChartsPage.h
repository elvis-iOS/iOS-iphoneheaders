/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:38:57 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePage.h>
#import <StoreKitUI/NSCopying.h>

@class NSURL;

@interface SKUIChartsPage : SKUIStorePage <NSCopying> {

	NSURL* _categoryURL;

}

@property (nonatomic,copy) NSURL * categoryURL;              //@synthesize categoryURL=_categoryURL - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCategoryURL:(NSURL *)arg1 ;
-(NSURL *)categoryURL;
@end
