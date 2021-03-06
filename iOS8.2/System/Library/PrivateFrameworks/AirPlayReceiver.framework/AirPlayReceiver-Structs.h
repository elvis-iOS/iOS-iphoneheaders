/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:24 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSObject<OS_dispatch_source>;

typedef struct CGImage* CGImageRef;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct AirPlayReceiverUIPrivate* AirPlayReceiverUIPrivateRef;

typedef struct {
	unsigned char flags;
	unsigned char config;
	unsigned char ipv4[4];
} SCD_Struct_Ai3;

typedef struct __SCDynamicStore* SCDynamicStoreRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct AudioStreamBasicDescription {
	double mSampleRate;
	unsigned mFormatID;
	unsigned mFormatFlags;
	unsigned mBytesPerPacket;
	unsigned mFramesPerPacket;
	unsigned mBytesPerFrame;
	unsigned mChannelsPerFrame;
	unsigned mBitsPerChannel;
	unsigned mReserved;
} AudioStreamBasicDescription;

typedef struct {
	unsigned type;
	unsigned long long format;
	unsigned char input;
	unsigned char loopback;
	unsigned char varispeed;
	unsigned char voice;
	unsigned char volumeControl;
	unsigned activeType;
	AirPlayReceiverSessionPrivate session;
	AudioStreamBasicDescription asbd;
	OpaqueAUGraph graph;
	int converterNode;
	OpaqueAudioComponentInstance converterUnit;
	int mixerNode;
	OpaqueAudioComponentInstance mixerUnit;
	int varispeedNode;
	OpaqueAudioComponentInstance varispeedUnit;
	int outputNode;
	OpaqueAudioComponentInstance outputUnit;
	unsigned char outputStarted;
	float outputVolume;
	OpaqueAudioComponentInstance inputUnit;
	char* inputBuffer;
	unsigned inputMaxLen;
	unsigned char inputStarted;
	NSObject<OS_dispatch_source>* ducker;
} SCD_Struct_Ai7;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct __IOHIDDevice* IOHIDDeviceRef;

typedef struct __CFString* CFStringRef;

typedef struct __CTFont* CTFontRef;

typedef struct CGColor* CGColorRef;

typedef struct CGContext* CGContextRef;

typedef struct __CFArray* CFArrayRef;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

