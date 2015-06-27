/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:05:17 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSError, NSArray, NSURL, NSString;

@interface CKDMMCSItemGroup : NSObject {

	NSMutableArray* _items;
	char _complete;
	NSError* _error;
	NSArray* _tuple;

}

@property (nonatomic,retain) NSError * error;                       //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSArray * items;                     //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSArray * tuple;                       //@synthesize tuple=_tuple - In the implementation block
@property (nonatomic,readonly) NSURL * contentBaseURL; 
@property (nonatomic,readonly) NSString * owner; 
@property (nonatomic,readonly) NSString * requestor; 
@property (nonatomic,readonly) char useAuthRequests; 
@property (assign,nonatomic) char complete;                         //@synthesize complete=_complete - In the implementation block
+(id)tupleForItem:(id)arg1 ;
-(id)description;
-(NSArray *)items;
-(void)addItem:(id)arg1 ;
-(void)setComplete:(char)arg1 ;
-(char)complete;
-(NSError *)error;
-(NSString *)owner;
-(id)CKPropertiesDescription;
-(char)useAuthRequests;
-(NSURL *)contentBaseURL;
-(NSString *)requestor;
-(id)initWithTuple:(id)arg1 ;
-(NSArray *)tuple;
-(void)setTuple:(NSArray *)arg1 ;
-(void)setError:(NSError *)arg1 ;
@end
