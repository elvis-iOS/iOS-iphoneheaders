/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:50 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKOperationResult.h>

@class CKCommentCursor;

@interface CKFetchShareCommentsOperationResult : CKOperationResult {

	CKCommentCursor* _cursor;

}

@property (nonatomic,retain) CKCommentCursor * cursor;              //@synthesize cursor=_cursor - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(CKCommentCursor *)cursor;
-(void)setCursor:(CKCommentCursor *)arg1 ;
-(id)CKPropertiesDescription;
@end
