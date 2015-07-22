/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:33 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/NSCoding.h>
#import <CoreImage/NSCopying.h>

@interface CIColor : NSObject <NSCoding, NSCopying> {

	void* _priv;
	void** _pad[3];

}
+(id)colorWithSRGBRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)colorWithSRGBRed:(double)arg1 green:(double)arg2 blue:(double)arg3 ;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 ;
+(id)colorWithString:(id)arg1 ;
+(id)colorWithCGColor:(CGColorRef)arg1 ;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(id)initWithColor:(id)arg1 ;
-(CGColorSpaceRef)colorSpace;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(CGColorRef)CGColor;
-(void)encodeWithCoder:(id)arg1 ;
-(double)alpha;
-(unsigned long long)numberOfComponents;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(CGColorRef)cgColor;
-(id)initWithString:(id)arg1 ;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(double)red;
-(double)green;
-(double)blue;
-(const double*)components;
-(void)finalize;
-(id)stringRepresentation;
@end
