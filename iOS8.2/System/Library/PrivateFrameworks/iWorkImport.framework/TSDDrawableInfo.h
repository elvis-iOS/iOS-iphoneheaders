/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:11 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSDChangeableInfo.h>
#import <iWorkImport/TSKDocumentObject.h>
#import <iWorkImport/TSKTransformableObject.h>
#import <iWorkImport/TSKSearchable.h>

@protocol TSDContainerInfo, TSDOwningAttachment;
@class TSDInfoGeometry, NSObject, TSPLazyReference, TSSPropertySetChangeDetails, TSDExteriorTextWrap, TSPObject, TSDDefaultPartitioner, NSURL, TSDDrawableComment, NSString, KNSlide, KNAbstractSlide, NSArray, KNBuild;

@interface TSDDrawableInfo : TSPObject <TSDChangeableInfo, TSKDocumentObject, TSKTransformableObject, TSKSearchable> {

	TSDInfoGeometry* mGeometry;
	NSObject*<TSDContainerInfo> mParentInfo;
	TSPLazyReference* mParentInfoReference;
	char mLocked;
	char mAspectRatioLocked;
	TSSPropertySetChangeDetails* mChanges;
	TSDExteriorTextWrap* mExteriorTextWrap;
	TSPObject*<TSDOwningAttachment> mOwningAttachment;
	TSDDefaultPartitioner* mDefaultPartitioner;
	NSURL* mHyperlinkURL;
	TSDDrawableComment* mComment;
	NSString* mAccessibilityDescription;

}

@property (nonatomic,readonly) KNSlide * slide; 
@property (nonatomic,readonly) KNAbstractSlide * abstractSlide; 
@property (nonatomic,readonly) NSArray * builds; 
@property (nonatomic,readonly) unsigned buildCount; 
@property (nonatomic,readonly) char hasBuilds; 
@property (nonatomic,readonly) KNBuild * buildIn; 
@property (nonatomic,readonly) KNBuild * buildOut; 
@property (nonatomic,readonly) char hasActionBuilds; 
@property (nonatomic,readonly) NSArray * actionBuilds; 
@property (nonatomic,readonly) NSArray * buildChunks; 
@property (nonatomic,readonly) NSArray * activeBuildChunks; 
@property (nonatomic,readonly) NSArray * ghostInfos; 
@property (assign,getter=isLocked,nonatomic) char locked; 
@property (getter=isLockable,nonatomic,readonly) char lockable; 
@property (nonatomic,readonly) char supportsAttachedComments; 
@property (assign,nonatomic) char aspectRatioLocked; 
@property (nonatomic,readonly) char canSizeBeChangedIncrementally; 
@property (nonatomic,copy) TSDExteriorTextWrap * exteriorTextWrap; 
@property (nonatomic,copy) NSURL * hyperlinkURL; 
@property (nonatomic,readonly) char supportsHyperlinks; 
@property (nonatomic,copy) NSString * accessibilityDescription; 
@property (nonatomic,retain) TSDDrawableComment * comment; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char matchesObjectPlaceholderGeometry; 
@property (nonatomic,copy) TSDInfoGeometry * geometry; 
@property (assign,nonatomic) NSObject*<TSDContainerInfo> parentInfo; 
@property (assign,nonatomic) TSPObject*<TSDOwningAttachment> owningAttachment; 
@property (nonatomic,readonly) TSPObject*<TSDOwningAttachment> owningAttachmentNoRecurse; 
@property (getter=isFloatingAboveText,nonatomic,readonly) char floatingAboveText; 
@property (getter=isAnchoredToText,nonatomic,readonly) char anchoredToText; 
@property (getter=isInlineWithText,nonatomic,readonly) char inlineWithText; 
@property (getter=isAttachedToBodyText,nonatomic,readonly) char attachedToBodyText; 
@property (nonatomic,readonly) char isUserModifiable; 
@property (nonatomic,readonly) Class editorClass; 
+(void)load;
+(char)needsObjectUUID;
+(void)setShouldPartitionByDefault:(char)arg1 ;
+(char)canPartition;
-(NSArray *)builds;
-(NSArray *)buildChunks;
-(NSArray *)activeBuildChunks;
-(char)hasBuilds;
-(char)swizzled_matchesObjectPlaceholderGeometry;
-(NSArray *)actionBuilds;
-(unsigned)buildCount;
-(KNAbstractSlide *)abstractSlide;
-(char)hasActionBuilds;
-(KNBuild *)buildIn;
-(KNBuild *)buildOut;
-(id)activeBuildChunksForAnimationType:(int)arg1 ;
-(NSArray *)ghostInfos;
-(void)swizzled_setMatchesObjectPlaceholderGeometry:(char)arg1 ;
-(KNSlide *)slide;
-(char)aspectRatioLocked;
-(id)copyWithContext:(id)arg1 ;
-(void)willCopyWithOtherDrawables:(id)arg1 ;
-(void)didCopy;
-(id)objectUUIDPath;
-(void)saveToArchive:(DrawableArchive*)arg1 archiver:(id)arg2 ;
-(void)beginCollectingChanges;
-(id)endCollectingChanges;
-(void)loadFromArchive:(const DrawableArchive*)arg1 unarchiver:(id)arg2 ;
-(id)presetKind;
-(char)isThemeContent;
-(Class)repClass;
-(TSPObject*<TSDOwningAttachment>)owningAttachment;
-(id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2 ;
-(int)mixingTypeWithObject:(id)arg1 ;
-(id)animationFilters;
-(id)commandForTransformingByTransform:(CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(CGRect)arg4 ;
-(CGAffineTransform)transformInRoot;
-(NSObject*<TSDContainerInfo>)parentInfo;
-(unsigned)textureDeliveryStyleFromDeliveryString:(id)arg1 ;
-(id)textureDeliveryStylesLocalized:(char)arg1 animationFilter:(id)arg2 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 ;
-(char)matchesObjectPlaceholderGeometry;
-(void)setMatchesObjectPlaceholderGeometry:(char)arg1 ;
-(void)coalesceChanges:(id)arg1 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(id)searchForAnnotationsWithHitBlock:(/*^block*/id)arg1 ;
-(void)setInsertionCenterPosition:(CGPoint)arg1 ;
-(unsigned)chunkCountForTextureDeliveryStyle:(unsigned)arg1 animationFilter:(id)arg2 ;
-(char)reverseChunkingIsSupported;
-(id)localizedChunkNameForTextureDeliveryStyle:(unsigned)arg1 animationFilter:(id)arg2 chunkIndex:(unsigned)arg3 ;
-(char)supportsHyperlinks;
-(char)canSizeBeChangedIncrementally;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg1 ;
-(id)uuidPathPrefixComponentsProvider;
-(void)setParentInfo:(NSObject*<TSDContainerInfo>)arg1 ;
-(void)setOwningAttachment:(TSPObject*<TSDOwningAttachment>)arg1 ;
-(TSPObject*<TSDOwningAttachment>)owningAttachmentNoRecurse;
-(char)isFloatingAboveText;
-(char)isAnchoredToText;
-(char)isInlineWithText;
-(char)isAttachedToBodyText;
-(char)supportsAttachedComments;
-(void)willChangeProperty:(int)arg1 ;
-(char)isLockable;
-(void)performBlockWithTemporaryLayout:(/*^block*/id)arg1 ;
-(CGAffineTransform)computeLayoutFullTransform;
-(id)containingGroup;
-(unsigned)chunkCountForTextureDeliveryStyle:(unsigned)arg1 byGlyphStyle:(int)arg2 animationFilter:(id)arg3 ;
-(id)descriptionForPasteboard;
-(CGPoint)transformableObjectAnchorPoint;
-(void)willChangeProperties:(id)arg1 ;
-(char)isUserModifiable;
-(Class)editorClass;
-(void)setHyperlinkURL:(NSURL *)arg1 ;
-(void)setAccessibilityDescription:(NSString *)arg1 ;
-(CGAffineTransform)computeFullTransform;
-(CGAffineTransform)fullTransformInRoot;
-(void)setExteriorTextWrap:(TSDExteriorTextWrap *)arg1 ;
-(TSDExteriorTextWrap *)exteriorTextWrap;
-(id)partitioner;
-(void)willGroupWithCommand:(id)arg1 ;
-(void)didUngroupWithCommand:(id)arg1 ;
-(id)commandToFlipWithOrientation:(int)arg1 ;
-(char)canAnchor;
-(char)canChangeWrapType;
-(id)descriptionForPasteboardWithSource:(id)arg1 ;
-(id)transformedGeometryWithTransform:(CGAffineTransform)arg1 inBounds:(CGRect)arg2 ;
-(NSURL *)hyperlinkURL;
-(void)setParentInfoDuringUnarchiving:(id)arg1 fromPasteboard:(char)arg2 ;
-(void)dealloc;
-(char)isLocked;
-(void)setLocked:(char)arg1 ;
-(TSDInfoGeometry *)geometry;
-(void)setGeometry:(TSDInfoGeometry *)arg1 ;
-(void)setComment:(TSDDrawableComment *)arg1 ;
-(void)setAspectRatioLocked:(char)arg1 ;
-(TSDDrawableComment *)comment;
-(int)elementKind;
-(Class)layoutClass;
-(NSString *)accessibilityDescription;
@end
