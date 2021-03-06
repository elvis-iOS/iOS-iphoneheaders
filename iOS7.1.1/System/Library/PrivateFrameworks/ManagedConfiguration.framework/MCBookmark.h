/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:40 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSURL, NSString;

@interface MCBookmark : NSObject <NSCopying> {

	NSURL* _URL;
	NSString* _title;
	NSString* _path;

}

@property (nonatomic,retain) NSURL * URL;                   //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * path;               //@synthesize path=_path - In the implementation block
-(void)setTitle:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(id)description;
-(id)path;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)title;
-(id)URL;
-(void)setPath:(id)arg1 ;
-(void)setURL:(id)arg1 ;
-(void).cxx_destruct;
-(id)initWithSerializableDictionary:(id)arg1 ;
-(id)serializableDictionary;
@end

