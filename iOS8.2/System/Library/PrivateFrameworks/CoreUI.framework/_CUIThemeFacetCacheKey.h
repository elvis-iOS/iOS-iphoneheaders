/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:54 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@interface _CUIThemeFacetCacheKey : NSObject {

	renditionkeytoken keyList[16];
	int themeIndex;
	unsigned long long hashPrecalc;

}
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash64;
-(id)initWithKeyList:(const renditionkeytoken*)arg1 themeIndex:(int)arg2 ;
@end

