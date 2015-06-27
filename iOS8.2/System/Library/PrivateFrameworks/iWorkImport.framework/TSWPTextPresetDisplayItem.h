/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:18 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSWPTextStylePreset, NSString;

@interface TSWPTextPresetDisplayItem : NSObject {

	TSWPTextStylePreset* _preset;
	NSString* _displayName;

}

@property (nonatomic,retain) TSWPTextStylePreset * preset;              //@synthesize preset=_preset - In the implementation block
@property (nonatomic,copy) NSString * displayName;                      //@synthesize displayName=_displayName - In the implementation block
-(void)saveToArchive:(TextPresetDisplayItemArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const TextPresetDisplayItemArchive*)arg1 unarchiver:(id)arg2 ;
-(id)initWithPreset:(id)arg1 displayName:(id)arg2 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)displayName;
-(void)setPreset:(TSWPTextStylePreset *)arg1 ;
-(TSWPTextStylePreset *)preset;
@end
