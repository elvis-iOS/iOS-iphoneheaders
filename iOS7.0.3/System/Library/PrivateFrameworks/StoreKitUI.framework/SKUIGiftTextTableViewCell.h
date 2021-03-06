/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <UIKit/UITextViewDelegate.h>

@class UIView, UILabel, UITextView, NSString;

@interface SKUIGiftTextTableViewCell : UITableViewCell <UITextViewDelegate> {

	UIView* _bottomBorderView;
	UILabel* _label;
	int _maximumCharacterCount;
	UILabel* _placeholderLabel;
	UITextView* _textView;
	UIView* _topBorderView;

}

@property (nonatomic,copy) NSString * label; 
@property (assign,nonatomic) int maximumCharacterCount;              //@synthesize maximumCharacterCount=_maximumCharacterCount - In the implementation block
@property (nonatomic,copy) NSString * placeholder; 
@property (nonatomic,retain) UITextView * textView;                  //@synthesize textView=_textView - In the implementation block
+(id)newTextView;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTextView:(id)arg1 ;
-(void)setPlaceholder:(id)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(id)placeholder;
-(id)textView;
-(void)setMaximumCharacterCount:(int)arg1 ;
-(int)maximumCharacterCount;
-(void).cxx_destruct;
@end

