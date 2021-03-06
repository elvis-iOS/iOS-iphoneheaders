/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:10:50 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSString, NSError;

@interface SLGoogleOAuth2TokenResponse : NSObject {

	int _statusCode;
	NSDictionary* _data;
	NSString* _token;
	NSString* _refreshToken;
	NSError* _error;
	NSString* _errorMessage;

}

@property (readonly) int statusCode;                       //@synthesize statusCode=_statusCode - In the implementation block
@property (readonly) NSDictionary * data;                  //@synthesize data=_data - In the implementation block
@property (readonly) NSString * token;                     //@synthesize token=_token - In the implementation block
@property (readonly) NSString * refreshToken;              //@synthesize refreshToken=_refreshToken - In the implementation block
@property (readonly) NSError * error;                      //@synthesize error=_error - In the implementation block
@property (readonly) NSString * errorMessage;              //@synthesize errorMessage=_errorMessage - In the implementation block
-(id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3 ;
-(NSString *)refreshToken;
-(NSDictionary *)data;
-(int)statusCode;
-(NSString *)token;
-(NSError *)error;
-(NSString *)errorMessage;
@end

