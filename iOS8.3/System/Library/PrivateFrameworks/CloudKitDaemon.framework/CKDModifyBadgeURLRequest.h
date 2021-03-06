/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:05:32 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@interface CKDModifyBadgeURLRequest : CKDURLRequest {

	unsigned _badgeValue;

}

@property (nonatomic,readonly) unsigned badgeValue;              //@synthesize badgeValue=_badgeValue - In the implementation block
-(unsigned)badgeValue;
-(id)requestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)requestOperationClasses;
-(id)initWithBadgeValue:(unsigned)arg1 ;
-(int)operationType;
@end

