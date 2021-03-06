/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:12 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDStyledLayout.h>

@class TSDBezierPath, TSDPathSource, TSDEditableBezierPathSource, TSDInfoGeometry, TSDMutableStroke, TSDFill;

@interface TSDShapeLayout : TSDStyledLayout {

	struct {
		unsigned path : 1;
		unsigned pathBounds : 1;
		unsigned pathBoundsWithoutStroke : 1;
		unsigned pathIsOpen : 1;
		unsigned pathIsLineSegment : 1;
		unsigned alignmentFrame : 1;
		unsigned alignmentFrameInRoot : 1;
		unsigned headAndTail : 1;
		unsigned headLineEnd : 1;
		unsigned tailLineEnd : 1;
		unsigned clippedPath : 1;
	}  mShapeInvalidFlags;
	TSDBezierPath* mCachedPath;
	CGRect mCachedPathBounds;
	CGRect mCachedPathBoundsWithoutStroke;
	char mCachedPathIsOpen;
	char mCachedPathIsLineSegment;
	CGRect mCachedAlignmentFrame;
	CGRect mCachedAlignmentFrameInRoot;
	CGAffineTransform mCachedAlignmentFrameInRootTransformInRoot;
	CGPoint mHeadPoint;
	CGPoint mTailPoint;
	CGPoint mHeadLineEndPoint;
	CGPoint mTailLineEndPoint;
	float mHeadLineEndAngle;
	float mTailLineEndAngle;
	int mHeadCutSegment;
	int mTailCutSegment;
	float mHeadCutT;
	float mTailCutT;
	TSDBezierPath* mCachedClippedPath;
	TSDPathSource* mShrunkenPathSource;
	TSDEditableBezierPathSource* mCachedEditableBezierPathSource;
	TSDPathSource* mCachedPathSource;
	TSDPathSource* mResizePathSource;
	TSDInfoGeometry* mResizeInfoGeometry;
	TSDInfoGeometry* mInitialInfoGeometry;
	TSDMutableStroke* mDynamicStroke;
	TSDFill* mDynamicFill;

}

@property (nonatomic,readonly) TSDFill * fill; 
@property (nonatomic,retain) TSDFill * dynamicFill; 
-(CGPoint)tailPoint;
-(CGRect)boundsForStandardKnobs;
-(void)takeSizeFromTracker:(id)arg1 ;
-(void)beginDynamicOperation;
-(void)endDynamicOperation;
-(void)endResize;
-(void)invalidateFrame;
-(id)layoutGeometryFromInfo;
-(void)offsetGeometryBy:(CGPoint)arg1 ;
-(id)computeLayoutGeometry;
-(void)processChangedProperty:(int)arg1 ;
-(CGRect)alignmentFrame;
-(id)i_computeWrapPath;
-(CGRect)alignmentFrameInRoot;
-(void)takeRotationFromTracker:(id)arg1 ;
-(char)shouldBeDisplayedInShowMode;
-(char)isStrokeBeingManipulated;
-(void)dynamicStrokeWidthChangeDidBegin;
-(void)dynamicStrokeWidthUpdateToValue:(float)arg1 ;
-(void)dynamicStrokeWidthChangeDidEnd;
-(id)initialInfoGeometry;
-(CGPoint)centerForConnecting;
-(char)supportsRotation;
-(char)supportsResize;
-(void)setControlKnobPosition:(unsigned)arg1 toPoint:(CGPoint)arg2 ;
-(CGPoint)getControlKnobPosition:(unsigned)arg1 ;
-(unsigned)numberOfControlKnobs;
-(id)pathSource;
-(id)shapeInfo;
-(CGRect)shapeFrameWithTransform:(CGAffineTransform)arg1 ;
-(CGRect)pathBounds;
-(void)aliasPathForScale:(float)arg1 adjustedStroke:(id*)arg2 adjustedPath:(id*)arg3 startDelta:(CGPoint*)arg4 endDelta:(CGPoint*)arg5 ;
-(char)pathIsOpen;
-(CGRect)pathBoundsWithoutStroke;
-(char)pathIsLineSegment;
-(CGRect)aliasedAlignmentFrameForScale:(float)arg1 ;
-(CGPoint)headPoint;
-(void)aliasPathForScale:(float)arg1 originalStroke:(id)arg2 adjustedStroke:(id*)arg3 adjustedPath:(id*)arg4 startDelta:(CGPoint*)arg5 endDelta:(CGPoint*)arg6 ;
-(id)editablePathSource;
-(id)strokeHeadLineEnd;
-(id)strokeTailLineEnd;
-(CGPoint)headLineEndPoint;
-(CGPoint)tailLineEndPoint;
-(float)headLineEndAngle;
-(float)tailLineEndAngle;
-(float)lineEndScale;
-(id)layoutInfoGeometry;
-(void)invalidatePathBounds;
-(CGAffineTransform)computeLayoutTransform;
-(void)p_invalidateHead;
-(void)p_invalidateTail;
-(id)p_cachedPath;
-(CGRect)p_cachedPathBounds;
-(CGRect)p_cachedPathBoundsWithoutStroke;
-(char)p_cachedPathIsOpen;
-(char)p_cachedPathIsLineSegment;
-(void)p_validateHeadAndTail;
-(void)p_validateHeadLineEnd;
-(void)p_validateTailLineEnd;
-(id)p_createClippedPath;
-(id)clippedPathForLineEnds;
-(CGRect)p_boundsOfLineEndForHead:(char)arg1 transform:(CGAffineTransform)arg2 ;
-(char)isInvisibleAutosizingShape;
-(void)p_invalidateClippedPath;
-(id)i_computeWrapPathClosed:(char)arg1 ;
-(id)p_unitePath:(id)arg1 withLineEndForHead:(char)arg2 stroke:(id)arg3 ;
-(void)p_computeAngle:(float*)arg1 point:(CGPoint*)arg2 cutSegment:(int*)arg3 cutT:(float*)arg4 forLineEndAtHead:(char)arg5 ;
-(id)smartPathSource;
-(char)isTailEndOnLeft;
-(char)canBeIntersected;
-(char)canResetTextAndObjectHandles;
-(void)dynamicallyMovingLineSegmentWithTracker:(id)arg1 ;
-(CGPoint)unclippedHeadPoint;
-(CGPoint)unclippedTailPoint;
-(void)p_updateResizeInfoGeometryFromResizePathSource;
-(TSDFill *)dynamicFill;
-(void)setDynamicFill:(TSDFill *)arg1 ;
-(id)textWrapperForExteriorWrap;
-(id)initWithInfo:(id)arg1 ;
-(void)invalidatePath;
-(void)dealloc;
-(id)path;
-(TSDFill *)fill;
-(id)stroke;
-(CGSize)minimumSize;
-(void)setGeometry:(id)arg1 ;
-(char)isInvisible;
-(char)isBeingManipulated;
@end

