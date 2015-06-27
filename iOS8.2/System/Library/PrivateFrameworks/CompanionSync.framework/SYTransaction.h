/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:47 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CompanionSync/SYChangeTracking.h>

@class NSDictionary, SYStore, NSMutableArray, NSString;

@interface SYTransaction : NSObject <SYChangeTracking> {

	NSDictionary* _contextInfo;
	NSDictionary* _idsOptions;
	/*^block*/id _completion;
	SYStore* _store;
	NSMutableArray* _changes;

}

@property (nonatomic,copy) NSDictionary * contextInfo;              //@synthesize contextInfo=_contextInfo - In the implementation block
@property (nonatomic,copy) NSDictionary * idsOptions;               //@synthesize idsOptions=_idsOptions - In the implementation block
@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) SYStore * store;                       //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSMutableArray * changes;              //@synthesize changes=_changes - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStore:(id)arg1 ;
-(SYStore *)store;
-(void)setStore:(SYStore *)arg1 ;
-(void)addObject:(id)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)commit;
-(NSDictionary *)contextInfo;
-(void)setContextInfo:(NSDictionary *)arg1 ;
-(NSMutableArray *)changes;
-(void)updateObject:(id)arg1 ;
-(void)setChanges:(NSMutableArray *)arg1 ;
-(void)setIdsOptions:(NSDictionary *)arg1 ;
-(void)commitBlocking:(char)arg1 reportError:(/*^block*/id)arg2 ;
-(void)addObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 ;
-(void)updateObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 ;
-(void)deleteObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 ;
-(void)addObject:(id)arg1 context:(id)arg2 ;
-(void)updateObject:(id)arg1 context:(id)arg2 ;
-(void)deleteObject:(id)arg1 context:(id)arg2 ;
-(void)addObject:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateObject:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteObject:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSDictionary *)idsOptions;
-(void)deleteObject:(id)arg1 ;
-(void)rollback;
@end
