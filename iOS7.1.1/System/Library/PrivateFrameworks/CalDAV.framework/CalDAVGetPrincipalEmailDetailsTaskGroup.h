/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVTaskDelegate.h>

@class CalDAVPrincipalEmailDetailsResult, NSURL, NSString, NSSet;

@interface CalDAVGetPrincipalEmailDetailsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {

	CalDAVPrincipalEmailDetailsResult* _principalResult;
	NSURL* _principalURL;

}

@property (retain) NSURL * principalURL;                                             //@synthesize principalURL=_principalURL - In the implementation block
@property (readonly) NSString * displayName; 
@property (readonly) NSSet * addresses; 
@property (retain) CalDAVPrincipalEmailDetailsResult * principalResult;              //@synthesize principalResult=_principalResult - In the implementation block
-(id)addresses;
-(void)dealloc;
-(id)displayName;
-(id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3 ;
-(void)setPrincipalResult:(id)arg1 ;
-(void)_processPropFind:(id)arg1 ;
-(id)principalResult;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)startTaskGroup;
-(void)setPrincipalURL:(id)arg1 ;
-(void)_finishWithError:(id)arg1 ;
-(id)principalURL;
@end
