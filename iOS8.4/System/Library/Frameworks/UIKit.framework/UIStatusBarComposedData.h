/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/NSCopying.h>

@class NSString;

@interface UIStatusBarComposedData : NSObject <NSCopying> {

	SCD_Struct_UI71 _rawData;
	BOOL _itemEnabled[31];
	NSString* _doubleHeightStatus;

}

@property (nonatomic,readonly) SCD_Struct_UI71* rawData; 
@property (nonatomic,copy) NSString * doubleHeightStatus;              //@synthesize doubleHeightStatus=_doubleHeightStatus - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_UI71*)rawData;
-(BOOL)isItemEnabled:(int)arg1 ;
-(void)setItem:(int)arg1 enabled:(BOOL)arg2 ;
-(NSString *)doubleHeightStatus;
-(id)initWithRawData:(const SCD_Struct_UI71*)arg1 ;
-(void)setDoubleHeightStatus:(NSString *)arg1 ;
@end

