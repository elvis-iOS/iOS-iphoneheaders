/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class SULinkControl, NSMutableArray, NSArray;

@interface SUDownloadsGridFooterView : UIView {

	SULinkControl* _linkControl;
	NSMutableArray* _nativeButtons;
	NSArray* _scriptButtons;

}

@property (nonatomic,retain) NSArray * scriptButtons;              //@synthesize scriptButtons=_scriptButtons - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)sizeToFit;
-(id)scriptButtons;
-(void)setScriptButtons:(id)arg1 ;
-(void)_linkControlAction:(id)arg1 ;
-(void)_reloadNativeButtons;
-(double)_maximumButtonHeight;
-(id)_newNativeButton;
@end
