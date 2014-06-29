/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <Sports/ACSportsEntityView.h>

@class ACSportsMatchupScheduleTeamView, UIScrollView, NSMutableArray, ACSportsMatchupScheduleLineScoreView, UILabel, SiriUIKeyline, SASportsMatchup, SASportsLeague;

@interface ACSportsMatchupScheduleView : ACSportsEntityView {

	ACSportsMatchupScheduleTeamView* _firstTeamView;
	ACSportsMatchupScheduleTeamView* _secondTeamView;
	UIScrollView* _lineScoreScrollView;
	NSMutableArray* _lineScoreViews;
	ACSportsMatchupScheduleLineScoreView* _totalLineScoreView;
	bool _hasGameTimeAndDate;
	UILabel* _scheduleStatusLabel;
	UILabel* _seriesDescriptionLabel;
	UILabel* _tvLabel;
	SiriUIKeyline* _middleKeyline;
	SiriUIKeyline* _seriesDescriptionKeyline;
	SiriUIKeyline* _firstTeamKeyline;
	bool _isFirstHeaderGroup;
	bool _isMultiLine;
	SASportsMatchup* _matchup;
	SASportsLeague* _league;

}

@property (nonatomic,readonly) SASportsMatchup * matchup;              //@synthesize matchup=_matchup - In the implementation block
@property (nonatomic,readonly) SASportsLeague * league;                //@synthesize league=_league - In the implementation block
@property (assign,nonatomic) bool isFirstHeaderGroup;                  //@synthesize isFirstHeaderGroup=_isFirstHeaderGroup - In the implementation block
@property (assign,nonatomic) bool isMultiLine;                         //@synthesize isMultiLine=_isMultiLine - In the implementation block
+(id)viewWithMatchup:(id)arg1 league:(id)arg2 frame:(CGRect)arg3 ;
-(void)prepareForAppearance;
-(double)_headerHeight;
-(double)_legendHeight;
-(bool)supportsDisplayOfDomainObject:(id)arg1 league:(id)arg2 ;
-(void)setIsMultiLine:(bool)arg1 ;
-(void)setIsFirstHeaderGroup:(bool)arg1 ;
-(bool)isFirstHeaderGroup;
-(double)_seriesDescriptionHeight;
-(double)_secondLineHeight;
-(double)_seriesDescriptionBaselineAdjust;
-(void)setMatchup:(id)arg1 league:(id)arg2 ;
-(bool)isMultiLine;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void).cxx_destruct;
-(id)league;
-(id)matchup;
-(double)contentHeight;
@end
