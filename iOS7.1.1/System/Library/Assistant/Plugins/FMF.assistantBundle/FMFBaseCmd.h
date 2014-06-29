/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/Plugins/FMF.assistantBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FMF/ISJSONCommand.h>

@class NSNumber, NSURL;

@interface FMFBaseCmd : ISJSONCommand {

	NSNumber* statusCode;
	NSURL* contextIdentifierURL;

}

@property (nonatomic,copy) NSNumber * statusCode; 
@property (nonatomic,copy) NSURL * contextIdentifierURL; 
-(double)minCallbackInterval;
-(id)contextIdentifierURL;
-(id)jsonResponseDictionary;
-(void)setContextIdentifierURL:(id)arg1 ;
-(id)staticClientContext;
-(id)jsonBodyDictionary;
-(id)init;
-(void)run;
-(id)statusCode;
-(void).cxx_destruct;
-(id)result;
-(void)setStatusCode:(id)arg1 ;
-(id)headers;
@end
