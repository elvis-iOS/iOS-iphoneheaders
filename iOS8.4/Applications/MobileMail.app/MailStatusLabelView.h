/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:47 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>

@protocol MailStatusBarViewDelegate;
@class UILabel, NSString;

@interface MailStatusLabelView : UIView {

	id<MailStatusBarViewDelegate> _delegate;
	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;

}

@property (assign,nonatomic) id<MailStatusBarViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * primaryLabelText; 
@property (nonatomic,copy) NSString * secondaryLabelText; 
-(void)setPrimaryLabelText:(NSString *)arg1 ;
-(NSString *)primaryLabelText;
-(NSString *)secondaryLabelText;
-(void)setSecondaryLabelText:(NSString *)arg1 ;
-(void)_setText:(id)arg1 forLabel:(id*)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MailStatusBarViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MailStatusBarViewDelegate>)delegate;
-(void)update;
@end

