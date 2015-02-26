/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:58 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL;

@interface YTVideoReference : NSObject {

	NSURL* _contentURL;
	unsigned _duration;
	int _profile;

}
-(id)contentURL;
-(id)archiveDictionary;
-(void)dealloc;
-(id)description;
-(unsigned)duration;
-(int)profile;
-(id)initFromArchiveDictionary:(id)arg1 ;
-(id)initWithContentURL:(id)arg1 duration:(unsigned)arg2 profile:(int)arg3 ;
@end
