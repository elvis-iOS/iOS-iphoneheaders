/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:52:09 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GEOPlaceSearchResponse.h>

@class NSMapTable;

@interface GEOSearchResponse : GEOPlaceSearchResponse {

	NSMapTable* _attributionKeysToInfo;

}
-(void)dealloc;
-(void)_addAttributionInfo:(id)arg1 ;
-(id)attributionInfoForSourceIdentifier:(id)arg1 sourceVersion:(unsigned)arg2 ;
@end

