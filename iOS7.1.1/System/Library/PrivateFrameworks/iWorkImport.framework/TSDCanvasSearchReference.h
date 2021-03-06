/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:40 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKSearchReference.h>

@protocol TSDCanvasSelection, TSKAnnotation;
@class TSDDrawableInfo, TSKDocumentRoot, NSArray;

@interface TSDCanvasSearchReference : NSObject <TSKSearchReference> {

	<TSDCanvasSelection>* mCanvasSelection;
	TSDDrawableInfo* mDrawableInfo;
	TSKDocumentRoot* mDocumentRoot;
	bool mAutohideHighlight;
	bool mPulseHighlight;
	NSArray* mFindHighlights;
	<TSKAnnotation>* mAnnotation;
	CGPoint mSearchReferencePoint;

}

@property (assign,nonatomic) CGPoint searchReferencePoint; 
@property (nonatomic,retain) NSArray * findHighlights; 
@property (assign,nonatomic) bool pulseHighlight; 
@property (assign,nonatomic) bool autohideHighlight; 
@property (nonatomic,retain) <TSKAnnotation> * annotation; 
+(id)searchReferenceWithDrawableInfo:(id)arg1 ;
-(id)drawableInfo;
-(void)setFindHighlights:(id)arg1 ;
-(void)setSearchReferencePoint:(CGPoint)arg1 ;
-(CGPoint)searchReferencePoint;
-(id)commandForReplacingWithString:(id)arg1 options:(unsigned long long)arg2 ;
-(id)searchReferenceForReplacingWithString:(id)arg1 options:(unsigned long long)arg2 authorCreatedWithCommand:(id*)arg3 ;
-(id)searchReferenceStart;
-(id)searchReferenceEnd;
-(bool)isReplaceable;
-(id)findHighlights;
-(bool)pulseHighlight;
-(void)setPulseHighlight:(bool)arg1 ;
-(bool)autohideHighlight;
-(void)setAutohideHighlight:(bool)arg1 ;
-(id)initWithDrawableInfo:(id)arg1 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)selection;
-(id)model;
-(id)annotation;
-(void)setAnnotation:(id)arg1 ;
@end

