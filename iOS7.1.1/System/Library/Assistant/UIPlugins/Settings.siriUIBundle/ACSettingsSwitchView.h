/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/Settings.siriUIBundle/Settings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Settings/Settings-Structs.h>
#import <Settings/ACSettingsSnippetView.h>

@class UIImageView, UIImage, UILabel, UISwitch;

@interface ACSettingsSwitchView : ACSettingsSnippetView {

	UIImageView* _iconImageView;
	UIImage* _icon;
	UILabel* _title;
	UISwitch* _switchControl;

}

@property (nonatomic,retain) UIImage * icon;                          //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) UILabel * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UISwitch * switchControl;              //@synthesize switchControl=_switchControl - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)title;
-(void)setIcon:(id)arg1 ;
-(void).cxx_destruct;
-(id)switchControl;
-(id)icon;
@end
