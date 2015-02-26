/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSSecureCoding.h>

@interface CMAttitude : NSObject <NSCopying, NSSecureCoding> {

	id _internal;

}

@property (nonatomic,readonly) double roll; 
@property (nonatomic,readonly) double pitch; 
@property (nonatomic,readonly) double yaw; 
@property (nonatomic,readonly) SCD_Struct_CM12 rotationMatrix; 
@property (nonatomic,readonly) SCD_Struct_CM11 quaternion; 
+(BOOL)supportsSecureCoding;
-(_GLKQuaternion)GLKQuaternion;
-(void)setQuaternion:(SCD_Struct_CM11)arg1 ;
-(id)initWithQuaternion:(SCD_Struct_CM11)arg1 ;
-(SCD_Struct_CM12)rotationMatrix;
-(void)multiplyByInverseOfAttitude:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(SCD_Struct_CM11)quaternion;
-(double)pitch;
-(double)yaw;
-(double)roll;
@end
