/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:45 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/NSCopying.h>

@class KNSlideCollectionSelection, KNMacUILayout, NSMutableDictionary, NSSet;

@interface KNUIState : NSObject <NSCopying> {

	KNSlideCollectionSelection* mSlideTreeSelection;
	double mIPadCanvasViewScale;
	CGPoint mIPadCanvasOffset;
	double mDesktopCanvasViewScale;
	CGPoint mDesktopCanvasOffset;
	BOOL mHasPhoneCanvasViewScale;
	double mPhoneCanvasViewScale;
	BOOL mHasPhoneCanvasOffset;
	CGPoint mPhoneCanvasOffset;
	BOOL mHasPhone568CanvasViewScale;
	double mPhone568CanvasViewScale;
	BOOL mHasPhone568CanvasOffset;
	CGPoint mPhone568CanvasOffset;
	KNMacUILayout* mDocumentUILayout;
	BOOL mSlideViewFitsContentInWindow;
	double mLightTableZoomScale;
	BOOL mLightTableHidesSkippedSlides;
	CGPoint mDesktopMainWindowOrigin;
	CGSize mDesktopMainContentSize;
	double mDesktopNavigatorViewWidth;
	double mDesktopOutlineViewWidth;
	double mDesktopPresenterNotesViewHeight;
	NSMutableDictionary* mChartUIState;
	NSSet* mCollapsedSlideNodes;
	BOOL mShowSlideGuides;
	BOOL mShowMasterGuides;
	BOOL mShowsComments;
	BOOL mShowsRuler;

}

@property (nonatomic,retain) KNSlideCollectionSelection * slideTreeSelection; 
@property (assign,nonatomic) double canvasViewScale; 
@property (assign,nonatomic) CGPoint canvasOffset; 
@property (nonatomic,copy) KNMacUILayout * documentUILayout; 
@property (assign,nonatomic) BOOL slideViewFitsContentInWindow; 
@property (assign,nonatomic) double lightTableZoomScale; 
@property (assign,nonatomic) BOOL lightTableHidesSkippedSlides; 
@property (assign,nonatomic) CGPoint desktopMainWindowOrigin; 
@property (assign,nonatomic) CGSize desktopMainContentSize; 
@property (assign,nonatomic) double desktopNavigatorViewWidth; 
@property (assign,nonatomic) double desktopOutlineViewWidth; 
@property (assign,nonatomic) double desktopPresenterNotesHeight; 
@property (nonatomic,copy) NSSet * collapsedSlideNodes; 
@property (assign,nonatomic) BOOL showSlideGuides; 
@property (assign,nonatomic) BOOL showMasterGuides; 
@property (assign,nonatomic) BOOL showsComments; 
@property (assign,nonatomic) BOOL showsRuler; 
-(id)UIStateForChart:(id)arg1 ;
-(void)setUIState:(id)arg1 forChart:(id)arg2 ;
-(void)loadFromArchive:(const UIStateArchive*)arg1 unarchiver:(id)arg2 context:(id)arg3 ;
-(void)saveToArchive:(UIStateArchive*)arg1 archiver:(id)arg2 context:(id)arg3 ;
-(BOOL)showsComments;
-(void)setShowsComments:(BOOL)arg1 ;
-(void)setSlideTreeSelection:(KNSlideCollectionSelection *)arg1 ;
-(KNSlideCollectionSelection *)slideTreeSelection;
-(double)canvasViewScale;
-(CGPoint)canvasOffset;
-(KNMacUILayout *)documentUILayout;
-(BOOL)slideViewFitsContentInWindow;
-(double)lightTableZoomScale;
-(BOOL)lightTableHidesSkippedSlides;
-(CGPoint)desktopMainWindowOrigin;
-(CGSize)desktopMainContentSize;
-(double)desktopNavigatorViewWidth;
-(double)desktopOutlineViewWidth;
-(double)desktopPresenterNotesHeight;
-(BOOL)showSlideGuides;
-(BOOL)showMasterGuides;
-(BOOL)showsRuler;
-(void)setCanvasViewScale:(double)arg1 ;
-(void)setCanvasOffset:(CGPoint)arg1 ;
-(id)archivedUIStateInContext:(id)arg1 ;
-(void)setDocumentUILayout:(KNMacUILayout *)arg1 ;
-(void)setSlideViewFitsContentInWindow:(BOOL)arg1 ;
-(void)setLightTableZoomScale:(double)arg1 ;
-(void)setLightTableHidesSkippedSlides:(BOOL)arg1 ;
-(void)setDesktopMainWindowOrigin:(CGPoint)arg1 ;
-(void)setDesktopMainContentSize:(CGSize)arg1 ;
-(void)setDesktopNavigatorViewWidth:(double)arg1 ;
-(void)setDesktopOutlineViewWidth:(double)arg1 ;
-(void)setDesktopPresenterNotesHeight:(double)arg1 ;
-(NSSet *)collapsedSlideNodes;
-(void)setCollapsedSlideNodes:(NSSet *)arg1 ;
-(void)setShowMasterGuides:(BOOL)arg1 ;
-(void)setShowSlideGuides:(BOOL)arg1 ;
-(void)setShowsRuler:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

