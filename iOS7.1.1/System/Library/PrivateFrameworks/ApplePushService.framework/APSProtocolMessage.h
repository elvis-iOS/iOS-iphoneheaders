/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 3:34:43 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/apsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableData;

@interface APSProtocolMessage : NSObject {

	int _command;
	NSMutableData* _data;

}
-(void)_appendOneByte:(unsigned char)arg1 ;
-(void)_appendTwoBytes:(unsigned short)arg1 ;
-(void)appendItem:(unsigned char)arg1 data:(id)arg2 ;
-(void)_appendFourBytes:(unsigned)arg1 ;
-(id)initWithCommand:(int)arg1 ;
-(void)appendItem:(unsigned char)arg1 string:(id)arg2 ;
-(void)appendOneByteItem:(unsigned char)arg1 byte:(unsigned char)arg2 ;
-(void)appendTwoByteItem:(unsigned char)arg1 bytes:(unsigned short)arg2 ;
-(void)appendFourByteItem:(unsigned char)arg1 bytes:(unsigned)arg2 ;
-(id)copyMessageData;
-(void)dealloc;
@end

