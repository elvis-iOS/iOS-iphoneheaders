/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:25 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppSupport/AppSupport-Structs.h>
@interface CPMemoryPoolFile : NSObject {

	opaque_pthread_mutex_t _mutex;
	int _fd;
	char* _slots;
	unsigned long _slotCount;
	unsigned long _slotLength;
	CFBitVectorRef _usedSlots;
	CFAllocatorRef _deallocator;

}
-(void)dealloc;
-(id)initWithLabel:(const char*)arg1 slotCount:(unsigned long)arg2 slotLength:(unsigned long)arg3 ;
-(id)nextSlotWithBytes:(const void*)arg1 length:(unsigned long)arg2 ;
-(void)returnSlot:(void*)arg1 ;
@end

