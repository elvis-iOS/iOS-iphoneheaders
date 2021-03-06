/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 2:15:31 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenterClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CommCenterClassic/CommCenterClassic-Structs.h>
@class NSMutableDictionary;

@interface SubscriberTransactionElement : NSObject {

	NSMutableDictionary* _info;
	int _type;

}

@property (nonatomic,retain) NSMutableDictionary * info;              //@synthesize info=_info - In the implementation block
@property (assign,nonatomic) int type;                                //@synthesize type=_type - In the implementation block
-(id)initWithAction:(id)arg1 andIdentifier:(int)arg2 ;
-(id)initWithInfo:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)action;
-(void)setAction:(id)arg1 ;
-(id)identifier;
-(id)info;
-(void)setIdentifier:(int)arg1 ;
-(void)setInfo:(id)arg1 ;
-(void)setPayload:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 ;
@end

