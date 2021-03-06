/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobilePhone/MobilePhone-Structs.h>
#import <UIKit/UIControl.h>

@class UILabel;

@interface PHHandsetDialerNameLabelView : UIControl {

	BOOL _isShowingAddToContactsLabel;
	UILabel* _nameAndLabelLabel;
	UILabel* _addToContactsLabel;

}

@property (retain) UILabel * nameAndLabelLabel;                   //@synthesize nameAndLabelLabel=_nameAndLabelLabel - In the implementation block
@property (retain) UILabel * addToContactsLabel;                  //@synthesize addToContactsLabel=_addToContactsLabel - In the implementation block
@property (assign) BOOL isShowingAddToContactsLabel;              //@synthesize isShowingAddToContactsLabel=_isShowingAddToContactsLabel - In the implementation block
-(id)textColorForHighlightedState:(BOOL)arg1 ;
-(void)setAddToContactsLabel:(id)arg1 ;
-(void)setNameAndLabelLabel:(id)arg1 ;
-(void)setIsShowingAddToContactsLabel:(BOOL)arg1 ;
-(id)nameAndLabelLabel;
-(id)addToContactsLabel;
-(BOOL)isShowingAddToContactsLabel;
-(void)showName:(id)arg1 label:(id)arg2 animated:(BOOL)arg3 ;
-(void)showAddToContactsLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(BOOL)arg1 ;
@end

