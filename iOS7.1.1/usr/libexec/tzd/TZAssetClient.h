/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/tzd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <tzd/tzd-Structs.h>
@class TZFileSystemInterface, TZAsset, TZAssetExpander;

@interface TZAssetClient : NSObject {

	TZFileSystemInterface* _fileSystemInterface;
	TZAsset* _currentAsset;
	TZAssetExpander* _assetExpander;

}

@property (retain) TZFileSystemInterface * fileSystemInterface;              //@synthesize fileSystemInterface=_fileSystemInterface - In the implementation block
@property (retain) TZAsset * currentAsset;                                   //@synthesize currentAsset=_currentAsset - In the implementation block
@property (retain) TZAssetExpander * assetExpander;                          //@synthesize assetExpander=_assetExpander - In the implementation block
-(id)fileSystemInterface;
-(BOOL)performAssetQueryWithLocalOnlySetting:(BOOL)arg1 withError:(id*)arg2 ;
-(void)setFileSystemInterface:(id)arg1 ;
-(BOOL)_downloadAssetIfNecessary:(id)arg1 withError:(id*)arg2 ;
-(BOOL)_shouldUpdateGivenBaselineTZDataVersion:(id)arg1 assetTZDataVersion:(id)arg2 ;
-(void)setAssetExpander:(id)arg1 ;
-(id)assetExpander;
-(id)_queryForTZDAssetsWithQueryType:(unsigned)arg1 withError:(id*)arg2 ;
-(BOOL)handleAvailableAssetResults:(id)arg1 withError:(id*)arg2 ;
-(id)_mobileGestaltInfoForKey:(CFStringRef)arg1 ;
-(BOOL)_downloadAsset:(id)arg1 withError:(id*)arg2 ;
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
-(id)currentAsset;
-(void)setCurrentAsset:(id)arg1 ;
@end

