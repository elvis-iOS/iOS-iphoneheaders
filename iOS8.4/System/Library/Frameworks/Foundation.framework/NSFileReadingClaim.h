/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:56 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSFileAccessClaim.h>

@class NSURL, NSFileAccessNode;

@interface NSFileReadingClaim : NSFileAccessClaim {

	NSURL* _url;
	BOOL _urlDidChange;
	unsigned long long _options;
	NSFileAccessNode* _location;
	NSFileAccessNode* _rootNode;
	long long _linkResolutionCount;

}
-(BOOL)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(BOOL)arg2 ;
-(void)forwardUsingMessageSender:(/*^block*/id)arg1 crashHandler:(/*^block*/id)arg2 ;
-(void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2 ;
-(id)initWithClient:(id)arg1 messageParameters:(id)arg2 replySender:(/*^block*/id)arg3 ;
-(void)granted;
-(void)invokeClaimer;
-(BOOL)blocksClaim:(id)arg1 ;
-(void)devalueSelf;
-(BOOL)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)shouldBeRevokedPriorToInvokingAccessor;
-(void)resolveURLThenMaybeContinueInvokingClaimer:(/*^block*/id)arg1 ;
-(id)initWithPurposeID:(id)arg1 url:(id)arg2 options:(unsigned long long)arg3 claimer:(/*^block*/id)arg4 ;
-(void)dealloc;
@end

