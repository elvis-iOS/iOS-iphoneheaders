/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:47 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/PushKit.framework/PushKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface PKPushPayload : NSObject {

	NSString* _type;
	NSDictionary* _dictionaryPayload;

}

@property (copy) NSString * type;                               //@synthesize type=_type - In the implementation block
@property (copy) NSDictionary * dictionaryPayload;              //@synthesize dictionaryPayload=_dictionaryPayload - In the implementation block
-(void)setDictionaryPayload:(NSDictionary *)arg1 ;
-(NSDictionary *)dictionaryPayload;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
@end
