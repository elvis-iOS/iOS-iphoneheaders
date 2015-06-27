/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:02 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableDictionary, NSString;

@interface TSUQuicklookAssetColorMap : NSObject {

	NSMutableDictionary* mAssetMap;
	NSString* mAppAssetPath;

}

@property (nonatomic,retain) NSMutableDictionary * assetMap; 
@property (nonatomic,retain) NSString * appAssetPath; 
+(id)quicklookAssetMap;
+(char)hasAppAssets;
+(id)colorForResource:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(NSString *)appAssetPath;
-(NSMutableDictionary *)assetMap;
-(void)setAssetMap:(NSMutableDictionary *)arg1 ;
-(void)setAppAssetPath:(NSString *)arg1 ;
-(id)retain;
-(id)autorelease;
-(unsigned)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(oneway void)release;
@end
