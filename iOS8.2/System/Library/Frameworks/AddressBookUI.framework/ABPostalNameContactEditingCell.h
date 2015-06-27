/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:13 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABContactCell.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, NSString;

@interface ABPostalNameContactEditingCell : ABContactCell <UITextFieldDelegate> {

	UITextField* _editingTextField;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCardGroupItem:(id)arg1 ;
-(id)firstResponderItem;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)textFieldDidEndEditing:(id)arg1 ;
@end
