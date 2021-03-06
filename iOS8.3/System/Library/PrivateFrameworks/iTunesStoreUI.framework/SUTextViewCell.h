/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:40:00 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUTableCell.h>
#import <UIKit/UITextContentViewDelegate.h>

@protocol SUTextViewCellDelegate;
@class UIScrollView, SUTextContentView, NSString;

@interface SUTextViewCell : SUTableCell <UITextContentViewDelegate> {

	id<SUTextViewCellDelegate> _delegate;
	UIScrollView* _scrollView;
	SUTextContentView* _textContentView;

}

@property (assign,nonatomic) id<SUTextViewCellDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SUTextContentView * textContentView;              //@synthesize textContentView=_textContentView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<SUTextViewCellDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id<SUTextViewCellDelegate>)delegate;
-(char)resignFirstResponder;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(char)textContentViewShouldBeginEditing:(id)arg1 ;
-(char)textContentViewShouldEndEditing:(id)arg1 ;
-(char)textContentView:(id)arg1 shouldScrollForPendingContentSize:(CGSize)arg2 ;
-(char)textContentView:(id)arg1 shouldChangeSizeForContentSize:(CGSize)arg2 ;
-(void)textContentView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(void)textContentViewDidChange:(id)arg1 ;
-(SUTextContentView *)textContentView;
@end

