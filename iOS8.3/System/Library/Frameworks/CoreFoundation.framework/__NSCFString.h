/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:41:51 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <Foundation/NSMutableString.h>

@interface __NSCFString : NSMutableString
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(char)isNSString__;
-(void)insertString:(id)arg1 atIndex:(unsigned)arg2 ;
-(const char*)cString;
-(const char*)_fastCStringContents:(char)arg1 ;
-(unsigned)cStringLength;
-(const unsigned short*)_fastCharacterContents;
-(id)_newSubstringWithRange:(NSRange)arg1 zone:(NSZone*)arg2 ;
-(void)getLineStart:(unsigned*)arg1 end:(unsigned*)arg2 contentsEnd:(unsigned*)arg3 forRange:(NSRange)arg4 ;
-(unsigned)fastestEncoding;
-(unsigned)smallestEncoding;
-(char)_isCString;
-(void)appendCharacters:(const unsigned short*)arg1 length:(unsigned)arg2 ;
-(id)retain;
-(const char*)UTF8String;
-(char)isEqualToString:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)retainCount;
-(unsigned)hash;
-(char)hasPrefix:(id)arg1 ;
-(unsigned)length;
-(const char*)cStringUsingEncoding:(unsigned)arg1 ;
-(void)appendString:(id)arg1 ;
-(void)appendFormat:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)hasSuffix:(id)arg1 ;
-(Class)classForCoder;
-(id)substringWithRange:(NSRange)arg1 ;
-(char)_tryRetain;
-(char)_isDeallocating;
-(void)deleteCharactersInRange:(NSRange)arg1 ;
-(unsigned short)characterAtIndex:(unsigned)arg1 ;
-(unsigned)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned)arg3 range:(NSRange)arg4 ;
-(char)getCString:(char*)arg1 maxLength:(unsigned)arg2 encoding:(unsigned)arg3 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)setString:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(oneway void)release;
-(void)finalize;
@end
