/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:32 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CALayer, NSString, NSArray;

@interface TSCHMultiDataLayerAnimationValues : NSObject {

	CALayer* mLayer;
	NSString* mKey;
	NSArray* mValues;
	NSArray* mKeyTimes;
	BOOL mNeedPresentationLayerValues;

}

@property (nonatomic,readonly) CALayer * layer; 
@property (nonatomic,readonly) NSString * key; 
@property (nonatomic,readonly) NSArray * values; 
@property (nonatomic,readonly) NSArray * keyTimes; 
@property (nonatomic,readonly) BOOL needPresentationLayerValues; 
+(id)animationValuesWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4 needPresentationLayerValues:(BOOL)arg5 ;
+(id)animationValuesWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4 ;
+(id)animationValuesWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3 ;
-(BOOL)needPresentationLayerValues;
-(id)initWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4 needPresentationLayerValues:(BOOL)arg5 ;
-(void)dealloc;
-(CALayer *)layer;
-(id)description;
-(NSArray *)values;
-(NSArray *)keyTimes;
-(NSString *)key;
@end

