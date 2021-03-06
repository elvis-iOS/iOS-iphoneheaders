/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>
#import <CoreFoundation/NSCopying.h>
#import <EventKit/EKIdentityProtocol.h>

@class NSString, EKCalendar;

@interface EKSharee : EKObject <NSCopying, EKIdentityProtocol>

@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * emailAddress; 
@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSString * lastName; 
@property (nonatomic,copy) NSString * externalID; 
@property (assign,nonatomic) int shareeStatus; 
@property (assign,nonatomic) int shareeAccessLevel; 
@property (nonatomic,readonly) EKCalendar * owner; 
+(id)shareeWithName:(id)arg1 emailAddress:(id)arg2 externalID:(id)arg3 ;
+(id)shareeWithEmailAddress:(id)arg1 name:(id)arg2 ;
-(id)initWithName:(id)arg1 emailAddress:(id)arg2 externalID:(id)arg3 ;
-(id)initWithEmailAddress:(id)arg1 name:(id)arg2 ;
-(int)shareeStatus;
-(void)setShareeStatus:(int)arg1 ;
-(int)shareeAccessLevel;
-(void)setShareeAccessLevel:(int)arg1 ;
-(id)lazyLoadRelationForKey:(id)arg1 ;
-(void*)ABRecordWithAddressBook:(void*)arg1 ;
-(id)_persistentSharee;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setName:(id)arg1 ;
-(id)UUID;
-(id)name;
-(void)setEmailAddress:(id)arg1 ;
-(id)emailAddress;
-(void)setExternalID:(id)arg1 ;
-(id)externalID;
-(id)owner;
-(id)firstName;
-(id)lastName;
-(void)setFirstName:(id)arg1 ;
-(void)setLastName:(id)arg1 ;
@end

