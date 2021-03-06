/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVAssetWriterInputConfigurationState, AVWeakReference, NSString, AVOutputSettings, NSArray, NSDictionary;

@interface AVAssetWriterInputHelper : NSObject {

	AVAssetWriterInputConfigurationState* _configurationState;
	AVWeakReference* _weakReferenceToAssetWriterInput;

}

@property (nonatomic,readonly) AVAssetWriterInputConfigurationState * configurationState;              //@synthesize configurationState=_configurationState - In the implementation block
@property (retain) AVWeakReference * weakReferenceToAssetWriterInput;                                  //@synthesize weakReferenceToAssetWriterInput=_weakReferenceToAssetWriterInput - In the implementation block
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) int trackID; 
@property (nonatomic,readonly) NSString * mediaType; 
@property (nonatomic,readonly) AVOutputSettings * outputSettings; 
@property (nonatomic,readonly) opaqueCMFormatDescriptionRef sourceFormatHint; 
@property (assign,nonatomic) CGAffineTransform transform; 
@property (nonatomic,copy) NSArray * metadata; 
@property (assign,nonatomic) int mediaTimeScale; 
@property (getter=isReadyForMoreMediaData,nonatomic,readonly) bool readyForMoreMediaData; 
@property (assign,nonatomic) bool expectsMediaDataInRealTime; 
@property (assign,nonatomic) CGSize naturalSize; 
@property (nonatomic,copy) NSString * languageCode; 
@property (nonatomic,copy) NSString * extendedLanguageTag; 
@property (assign,nonatomic) bool marksOutputTrackAsEnabled; 
@property (assign,nonatomic) float preferredVolume; 
@property (assign,nonatomic) long long layer; 
@property (assign,nonatomic) short alternateGroupID; 
@property (nonatomic,readonly) NSDictionary * trackReferences; 
@property (nonatomic,copy) NSDictionary * sourcePixelBufferAttributes; 
@property (nonatomic,readonly) CVPixelBufferPoolRef pixelBufferPool; 
-(float)preferredVolume;
-(id)extendedLanguageTag;
-(void)setNaturalSize:(CGSize)arg1 ;
-(void)setExtendedLanguageTag:(id)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(id)initWithConfigurationState:(id)arg1 ;
-(id)configurationState;
-(opaqueCMFormatDescriptionRef)sourceFormatHint;
-(void)setMarksOutputTrackAsEnabled:(bool)arg1 ;
-(bool)expectsMediaDataInRealTime;
-(bool)marksOutputTrackAsEnabled;
-(id)sourcePixelBufferAttributes;
-(void)setSourcePixelBufferAttributes:(id)arg1 ;
-(int)mediaTimeScale;
-(void)setMediaTimeScale:(int)arg1 ;
-(void)setExpectsMediaDataInRealTime:(bool)arg1 ;
-(short)alternateGroupID;
-(void)setAlternateGroupID:(short)arg1 ;
-(void)setWeakReferenceToAssetWriterInput:(id)arg1 ;
-(CVPixelBufferPoolRef)pixelBufferPool;
-(void)prepareToEndSession;
-(bool)prepareToFinishWritingReturningError:(id*)arg1 ;
-(id)transitionToAndReturnTerminalHelperWithTerminalStatus:(long long)arg1 ;
-(bool)isReadyForMoreMediaData;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(bool)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(bool)appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_CM4)arg2 ;
-(void)markAsFinished;
-(bool)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 ;
-(void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 ;
-(id)weakReferenceToAssetWriterInput;
-(void)transitionAssetWriterAndAllInputsToFailedStatusWithError:(id)arg1 ;
-(int)trackID;
-(id)trackReferences;
-(void)dealloc;
-(long long)layer;
-(void)setLayer:(long long)arg1 ;
-(CGAffineTransform)transform;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(id)languageCode;
-(CGSize)naturalSize;
-(long long)status;
-(id)outputSettings;
-(void)setMetadata:(id)arg1 ;
-(id)metadata;
-(id)mediaType;
-(void)setLanguageCode:(id)arg1 ;
@end

