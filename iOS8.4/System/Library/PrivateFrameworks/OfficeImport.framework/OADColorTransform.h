/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:07 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>

@interface OADColorTransform : NSObject <NSCopying> {

	int mType;

}
+(float)applyAlphaTransform:(id)arg1 toAlpha:(float)arg2 ;
+(id)applyExpTransformWithValue:(float)arg1 toColor:(id)arg2 ;
+(id)applyRGBTransform:(id)arg1 toColor:(id)arg2 skipGamma:(BOOL)arg3 ;
+(id)applyHSLTransform:(id)arg1 toColor:(id)arg2 ;
+(id)colorByApplyingTransforms:(id)arg1 toColor:(id)arg2 ;
+(float)alphaByApplyingTransforms:(id)arg1 toAlpha:(float)arg2 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithType:(int)arg1 ;
@end

