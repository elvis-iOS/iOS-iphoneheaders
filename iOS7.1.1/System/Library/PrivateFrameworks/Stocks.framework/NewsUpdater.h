/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Stocks/XMLHTTPRequest.h>

@protocol NewsUpdaterDelegate;
@class StockNewsItemCollection, Stock, NewsParserData;

@interface NewsUpdater : XMLHTTPRequest {

	<NewsUpdaterDelegate>* _delegate;
	bool _firstLoad;
	double _lastResponseTimestamp;
	StockNewsItemCollection* _lastNewsItemCollection;
	Stock* _stock;
	NewsParserData* _newsParserData;
	/*^block*/ id _updateCompletionHandler;

}

@property (assign,nonatomic,__weak) <NewsUpdaterDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_newsItemCollectionCache;
+(id)sharedNewsUpdater;
-(int)parseData:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)cancel;
-(void).cxx_destruct;
-(void)failWithError:(id)arg1 ;
-(void)didParseData;
-(void)clearNewsCacheOnDisk;
-(bool)fetchNewsForStock:(id)arg1 ;
-(bool)shouldReloadOnResume;
-(void)loadNewsCacheFromDiskForSymbol:(id)arg1 ;
-(void)saveLastResponse;
-(void)fetchNewsForStock:(id)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(void)resetLocale;
-(id)aggregateDictionaryDomain;
@end
