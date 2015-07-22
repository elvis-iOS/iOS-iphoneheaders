/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:40 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <backupd/backupd-Structs.h>
@interface MBKeyBagFile : NSObject {

	mkbbackuprefRef _handle;

}
+(BOOL)decryptFileWithPath:(id)arg1 keybag:(id)arg2 encryptionKey:(id)arg3 size:(unsigned long long)arg4 error:(id*)arg5 ;
+(id)keybagFileWithPath:(id)arg1 error:(id*)arg2 ;
+(BOOL)validateWrappedKey:(id)arg1 withKeyBag:(id)arg2 forPath:(id)arg3 error:(id*)arg4 ;
+(const char*)keyBagUUIDForEncryptionKey:(id)arg1 ;
-(id)encryptionKeyWithError:(id*)arg1 ;
-(BOOL)validateEncryptionKey:(id)arg1 error:(id*)arg2 ;
-(int)readWithBytes:(void*)arg1 count:(unsigned)arg2 offset:(unsigned long long)arg3 error:(id*)arg4 ;
-(unsigned long long)size;
-(id)initWithHandle:(mkbbackuprefRef)arg1 ;
-(BOOL)closeWithError:(id*)arg1 ;
@end
