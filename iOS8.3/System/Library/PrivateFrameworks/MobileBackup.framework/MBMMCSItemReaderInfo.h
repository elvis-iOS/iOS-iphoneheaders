/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:34:41 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MBMMCSItemReaderInfo
@required
-(char)statWithSize:(unsigned long long*)arg1 error:(id*)arg2;
-(char)readWithOffset:(unsigned long long)arg1 buffer:(char*)arg2 bufferLength:(unsigned long long)arg3 bytesRead:(unsigned long long*)arg4 error:(id*)arg5;
-(char)openWithError:(id*)arg1;
-(char)closeWithError:(id*)arg1;

@end

