/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <Sports/ACSportsUIController.h>

@interface ACSportsTeamUIController : ACSportsUIController
+(id)listViewWithSnippet:(id)arg1 frame:(CGRect)arg2 ;
-(bool)_itemAtIndexPathIsSelectable:(id)arg1 ;
-(bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(bool)arg1 ;
-(id)initWithSnippet:(id)arg1 ;
-(double)desiredHeightForFooterView;
@end

