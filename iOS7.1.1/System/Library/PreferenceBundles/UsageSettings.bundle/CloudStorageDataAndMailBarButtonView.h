/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel;

@interface CloudStorageDataAndMailBarButtonView : UIView {

	UILabel* _data;
	UILabel* _dataSizes;
	UILabel* _mail;
	UILabel* _mailSizes;

}
+(id)barButtonItemWithData:(id)arg1 andMail:(id)arg2 ;
-(id)initWithData:(id)arg1 andMail:(id)arg2 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)sizeToFit;
@end
