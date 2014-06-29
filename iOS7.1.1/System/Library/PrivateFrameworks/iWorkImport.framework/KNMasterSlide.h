/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:51 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/KNAbstractSlide.h>
#import <iWorkImport/TSSThemeAsset.h>
#import <iWorkImport/TSKTransformableObject.h>

@class NSString, KNClassicStylesheetRecord, NSArray;

@interface KNMasterSlide : KNAbstractSlide <TSSThemeAsset, TSKTransformableObject> {

	NSString* mName;
	CGRect mObjectRect;
	KNClassicStylesheetRecord* mClassicStylesheetRecord;
	NSArray* mBodyParagraphStyles;
	NSArray* mBodyListStyles;
	NSString* mThumbnailTextForTitlePlaceholder;
	NSString* mThumbnailTextForBodyPlaceholder;

}

@property (nonatomic,retain) NSString * name; 
@property (assign,nonatomic) CGRect objectRect; 
@property (nonatomic,readonly) KNClassicStylesheetRecord * classicStylesheetRecord; 
@property (nonatomic,copy) NSArray * bodyParagraphStyles; 
@property (nonatomic,copy) NSArray * bodyListStyles; 
@property (nonatomic,retain) NSString * thumbnailTextForTitlePlaceholder; 
@property (nonatomic,retain) NSString * thumbnailTextForBodyPlaceholder; 
+(id)p_defaultMasterGuideColor;
+(id)masterGuideColor;
+(void)setMasterGuideColor:(id)arg1 ;
+(void)initialize;
-(id)packageLocator;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)generateObjectPlaceholderIfNecessary;
-(bool)isThemeEquivalent:(id)arg1 ;
-(SEL)mapThemeAssetSelector;
-(bool)isThemeContent;
-(bool)containsProperty:(int)arg1 ;
-(id)commandForTransformingByTransform:(CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(CGRect)arg4 ;
-(id)objectForProperty:(int)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(id)alignmentGuides;
-(id)alignmentGuidesForEditing;
-(bool)isObjectVisible;
-(id)initWithSlideNode:(id)arg1 context:(id)arg2 ;
-(CGRect)objectRect;
-(void)setObjectRect:(CGRect)arg1 ;
-(id)bodyListStyles;
-(id)bodyParagraphStyles;
-(void)setBodyListStyles:(id)arg1 ;
-(void)setBodyParagraphStyles:(id)arg1 ;
-(id)thumbnailTextForTitlePlaceholder;
-(void)setThumbnailTextForTitlePlaceholder:(id)arg1 ;
-(id)thumbnailTextForBodyPlaceholder;
-(void)setThumbnailTextForBodyPlaceholder:(id)arg1 ;
-(id)tagsforNewPlaceholderInfos:(id)arg1 ;
-(id)p_defaultTagForDrawable:(id)arg1 ;
-(id)p_defaultThumbnailTextForPlaceholder:(id)arg1 ;
-(id)copyWithContext:(id)arg1 andSlideNode:(id)arg2 ;
-(id)tagforNewPlaceholderInfo:(id)arg1 ;
-(id)thumbnailTextForPlaceholder:(id)arg1 ;
-(id)imagePlaceholders;
-(id)nonPlaceholderObjects;
-(void)updatePlaceholderText;
-(id)classicStylesheetRecord;
-(void)dealloc;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)childEnumerator;
@end
