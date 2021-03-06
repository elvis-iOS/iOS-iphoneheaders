/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@class NSMutableArray, NSString, ML3MusicLibrary;

@interface ML3MusicLibraryArtworkMigrationController : NSObject {

	NSMutableArray* _artworkConversionCompletionHandlers;
	NSString* _artworkConverterPIDNotifyName;
	int _artworkConverterPIDToken;
	bool _isConvertingArtwork;
	ML3MusicLibrary* _library;

}

@property (assign,nonatomic,__weak) ML3MusicLibrary * library;              //@synthesize library=_library - In the implementation block
+(bool)hasArtworkConversionManifestTasksRemainingUsingConnection:(id)arg1 ;
+(void)resetArtworkConversionManifestFormatPairs:(id)arg1 usingConnection:(id)arg2 ;
+(bool)automaticDatabaseArtworkConversionEnabled;
+(void)disableAutomaticDatabaseArtworkConversion;
+(id)artworkConversionManifestKeys;
+(void)enumerateArtworkConversionFormatPairingsWithBlock:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(void).cxx_destruct;
-(void)convertArtworkFormatsInBackground:(bool)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(id)initWithLibrary:(id)arg1 ;
-(bool)_atomicTestAndSetIsConvertingArtworkWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)_deorphanOriginalJPEGArtwork;
-(unsigned long long)_convertLegacyArtworkFromArtworkBlobFilePath:(id)arg1 success:(bool*)arg2 ;
-(unsigned long long)_convertAlbumGridBGRA1xToJPEG1xWithNotificationInterval:(double)arg1 ;
-(unsigned long long)_convertOriginalJPEGToFormatID1x:(unsigned)arg1 formatID2x:(unsigned)arg2 notificationInterval:(double)arg3 ;
-(void)_deleteUnnecessaryFormats;
-(void)_deleteUnusedArtistArtwork;
-(void)_atomicClearIsConvertingArtwork;
-(bool)_appendDeoprphaningWriteBlockToArray:(id)arg1 forCacheID:(id)arg2 ;
-(bool)_convertArtworkCacheID:(id)arg1 fromArtworkFormat:(unsigned)arg2 toArtworkFormat:(unsigned)arg3 sourceOptions:(id)arg4 colorSpace:(CGColorSpaceRef)arg5 ;
-(unsigned long long)_convertArtworkInManifsetFromArtworkFormat:(unsigned)arg1 toArtworkFormat:(unsigned)arg2 deleteOldFormat:(bool)arg3 notificationInterval:(double)arg4 ;
-(void)_noteUnnecessaryConversionForDeviceTypeFromArtworkFormat:(unsigned)arg1 toArtworkFormat:(unsigned)arg2 ;
-(void)_performOnGlobalArtworkConversionQueue:(/*^block*/ id)arg1 ;
-(id)library;
-(void)setLibrary:(id)arg1 ;
@end

