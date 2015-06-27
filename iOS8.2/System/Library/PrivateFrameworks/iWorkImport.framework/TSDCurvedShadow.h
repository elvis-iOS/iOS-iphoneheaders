/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:14 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDShadow.h>

@interface TSDCurvedShadow : TSDShadow {

	float mCurve;

}

@property (nonatomic,readonly) float curve; 
+(id)instanceWithArchive:(const ShadowArchive*)arg1 unarchiver:(id)arg2 ;
+(id)curvedShadowWithOffset:(float)arg1 angle:(float)arg2 radius:(float)arg3 curve:(float)arg4 opacity:(float)arg5 color:(CGColorRef)arg6 enabled:(char)arg7 ;
-(void)saveToArchive:(ShadowArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const ShadowArchive*)arg1 unarchiver:(id)arg2 ;
-(id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2 ;
-(int)mixingTypeWithObject:(id)arg1 ;
-(id)initWithOffset:(float)arg1 angle:(float)arg2 radius:(float)arg3 curve:(float)arg4 opacity:(float)arg5 color:(CGColorRef)arg6 enabled:(char)arg7 ;
-(CGRect)shadowBoundsForRect:(CGRect)arg1 additionalTransform:(CGAffineTransform)arg2 ;
-(float)clampOffset:(float)arg1 ;
-(id)newShadowClampedForSwatches;
-(char)showForEditingText;
-(CGRect)boundsInNaturalSpaceForRep:(id)arg1 ;
-(CGRect)boundsForRep:(id)arg1 ;
-(CGImageRef)newShadowImageForRep:(id)arg1 withSize:(CGSize)arg2 drawSelector:(SEL)arg3 unflipped:(char)arg4 ;
-(float)paddingForBlur;
-(CGRect)expandedBoundsForRect:(CGRect)arg1 ;
-(float)offsetFromCurve;
-(float)getVerticalOffset:(CGSize)arg1 ;
-(CGPoint)boundsShiftForSize:(CGSize)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)curve;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned)shadowType;
@end
