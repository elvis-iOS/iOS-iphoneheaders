/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AdSheet/ADJavaScriptObject.h>
#import <AdSheet/ADTwitterJSO_Bindings.h>

@class JSValue, NSString, NSArray, NSMutableArray;

@interface ADTwitterJSO : ADJavaScriptObject <ADTwitterJSO_Bindings> {

	NSString* _text;
	NSMutableArray* _tweetImageRecords;
	NSArray* _tweetURLs;

}

@property (nonatomic,retain) NSMutableArray * tweetImageRecords;              //@synthesize tweetImageRecords=_tweetImageRecords - In the implementation block
@property (nonatomic,copy) NSArray * tweetURLs;                               //@synthesize tweetURLs=_tweetURLs - In the implementation block
@property (nonatomic,retain) JSValue * listener; 
@property (nonatomic,copy) NSString * text;                                   //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSArray * images; 
@property (nonatomic,retain) NSArray * URLs; 
+(void)initializeInContext:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 impressionController:(id)arg2 ;
-(void)adWillDismiss;
-(void)presentComposer;
-(void)setTweetURLs:(id)arg1 ;
-(void)setTweetImageRecords:(id)arg1 ;
-(void)followScreenName:(id)arg1 userID:(id)arg2 ;
-(id)tweetImageRecords;
-(id)tweetURLs;
-(void)dealloc;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)images;
-(void)setImages:(id)arg1 ;
-(void)setURLs:(id)arg1 ;
-(id)URLs;
@end

