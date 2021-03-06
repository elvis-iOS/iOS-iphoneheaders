/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:16 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKOperationInfo.h>

@class CKCommentQuery, CKCommentCursor;

@interface CKFetchShareCommentsOperationInfo : CKOperationInfo {

	CKCommentQuery* _query;
	CKCommentCursor* _cursor;
	unsigned _resultsLimit;

}

@property (nonatomic,retain) CKCommentQuery * query;                //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) CKCommentCursor * cursor;              //@synthesize cursor=_cursor - In the implementation block
@property (assign,nonatomic) unsigned resultsLimit;                 //@synthesize resultsLimit=_resultsLimit - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CKCommentQuery *)query;
-(void)setQuery:(CKCommentQuery *)arg1 ;
-(CKCommentCursor *)cursor;
-(void)setCursor:(CKCommentCursor *)arg1 ;
-(void)setResultsLimit:(unsigned)arg1 ;
-(unsigned)resultsLimit;
@end

