/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface WFCategoryJudgement : NSObject {

	float score;
	long long category;

}
+(id)categoryJudgementWithCategory:(long long)arg1 score:(float)arg2 ;
-(float)score;
-(id)description;
-(void)setCategory:(long long)arg1 ;
-(long long)category;
-(void)setScore:(float)arg1 ;
-(long long)compareByCategory:(id)arg1 ;
-(long long)compareByScore:(id)arg1 ;
@end

