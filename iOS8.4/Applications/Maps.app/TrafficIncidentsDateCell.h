/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel, UIColor;

@interface TrafficIncidentsDateCell : UITableViewCell {

	char _showBottomSeparator;
	NSString* _startDateString;
	NSString* _endDateString;
	UILabel* _startDateLabel;
	UILabel* _endDateLabel;
	UIColor* _textColor;

}

@property (nonatomic,retain) NSString * startDateString;              //@synthesize startDateString=_startDateString - In the implementation block
@property (nonatomic,retain) NSString * endDateString;                //@synthesize endDateString=_endDateString - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                     //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) char showBottomSeparator;                //@synthesize showBottomSeparator=_showBottomSeparator - In the implementation block
@property (nonatomic,retain) UILabel * startDateLabel;                //@synthesize startDateLabel=_startDateLabel - In the implementation block
@property (nonatomic,retain) UILabel * endDateLabel;                  //@synthesize endDateLabel=_endDateLabel - In the implementation block
+(float)preferredHeightWithStart:(char)arg1 end:(char)arg2 ;
-(void)_contentSizeDidChange:(id)arg1 ;
-(void)setShowBottomSeparator:(char)arg1 ;
-(void)setStartDateString:(NSString *)arg1 ;
-(void)setEndDateString:(NSString *)arg1 ;
-(UILabel *)startDateLabel;
-(UILabel *)endDateLabel;
-(void)setStartDateLabel:(UILabel *)arg1 ;
-(void)setEndDateLabel:(UILabel *)arg1 ;
-(NSString *)startDateString;
-(NSString *)endDateString;
-(char)showBottomSeparator;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setSeparatorStyle:(int)arg1 ;
-(UIColor *)textColor;
@end
