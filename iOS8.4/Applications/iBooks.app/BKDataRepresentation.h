/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:29 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iBooks/iBooks-Structs.h>
@interface BKDataRepresentation : NSObject {

	char mHasHash;
	unsigned mHash;

}
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(int)compare:(id)arg1 ;
-(id)inputStream;
-(unsigned)uint32Hash;
-(id)bufferedInputStreamWithBufferSize:(unsigned long)arg1 ;
-(CGDataProviderRef)cgDataProvider;
-(unsigned long)readIntoData:(id)arg1 ;
-(char)hasSameLocationAs:(id)arg1 ;
-(char)isReadable;
-(id)bufferedInputStream;
-(long long)encodedLength;
-(char)isEncrypted;
-(long long)dataLength;
@end

