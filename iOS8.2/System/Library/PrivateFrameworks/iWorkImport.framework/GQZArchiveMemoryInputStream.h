/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:01 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/GQZArchiveInputStream.h>

@class NSData, NSString;

@interface GQZArchiveMemoryInputStream : NSObject <GQZArchiveInputStream> {

	NSData* mData;
	const char* mBytes;
	long long mSize;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(const char*)dataAtOffset:(long long)arg1 size:(unsigned long)arg2 end:(long long)arg3 readSize:(unsigned*)arg4 ;
-(void)readFromOffset:(long long)arg1 size:(unsigned long)arg2 buffer:(char*)arg3 ;
-(void)dealloc;
-(long long)size;
-(id)initWithData:(id)arg1 ;
@end

