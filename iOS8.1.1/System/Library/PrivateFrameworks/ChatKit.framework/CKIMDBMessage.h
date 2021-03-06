/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:54 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/CKDBMessage.h>

@class NSString;

@interface CKIMDBMessage : CKDBMessage {

	int _personID;
	NSString* _personName;

}

@property (nonatomic,retain) NSString * personName;              //@synthesize personName=_personName - In the implementation block
@property (assign,nonatomic) int personID;                       //@synthesize personID=_personID - In the implementation block
-(void)dealloc;
-(NSString *)personName;
-(id)initWithRecordID:(long long)arg1 ;
-(void)resetIMPerson;
-(void)setPersonName:(NSString *)arg1 ;
-(void)markAsRead;
-(int)personID;
-(void)setPersonID:(int)arg1 ;
@end

