/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:03 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSURL;


@protocol PRSBaseResult <NSObject,NSCopying>
@property (nonatomic,retain) NSString * type; 
@property (nonatomic,retain) NSString * resultIdentifier; 
@property (assign,nonatomic) int media_kind; 
@property (assign,nonatomic) long long adam_id; 
@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) float resultScore; 
@property (nonatomic,retain) NSString * fbr; 
@property (nonatomic,retain) NSURL * resultURL; 
@property (assign,nonatomic) int max_age; 
@property (nonatomic,retain) NSString * bundle_id; 
@property (nonatomic,retain) id<PRSApp> app; 
@property (nonatomic,retain) NSString * templateName; 
@optional
-(void)setType:(id)arg1;
-(NSString *)type;
-(id<PRSApp>)app;
-(int)media_kind;
-(void)setMedia_kind:(int)arg1;
-(long long)adam_id;
-(void)setAdam_id:(long long)arg1;
-(NSURL *)resultURL;
-(void)setResultURL:(id)arg1;
-(int)max_age;
-(void)setMax_age:(int)arg1;
-(NSString *)bundle_id;
-(void)setBundle_id:(id)arg1;
-(void)setApp:(id)arg1;

@required
-(void)setTitle:(id)arg1;
-(NSString *)title;
-(NSString *)resultIdentifier;
-(NSString *)fbr;
-(void)setFbr:(id)arg1;
-(void)setResultIdentifier:(id)arg1;
-(float)resultScore;
-(void)setResultScore:(float)arg1;
-(NSString *)templateName;
-(void)setTemplateName:(id)arg1;

@end
