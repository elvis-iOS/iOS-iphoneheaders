/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSTextCheckingResult.h>

@class NSString;

@interface NSPhoneNumberCheckingResult : NSTextCheckingResult {

	NSRange _range;
	NSString* _phoneNumber;
	id _underlyingResult;

}

@property (readonly) void* underlyingResult; 
-(id)resultByAdjustingRangesWithOffset:(int)arg1 ;
-(BOOL)_adjustRangesWithOffset:(int)arg1 ;
-(void*)underlyingResult;
-(id)initWithRange:(NSRange)arg1 phoneNumber:(id)arg2 ;
-(id)initWithRange:(NSRange)arg1 phoneNumber:(id)arg2 underlyingResult:(void*)arg3 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSRange)range;
-(id)phoneNumber;
-(unsigned long long)resultType;
@end
