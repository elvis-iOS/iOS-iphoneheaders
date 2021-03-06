/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:48 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class BWVideoFormat, NSString, NSDictionary;

@interface BWPixelBufferPool : NSObject {

	BWVideoFormat* _videoFormat;
	unsigned long long _capacity;
	NSString* _name;
	BOOL _clientProvidesPool;
	NSDictionary* _additionalPixelBufferAttributes;
	long long _pixelBufferPoolOnce;
	CVPixelBufferPoolRef _pixelBufferPool;
	NSDictionary* _pixelBufferPoolAuxAttributes;
	int _pixelBufferPoolCreateError;

}

@property (nonatomic,readonly) unsigned long long capacity; 
@property (nonatomic,readonly) CVPixelBufferPoolRef cvPixelBufferPool; 
@property (nonatomic,readonly) CFDictionaryRef cvPixelBufferPoolAuxAttributes; 
+(void)initialize;
-(CVBufferRef)newPixelBuffer;
-(void)dealloc;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 ;
-(void)preallocateWithCompletionHandler:(/*^block*/id)arg1 ;
-(int)preallocate;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 clientProvidesPool:(BOOL)arg4 ;
-(void)setCVPixelBufferPool:(CVPixelBufferPoolRef)arg1 attributes:(CFDictionaryRef)arg2 ;
-(int)_ensurePool;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 additionalPixelBufferAttributes:(id)arg4 ;
-(CVPixelBufferPoolRef)cvPixelBufferPool;
-(CFDictionaryRef)cvPixelBufferPoolAuxAttributes;
-(unsigned long long)capacity;
@end

