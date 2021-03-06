/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:33 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class GEOABExperimentResponse;


@protocol GEOExperimentServerProxy <NSObject>
@property (assign,nonatomic) id<GEOExperimentServerProxyDelegate> delegate; 
@property (nonatomic,readonly) GEOABExperimentResponse * experimentsInfo; 
@required
-(void)setDelegate:(id)arg1;
-(id<GEOExperimentServerProxyDelegate>)delegate;
-(void)forceUpdate;
-(void)_debug_setQuerySubstring:(id)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3;
-(GEOABExperimentResponse *)experimentsInfo;
-(id)initWithDelegate:(id)arg1;

@end

