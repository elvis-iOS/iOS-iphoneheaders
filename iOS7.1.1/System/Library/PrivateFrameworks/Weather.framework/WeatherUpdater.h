/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <Weather/WeatherXMLHTTPRequest.h>

@protocol WeatherUpdaterDelegate;
@class NSMutableArray;

@interface WeatherUpdater : WeatherXMLHTTPRequest {

	NSMutableArray* _updatingCities;
	NSMutableArray* _pendingCities;
	<WeatherUpdaterDelegate>* _delegate;
	/*^block*/ id _weatherCompletionUpdaterHandler;

}

@property (nonatomic,copy) id weatherCompletionUpdaterHandler;              //@synthesize weatherCompletionUpdaterHandler=_weatherCompletionUpdaterHandler - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)failWithError:(id)arg1 ;
-(bool)isUpdatingCity:(id)arg1 ;
-(id)aggregateDictionaryDomain;
-(void)processDocument:(xmlDoc*)arg1 ;
-(void)didProcessDocument;
-(void)runAndClearWeatherCompletionWithDetail:(unsigned long long)arg1 ;
-(void)handleCompletionForCity:(id)arg1 withUpdateDetail:(unsigned long long)arg2 ;
-(void)failCity:(id)arg1 ;
-(void)_failed:(unsigned long long)arg1 ;
-(void)handleNilCity;
-(bool)isDataValid:(id)arg1 ;
-(void)parsedResultCity:(id)arg1 ;
-(/*^block*/ id)weatherCompletionUpdaterHandler;
-(void)_updateNextPendingCity;
-(void)addUpdatingCity:(id)arg1 ;
-(void)removeAllUpdatingCities;
-(void)addCityToPendingQueue:(id)arg1 ;
-(void)loadRequestURL:(id)arg1 parameters:(id)arg2 ;
-(void)setWeatherCompletionUpdaterHandler:(/*^block*/ id)arg1 ;
@end

