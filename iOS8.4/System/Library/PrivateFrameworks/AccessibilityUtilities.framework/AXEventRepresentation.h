/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <AccessibilityUtilities/NSSecureCoding.h>
#import <AccessibilityUtilities/NSCopying.h>

@class AXEventHandInfoRepresentation, AXEventKeyInfoRepresentation, NSString, NSData;

@interface AXEventRepresentation : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isBuiltIn;
	BOOL _isGeneratedEvent;
	unsigned _type;
	int _subtype;
	int _flags;
	unsigned _taskPort;
	int _pid;
	unsigned _contextId;
	unsigned long long _time;
	unsigned long long _senderID;
	AXEventHandInfoRepresentation* _handInfo;
	AXEventKeyInfoRepresentation* _keyInfo;
	NSString* _clientId;
	unsigned long long _HIDTime;
	NSData* _HIDAttributeData;
	unsigned long long _additionalFlags;
	void* _window;
	NSData* _data;
	CGPoint _location;
	CGPoint _windowLocation;

}

@property (assign,nonatomic) unsigned type;                                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int subtype;                                           //@synthesize subtype=_subtype - In the implementation block
@property (assign,nonatomic) CGPoint location;                                      //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) CGPoint windowLocation;                                //@synthesize windowLocation=_windowLocation - In the implementation block
@property (assign,nonatomic) unsigned long long time;                               //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) int flags;                                             //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) unsigned long long senderID;                           //@synthesize senderID=_senderID - In the implementation block
@property (nonatomic,retain) AXEventHandInfoRepresentation * handInfo;              //@synthesize handInfo=_handInfo - In the implementation block
@property (nonatomic,retain) AXEventKeyInfoRepresentation * keyInfo;                //@synthesize keyInfo=_keyInfo - In the implementation block
@property (nonatomic,retain) NSString * clientId;                                   //@synthesize clientId=_clientId - In the implementation block
@property (assign,nonatomic) unsigned taskPort;                                     //@synthesize taskPort=_taskPort - In the implementation block
@property (assign,nonatomic) int pid;                                               //@synthesize pid=_pid - In the implementation block
@property (assign,nonatomic) unsigned long long HIDTime;                            //@synthesize HIDTime=_HIDTime - In the implementation block
@property (nonatomic,retain) NSData * HIDAttributeData;                             //@synthesize HIDAttributeData=_HIDAttributeData - In the implementation block
@property (assign,nonatomic) unsigned long long additionalFlags;                    //@synthesize additionalFlags=_additionalFlags - In the implementation block
@property (assign,nonatomic) unsigned contextId;                                    //@synthesize contextId=_contextId - In the implementation block
@property (assign,nonatomic) BOOL isBuiltIn;                                        //@synthesize isBuiltIn=_isBuiltIn - In the implementation block
@property (assign,nonatomic) BOOL isGeneratedEvent;                                 //@synthesize isGeneratedEvent=_isGeneratedEvent - In the implementation block
@property (assign,nonatomic) void* window;                                          //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) NSData * data;                                         //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)representationWithHIDEvent:(IOHIDEventRef)arg1 hidStreamIdentifier:(id)arg2 ;
+(id)representationWithEventRecord:(SCD_Struct_AX3*)arg1 ;
+(id)representationWithType:(unsigned)arg1 subtype:(int)arg2 time:(unsigned long long)arg3 location:(CGPoint)arg4 windowLocation:(CGPoint)arg5 handInfo:(id)arg6 ;
+(id)_digitizerRepresentation:(IOHIDEventRef)arg1 hidStreamIdentifier:(id)arg2 ;
+(id)_keyboardButtonEvent:(IOHIDEventRef)arg1 ;
+(id)representationWithData:(id)arg1 ;
+(id)representationWithLocation:(CGPoint)arg1 windowLocation:(CGPoint)arg2 handInfo:(id)arg3 ;
+(id)keyRepresentationWithType:(unsigned)arg1 ;
+(id)buttonRepresentationWithType:(unsigned)arg1 ;
+(id)touchRepresentationWithHandType:(unsigned)arg1 location:(CGPoint)arg2 ;
-(IOHIDEventRef)newHIDEventRef;
-(AXEventKeyInfoRepresentation *)keyInfo;
-(void)setFlags:(int)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void*)window;
-(id)description;
-(void)setWindow:(void*)arg1 ;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(int)subtype;
-(unsigned)contextId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setSubtype:(int)arg1 ;
-(void)setTime:(unsigned long long)arg1 ;
-(unsigned long long)time;
-(CGPoint)location;
-(void)setContextId:(unsigned)arg1 ;
-(SCD_Struct_AX3*)newEventRecord;
-(unsigned)taskPort;
-(void)setTaskPort:(unsigned)arg1 ;
-(AXEventHandInfoRepresentation *)handInfo;
-(void)setWindowLocation:(CGPoint)arg1 ;
-(void)setHandInfo:(AXEventHandInfoRepresentation *)arg1 ;
-(void)setIsGeneratedEvent:(BOOL)arg1 ;
-(void)setSenderID:(unsigned long long)arg1 ;
-(void)setKeyInfo:(AXEventKeyInfoRepresentation *)arg1 ;
-(void)setHIDAttributeData:(NSData *)arg1 ;
-(void)setIsBuiltIn:(BOOL)arg1 ;
-(void)setHIDTime:(unsigned long long)arg1 ;
-(unsigned long long)HIDTime;
-(IOHIDEventRef)_newHandHIDEventRef;
-(IOHIDEventRef)_newButtonHIDEventRef;
-(IOHIDEventRef)_newKeyboardHIDEventRef;
-(BOOL)isBuiltIn;
-(NSData *)HIDAttributeData;
-(unsigned long long)senderID;
-(unsigned long long)additionalFlags;
-(BOOL)isGeneratedEvent;
-(CGPoint)windowLocation;
-(void)setAdditionalFlags:(unsigned long long)arg1 ;
-(unsigned)_contextIDFromHIDEvent:(IOHIDEventRef)arg1 ;
-(id)normalizedEventRepresentation:(BOOL)arg1 scale:(BOOL)arg2 ;
-(id)fakeTouchScaleEventRepresentation:(BOOL)arg1 ;
-(id)denormalizedEventRepresentation:(BOOL)arg1 descale:(BOOL)arg2 ;
-(GSEventRef)newGSEventRef;
-(unsigned)firstPathContextId;
-(int)pid;
-(int)flags;
-(void)setPid:(int)arg1 ;
-(void)setLocation:(CGPoint)arg1 ;
-(id)dataRepresentation;
-(void)setClientId:(NSString *)arg1 ;
-(NSString *)clientId;
@end

