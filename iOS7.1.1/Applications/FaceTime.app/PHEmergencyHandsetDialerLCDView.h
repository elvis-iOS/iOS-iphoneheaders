/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <FaceTime/PHHandsetDialerLCDView.h>

@class PHTextCycleLabel, NSLayoutConstraint;

@interface PHEmergencyHandsetDialerLCDView : PHHandsetDialerLCDView {

	PHTextCycleLabel* _emergencyTitleLabel;
	NSLayoutConstraint* _spacingBetweenNumberLabelAndEmergencyLabel;

}

@property (readonly) PHTextCycleLabel * emergencyTitleLabel;                                               //@synthesize emergencyTitleLabel=_emergencyTitleLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * spacingBetweenNumberLabelAndEmergencyLabel;              //@synthesize spacingBetweenNumberLabelAndEmergencyLabel=_spacingBetweenNumberLabelAndEmergencyLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 forDialerType:(int)arg2 ;
-(void)_applyLayoutConstraints;
-(id)emergencyTitleLabel;
-(void)setSpacingBetweenNumberLabelAndEmergencyLabel:(id)arg1 ;
-(id)spacingBetweenNumberLabelAndEmergencyLabel;
-(void)setText:(id)arg1 needsFormat:(BOOL)arg2 name:(id)arg3 label:(id)arg4 ;
-(void)_updateEmergencyLabel;
-(void)setText:(id)arg1 needsFormat:(BOOL)arg2 ;
-(void)deleteCharacter;
-(id)newNameAndLabelView;
-(id)newDeleteButton;
-(id)newAddContactButton;
-(void)applyLayoutConstraints;
-(id)lcdColor;
-(void)dealloc;
@end
