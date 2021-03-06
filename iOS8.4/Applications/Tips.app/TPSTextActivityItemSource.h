/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:16 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Tips.app/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Tips/Tips-Structs.h>
#import <UIKit/UIActivityItemSource.h>

@class TPSTip, NSString;

@interface TPSTextActivityItemSource : NSObject <UIActivityItemSource> {

	TPSTip* _tip;

}

@property (nonatomic,retain) TPSTip * tip;                          //@synthesize tip=_tip - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TPSTip *)tip;
-(void)setTip:(TPSTip *)arg1 ;
-(id)initWithTip:(id)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
@end

