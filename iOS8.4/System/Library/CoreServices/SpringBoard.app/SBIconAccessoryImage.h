/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIImage.h>
#import <SpringBoard/SBCountedMapValue.h>

@class NSString;

@interface SBIconAccessoryImage : UIImage <SBCountedMapValue> {

	NSString* _countedMapKey;

}

@property (nonatomic,copy) NSString * countedMapKey;                //@synthesize countedMapKey=_countedMapKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCountedMapKey:(NSString *)arg1 ;
-(NSString *)countedMapKey;
-(void)dealloc;
-(id)initWithImage:(id)arg1 ;
@end

