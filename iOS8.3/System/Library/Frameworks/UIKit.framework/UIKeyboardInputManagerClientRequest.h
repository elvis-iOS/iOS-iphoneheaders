/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:18:11 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSInvocation;

@interface UIKeyboardInputManagerClientRequest : NSObject {

	NSInvocation* _invocation;
	unsigned _errorCount;

}

@property (nonatomic,readonly) NSInvocation * invocation; 
@property (assign,nonatomic) unsigned errorCount;                      //@synthesize errorCount=_errorCount - In the implementation block
+(id)untargetedInvocationWithInvocation:(id)arg1 withCompletion:(char)arg2 ;
-(void)dealloc;
-(NSInvocation *)invocation;
-(id)initWithInvocation:(id)arg1 ;
-(unsigned)errorCount;
-(void)setErrorCount:(unsigned)arg1 ;
@end

