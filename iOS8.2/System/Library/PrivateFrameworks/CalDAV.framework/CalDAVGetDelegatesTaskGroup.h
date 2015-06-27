/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:31 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalDAV/CalDAVGetDelegatesBaseTaskGroup.h>

@class NSMutableArray;

@interface CalDAVGetDelegatesTaskGroup : CalDAVGetDelegatesBaseTaskGroup {

	int _state;
	NSMutableArray* _nestedGroupPrincipalURLs;

}

@property (assign,nonatomic) int state;                                              //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSMutableArray * nestedGroupPrincipalURLs;              //@synthesize nestedGroupPrincipalURLs=_nestedGroupPrincipalURLs - In the implementation block
-(void)dealloc;
-(int)state;
-(void)setState:(int)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3 ;
-(void)setNestedGroupPrincipalURLs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)nestedGroupPrincipalURLs;
-(void)_getGroupMembershipForURL:(id)arg1 state:(int)arg2 ;
-(void)_expandProperties;
-(void)_getChildProperties;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)startTaskGroup;
-(void)taskGroup:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)_finishWithError:(id)arg1 state:(int)arg2 ;
@end
