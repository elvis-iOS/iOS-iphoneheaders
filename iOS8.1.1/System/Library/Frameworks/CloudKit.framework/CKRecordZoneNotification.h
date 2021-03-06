/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:50 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKNotification.h>
#import <CloudKit/NSSecureCoding.h>

@class CKRecordZoneID;

@interface CKRecordZoneNotification : CKNotification <NSSecureCoding> {

	CKRecordZoneID* _recordZoneID;

}

@property (nonatomic,copy) CKRecordZoneID * recordZoneID;              //@synthesize recordZoneID=_recordZoneID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithRemoteNotificationDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)CKPropertiesDescription;
-(void)setRecordZoneID:(CKRecordZoneID *)arg1 ;
-(CKRecordZoneID *)recordZoneID;
@end

