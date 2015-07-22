/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:15 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class UIFont, UIColor;


@protocol FUAxisDescriptor <NSObject>
@property (nonatomic,retain) id minValue; 
@property (nonatomic,retain) id maxValue; 
@property (assign,nonatomic) unsigned long long labelAlignment; 
@property (nonatomic,retain) UIFont * labelFont; 
@property (nonatomic,retain) UIFont * subLabelFont; 
@property (nonatomic,retain) UIColor * highlightedLabelColor; 
@property (nonatomic,retain) UIColor * unhighlightedLabelColor; 
@property (nonatomic,retain) UIColor * selectedLabelColor; 
@property (nonatomic,retain) UIColor * highlightedSubLabelColor; 
@property (nonatomic,retain) UIColor * unhighlightedSubLabelColor; 
@property (assign,nonatomic) double axisDescriptorPadding; 
@property (assign,nonatomic) double subAxisDescriptorPadding; 
@property (assign,nonatomic) BOOL hideClippedLabels; 
@optional
-(void)selectLabel:(BOOL)arg1 atIndex:(unsigned long long)arg2;
-(id)axisSubLabels;
-(unsigned long long)numLabels;
-(id)positionForLabelAtIndex:(unsigned long long)arg1;
-(id)textForLabelAtIndex:(unsigned long long)arg1;
-(id)xAxisLabelStringArray;
-(unsigned long long)numSubLabels;
-(id)positionForSubLabelAtIndex:(unsigned long long)arg1;
-(id)textForSubLabelAtIndex:(unsigned long long)arg1;

@required
-(void)setLabelFont:(id)arg1;
-(UIFont *)labelFont;
-(id)maxValue;
-(id)minValue;
-(void)setMaxValue:(id)arg1;
-(void)setMinValue:(id)arg1;
-(id)axisLabels;
-(double)axisDescriptorPadding;
-(BOOL)hideClippedLabels;
-(UIFont *)subLabelFont;
-(double)subAxisDescriptorPadding;
-(Class)expectedDataType;
-(void)setSubLabelFont:(id)arg1;
-(UIColor *)highlightedLabelColor;
-(void)setHighlightedLabelColor:(id)arg1;
-(UIColor *)unhighlightedLabelColor;
-(void)setUnhighlightedLabelColor:(id)arg1;
-(UIColor *)selectedLabelColor;
-(void)setSelectedLabelColor:(id)arg1;
-(UIColor *)highlightedSubLabelColor;
-(void)setHighlightedSubLabelColor:(id)arg1;
-(UIColor *)unhighlightedSubLabelColor;
-(void)setUnhighlightedSubLabelColor:(id)arg1;
-(void)setAxisDescriptorPadding:(double)arg1;
-(void)setSubAxisDescriptorPadding:(double)arg1;
-(void)setHideClippedLabels:(BOOL)arg1;
-(unsigned long long)labelAlignment;
-(void)setLabelAlignment:(unsigned long long)arg1;

@end
