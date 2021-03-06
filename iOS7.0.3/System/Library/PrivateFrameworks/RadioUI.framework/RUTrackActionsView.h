/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <RadioUI/RUTrackActioning.h>

@protocol RUTrackActionsDelegate;
@class _RUTrackActionsHeaderView, UITableView, NSString, UIImage;

@interface RUTrackActionsView : UIView <UITableViewDataSource, UITableViewDelegate, RUTrackActioning> {

	_RUTrackActionsHeaderView* _headerView;
	UITableView* _tableView;
	BOOL _presentedInPopover;
	NSString* _artistText;
	UIImage* _artworkImage;
	int _enabledActions;
	int _onActions;
	NSString* _songText;
	<RUTrackActionsDelegate>* _trackActionsDelegate;

}

@property (assign,getter=isPresentedInPopover,nonatomic) BOOL presentedInPopover;                 //@synthesize presentedInPopover=_presentedInPopover - In the implementation block
@property (nonatomic,copy) NSString * artistText;                                                 //@synthesize artistText=_artistText - In the implementation block
@property (nonatomic,retain) UIImage * artworkImage;                                              //@synthesize artworkImage=_artworkImage - In the implementation block
@property (nonatomic,readonly) int cancelIndex; 
@property (nonatomic,readonly) CGSize contentSize; 
@property (assign,nonatomic,__weak) <RUTrackActionsDelegate> * trackActionsDelegate;              //@synthesize trackActionsDelegate=_trackActionsDelegate - In the implementation block
@property (assign,nonatomic) int enabledActions;                                                  //@synthesize enabledActions=_enabledActions - In the implementation block
@property (assign,nonatomic) int onActions;                                                       //@synthesize onActions=_onActions - In the implementation block
@property (nonatomic,copy) NSString * songText;                                                   //@synthesize songText=_songText - In the implementation block
+(CGSize)artworkSize;
-(id)artworkImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)contentSize;
-(void)tableViewDidFinishReload:(id)arg1 ;
-(void)setArtworkImage:(id)arg1 ;
-(id)_titleForAction:(int)arg1 ;
-(void)setTrackActionsDelegate:(id)arg1 ;
-(void)setSongText:(id)arg1 ;
-(void)setArtistText:(id)arg1 ;
-(void)setEnabledActions:(int)arg1 ;
-(void)setOnActions:(int)arg1 ;
-(int)actionForButtonIndex:(int)arg1 ;
-(id)artistText;
-(void)setPresentedInPopover:(BOOL)arg1 ;
-(int)cancelIndex;
-(int)enabledActions;
-(int)onActions;
-(id)songText;
-(id)trackActionsDelegate;
-(id)_accessoryImageForAction:(int)arg1 highlighted:(BOOL)arg2 ;
-(UIOffset)_accessoryImageOffsetForAction:(int)arg1 ;
-(BOOL)isPresentedInPopover;
-(void).cxx_destruct;
@end

