/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDKeyedObject.h>
#import <CoreFoundation/NSCopying.h>

@class EDString;

@interface EDContentFormat : NSObject <EDKeyedObject, NSCopying> {

	EDString* mFormatString;
	unsigned long long mFormatId;
	bool mBuiltIn;
	bool mReferenced;

}
+(id)contentFormatWithNSString:(id)arg1 formatId:(unsigned long long)arg2 builtIn:(bool)arg3 ;
+(id)contentFormatWithFormatString:(id)arg1 formatId:(unsigned long long)arg2 ;
+(id)contentFormatWithFormatString:(id)arg1 ;
-(void)setFormatId:(unsigned long long)arg1 ;
-(void)setReferenced:(bool)arg1 ;
-(void)dealloc;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone)arg1 ;
-(long long)key;
-(id)formatString;
-(unsigned long long)formatId;
-(bool)isEqualToContentFormat:(id)arg1 ;
-(bool)builtIn;
-(bool)referenced;
@end
