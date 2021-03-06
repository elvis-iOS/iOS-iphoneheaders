/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:27 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Ubiquity.framework/Versions/A/Support/ubd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSMutableSet;

@interface UBConnectionPool : NSObject {

	NSURL* _endpoint;
	NSMutableSet* _connections;
	char _allowCellular;
	double _httpTimeout;

}

@property (assign) char allowCellular;              //@synthesize allowCellular=_allowCellular - In the implementation block
@property (assign) double HTTPTimeout;              //@synthesize httpTimeout=_httpTimeout - In the implementation block
@property (copy) NSURL * endpoint;                  //@synthesize endpoint=_endpoint - In the implementation block
-(void)setAllowCellular:(char)arg1 ;
-(void)setHTTPTimeout:(double)arg1 ;
-(void)loadRelativeURL:(id)arg1 asynchronously:(char)arg2 data:(id)arg3 headers:(id)arg4 dataHandler:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(char)allowCellular;
-(int)optionsForURLConnection;
-(double)HTTPTimeout;
-(void)cancelAllConnections;
-(void)removeConnection:(id)arg1 ;
-(char)addConnection:(id)arg1 ;
-(id)initWithEndpoint:(id)arg1 ;
-(void)dealloc;
-(NSURL *)endpoint;
-(void)setEndpoint:(NSURL *)arg1 ;
@end

