/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:47 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EKDirectoryLocation;

@interface EKUIConferenceRoom : NSObject {

	BOOL _supportsAvailability;
	BOOL _availabilityRequestInProgress;
	EKDirectoryLocation* _location;
	long long _availability;

}

@property (nonatomic,retain) EKDirectoryLocation * location;                  //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL supportsAvailability;                       //@synthesize supportsAvailability=_supportsAvailability - In the implementation block
@property (assign,nonatomic) BOOL availabilityRequestInProgress;              //@synthesize availabilityRequestInProgress=_availabilityRequestInProgress - In the implementation block
@property (assign,nonatomic) long long availability;                          //@synthesize availability=_availability - In the implementation block
-(void)setAvailability:(long long)arg1 ;
-(long long)availability;
-(BOOL)availabilityRequestInProgress;
-(void)setAvailabilityRequestInProgress:(BOOL)arg1 ;
-(void)setSupportsAvailability:(BOOL)arg1 ;
-(BOOL)supportsAvailability;
-(id)init;
-(EKDirectoryLocation *)location;
-(void)setLocation:(EKDirectoryLocation *)arg1 ;
@end
