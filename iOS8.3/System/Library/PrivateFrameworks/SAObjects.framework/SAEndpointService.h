/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:25:50 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAEndpoint.h>

@class NSString;

@interface SAEndpointService : SAEndpoint

@property (nonatomic,copy) NSString * serverUrl; 
+(id)endpointService;
+(id)endpointServiceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)serverUrl;
-(void)setServerUrl:(NSString *)arg1 ;
@end

