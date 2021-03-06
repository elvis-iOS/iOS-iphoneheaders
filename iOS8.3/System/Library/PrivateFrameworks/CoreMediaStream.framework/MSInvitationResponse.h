/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:11:20 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MSShare;

@interface MSInvitationResponse : NSObject {

	MSShare* _invitation;
	char _accept;

}

@property (nonatomic,retain) MSShare * invitation;              //@synthesize invitation=_invitation - In the implementation block
@property (assign,nonatomic) char accept;                       //@synthesize accept=_accept - In the implementation block
+(id)responseWithInvitation:(id)arg1 accept:(char)arg2 ;
-(id)initWithInvitation:(id)arg1 accept:(char)arg2 ;
-(MSShare *)invitation;
-(void)setInvitation:(MSShare *)arg1 ;
-(char)accept;
-(void)setAccept:(char)arg1 ;
@end

