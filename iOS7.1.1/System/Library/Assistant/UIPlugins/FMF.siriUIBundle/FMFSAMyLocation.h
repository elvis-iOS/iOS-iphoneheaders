/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/FMF.siriUIBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FMF/FMFSALocation.h>

@class NSString;

@interface FMFSAMyLocation : FMFSALocation {

	bool isVisible;
	NSString* _username;

}

@property (nonatomic,retain) NSString * username;              //@synthesize username=_username - In the implementation block
@property (assign,nonatomic) bool isVisible; 
+(id)myLocation:(bool)arg1 andDictionary:(id)arg2 preferredEmail:(id)arg3 ;
+(id)myLocation:(bool)arg1 siriLocation:(id)arg2 preferredEmail:(id)arg3 ;
+(id)bundle;
-(id)prettyTimestamp;
-(void)setIsVisible:(bool)arg1 ;
-(id)friendLocation:(bool)arg1 ;
-(id)initWithMyLocation:(bool)arg1 siriLocation:(id)arg2 preferredEmail:(id)arg3 ;
-(id)initWithMyLocation:(bool)arg1 andDictionary:(id)arg2 preferredEmail:(id)arg3 ;
-(bool)isVisible;
-(void).cxx_destruct;
-(void)setUsername:(id)arg1 ;
-(id)username;
@end
