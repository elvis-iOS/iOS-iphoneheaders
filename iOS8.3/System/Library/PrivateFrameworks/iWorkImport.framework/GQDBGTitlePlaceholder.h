/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:41:57 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDBGPlaceholder.h>
#import <iWorkImport/GQDNameMappable.h>

@class GQDWPLayoutFrame, NSString;

@interface GQDBGTitlePlaceholder : GQDBGPlaceholder <GQDNameMappable> {

	GQDWPLayoutFrame* mFrame;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(const StateSpec*)stateForReading;
-(id)layoutFrame;
-(void)dealloc;
-(char)isBlank;
@end
