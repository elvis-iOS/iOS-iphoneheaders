/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <YouTube/YTXMLHTTPRequest.h>

@class NSMutableArray, NSMutableString, YTVideo;

@interface YTCommentsRequest : YTXMLHTTPRequest {

	id _delegate;
	NSMutableArray* _comments;
	unsigned _startIndex;
	unsigned _totalResults;
	NSMutableString* _moreCommentsURLString;
	YTVideo* _video;

}
+(unsigned)commentsPerRequest;
-(int)parseData:(id)arg1 ;
-(void)dealloc;
-(void)failWithError:(id)arg1 ;
-(void)didParseData;
-(void)_requestCommentsFromURL:(id)arg1 ;
-(void)didAuthenticate:(id)arg1 ;
-(void)requestMoreComments;
-(id)initRequestingCommentsForVideo:(id)arg1 withDelegate:(id)arg2 ;
@end

