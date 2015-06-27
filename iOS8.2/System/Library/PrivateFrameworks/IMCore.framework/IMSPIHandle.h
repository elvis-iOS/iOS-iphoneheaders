/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:18 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface IMSPIHandle : NSObject {

	NSString* _address;
	NSString* _displayName;
	NSString* _identifier;

}

@property (retain) NSString * address;                  //@synthesize address=_address - In the implementation block
@property (retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (retain) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)address;
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)displayName;
-(void)setAddress:(NSString *)arg1 ;
@end
