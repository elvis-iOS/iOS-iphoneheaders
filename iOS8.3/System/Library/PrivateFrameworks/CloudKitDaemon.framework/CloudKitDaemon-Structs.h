/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:05:33 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned storageAvailableBytes : 1;
} SCD_Struct_CK1;

typedef struct {
	unsigned field1[8];
} SCD_Struct_CK2;

typedef struct __CFUserNotification* CFUserNotificationRef;

typedef struct CC_SHA256state_st {
	unsigned count[2];
	unsigned hash[8];
	unsigned wbuf[16];
} CC_SHA256state_st;

typedef struct {
	unsigned badgeCount : 1;
	unsigned forDevice : 1;
} SCD_Struct_CK5;

typedef struct _PCSIdentityData* PCSIdentityDataRef;

typedef struct _PCSIdentitySetData* PCSIdentitySetDataRef;

typedef struct _OpaquePCSShareProtection* OpaquePCSShareProtectionRef;

typedef struct __CFData* CFDataRef;

typedef struct _PCSPublicIdentityData* PCSPublicIdentityDataRef;

typedef struct {
	unsigned doubleValue : 1;
	unsigned signedValue : 1;
	unsigned type : 1;
} SCD_Struct_CK11;

typedef struct z_stream_s {
	char* next_in;
	unsigned avail_in;
	unsigned total_in;
	char* next_out;
	unsigned avail_out;
	unsigned total_out;
	char* msg;
	internal_state state;
	/*function pointer*/void* zalloc;
	/*function pointer*/void* zfree;
	void opaque;
	int data_type;
	unsigned adler;
	unsigned reserved;
} z_stream_s;

typedef struct MGNotificationTokenStruct* MGNotificationTokenStructRef;

typedef struct {
	unsigned applicationConfigVersion : 1;
	unsigned deviceFlowControlBudget : 1;
	unsigned deviceFlowControlBudgetCap : 1;
	unsigned deviceProtocolVersion : 1;
	unsigned globalConfigVersion : 1;
	unsigned applicationContainerEnvironment : 1;
	unsigned deviceFlowControlRegeneration : 1;
	unsigned isolationLevel : 1;
	unsigned targetDatabase : 1;
} SCD_Struct_CK14;

typedef struct {
	unsigned altitude : 1;
	unsigned course : 1;
	unsigned horizontalAccuracy : 1;
	unsigned latitude : 1;
	unsigned longitude : 1;
	unsigned speed : 1;
	unsigned verticalAccuracy : 1;
} SCD_Struct_CK15;

typedef struct __MMCSEngine* MMCSEngineRef;

typedef struct {
	unsigned containerEnvironment : 1;
	unsigned participantState : 1;
	unsigned participantType : 1;
	unsigned permission : 1;
} SCD_Struct_CK17;

typedef struct {
	int list;
	unsigned count;
	unsigned size;
} SCD_Struct_CK18;

typedef struct FPSAPContextOpaque_* FPSAPContextOpaque_Ref;

typedef struct FairPlayHWInfo_ {
	unsigned IDLength;
	unsigned char ID[20];
} FairPlayHWInfo_;

typedef struct sqlite3* sqlite3Ref;

typedef struct cache_s* cache_sRef;

typedef struct {
	unsigned long field1;
	id field2;
	unsigned long field3;
	unsigned long field4[5];
} SCD_Struct_PQ23;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct Mem* MemRef;

typedef union {
	unsigned char inlined[8];
	unsigned char ptr;
} SCD_Union_PQ26;

