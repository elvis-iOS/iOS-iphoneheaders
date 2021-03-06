/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:36:00 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <iTunesStore/NSCoding.h>
#import <iTunesStore/NSCopying.h>

@class NSLock, SSMutableURLRequestProperties, NSString, NSData, NSInputStream, NSDictionary, NSURL, NSArray;

@interface ISURLRequest : NSObject <NSCoding, NSCopying> {

	NSLock* _lock;
	SSMutableURLRequestProperties* _properties;

}

@property (retain) NSString * appleClientApplication; 
@property (retain) NSData * HTTPBody; 
@property (retain) NSInputStream * HTTPBodyStream; 
@property (retain) NSString * HTTPMethod; 
@property (retain) NSDictionary * queryStringDictionary; 
@property (readonly) NSURL * primaryURL; 
@property (retain) NSArray * URLs; 
@property (assign) int allowedRetryCount; 
@property (assign) double timeoutInterval; 
@property (assign) unsigned cachePolicy; 
@property (retain) NSDictionary * customHeaders; 
@property (assign) int URLBagType; 
@property (assign) long long expectedContentLength; 
+(id)requestWithURL:(id)arg1 ;
-(NSInputStream *)HTTPBodyStream;
-(NSData *)HTTPBody;
-(void)setAllowedRetryCount:(int)arg1 ;
-(void)setCachePolicy:(unsigned)arg1 ;
-(id)initWithRequestProperties:(id)arg1 ;
-(void)setHTTPBody:(NSData *)arg1 ;
-(id)initWithURLRequest:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)setURLs:(NSArray *)arg1 ;
-(NSArray *)URLs;
-(void)setTimeoutInterval:(double)arg1 ;
-(double)timeoutInterval;
-(unsigned)cachePolicy;
-(void)setHTTPBodyStream:(NSInputStream *)arg1 ;
-(NSString *)HTTPMethod;
-(id)requestProperties;
-(void)setHTTPMethod:(NSString *)arg1 ;
-(void)setValue:(id)arg1 forHeaderField:(id)arg2 ;
-(void)setURLBagType:(int)arg1 ;
-(int)URLBagType;
-(NSDictionary *)queryStringDictionary;
-(void)setExpectedContentLength:(long long)arg1 ;
-(int)allowedRetryCount;
-(long long)expectedContentLength;
-(NSString *)appleClientApplication;
-(NSDictionary *)customHeaders;
-(NSURL *)primaryURL;
-(void)setCustomHeaders:(NSDictionary *)arg1 ;
-(void)setQueryStringDictionary:(NSDictionary *)arg1 ;
-(void)setValue:(id)arg1 forQueryStringParameter:(id)arg2 ;
-(void)setAppleClientApplication:(NSString *)arg1 ;
-(id)_initCommon;
@end

