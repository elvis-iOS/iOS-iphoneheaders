/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:35 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKIconArtwork.h>

@class VKIconArtwork;

@interface _VKScaledFallbackIconArtwork : VKIconArtwork {

	VKIconArtwork* _artwork;
	CGSize _size;

}
-(void)dealloc;
-(CGSize)size;
-(id)_newImage;
-(void)_cleanUpAfterDrawing;
-(id)initWithArtwork:(id)arg1 contentScale:(float)arg2 ;
@end

