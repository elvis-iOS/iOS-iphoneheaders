/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:07 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUIServices/BSXPCCoding.h>

@class UIScreen, NSString;

@interface SBUISnapshotContext : NSObject <BSXPCCoding> {

	UIScreen* _screen;
	char _excludesNotificationCenter;

}

@property (nonatomic,retain) UIScreen * screen;                            //@synthesize screen=_screen - In the implementation block
@property (assign,nonatomic) char excludesNotificationCenter;              //@synthesize excludesNotificationCenter=_excludesNotificationCenter - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)snapshotContextForScreen:(id)arg1 ;
-(id)initWithScreen:(id)arg1 ;
-(void)dealloc;
-(UIScreen *)screen;
-(void)setScreen:(UIScreen *)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)setExcludesNotificationCenter:(char)arg1 ;
-(char)excludesNotificationCenter;
@end

