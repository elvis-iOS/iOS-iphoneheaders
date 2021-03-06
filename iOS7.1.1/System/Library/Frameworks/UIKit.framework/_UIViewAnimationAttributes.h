/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@interface _UIViewAnimationAttributes : NSObject <NSSecureCoding> {

	double _duration;
	double _delay;
	unsigned long long _options;
	long long _curve;

}

@property (getter=_duration,nonatomic,readonly) double duration;              //@synthesize duration=_duration - In the implementation block
@property (getter=_delay,nonatomic,readonly) double delay;                    //@synthesize delay=_delay - In the implementation block
@property (getter=_curve,nonatomic,readonly) long long curve;                 //@synthesize curve=_curve - In the implementation block
+(bool)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)_duration;
-(double)_delay;
-(long long)_curve;
-(long long)curve;
@end

