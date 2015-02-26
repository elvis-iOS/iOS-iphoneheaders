/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:41 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoardServices/FBSWorkspace.h>
#import <FrontBoardServices/FBSUIApplicationWorkspaceClientDelegate.h>

@class NSString;

@interface FBSUIApplicationWorkspace : FBSWorkspace <FBSUIApplicationWorkspaceClientDelegate>

@property (assign,nonatomic) id<FBSUIApplicationWorkspaceDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)client:(id)arg1 handleLaunch:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)clientHandleExit:(id)arg1 ;
-(void)clientHandleAssertionExpirationImminent:(id)arg1 ;
-(Class)_clientClass;
-(BOOL)isUIApplicationWorkspace;
@end
