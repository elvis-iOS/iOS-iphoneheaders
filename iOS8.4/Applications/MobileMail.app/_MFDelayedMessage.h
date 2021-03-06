/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:47 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface _MFDelayedMessage : NSObject {

	unsigned _state;
	id _message;
	NSString* _identifier;
	id _context;
	double _submissionDate;

}

@property (nonatomic,retain) id message;                         //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double submissionDate;              //@synthesize submissionDate=_submissionDate - In the implementation block
@property (nonatomic,retain) id context;                         //@synthesize context=_context - In the implementation block
-(double)submissionDate;
-(id)initWithMessage:(id)arg1 identifier:(id)arg2 submissionDate:(double)arg3 context:(id)arg4 ;
-(char)isInvalidated;
-(void)setSubmissionDate:(double)arg1 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(NSString *)identifier;
-(id)context;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setContext:(id)arg1 ;
-(id)message;
-(void)setMessage:(id)arg1 ;
-(void)process;
-(char)isProcessing;
@end

