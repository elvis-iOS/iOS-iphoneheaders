/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:49 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol EAAccessoryDelegate;
@class NSString, NSDictionary, NSMutableArray, NSArray;

@interface EAAccessoryInternal : NSObject {

	BOOL _connected;
	unsigned _connectionID;
	NSString* _name;
	NSString* _manufacturer;
	NSString* _modelNumber;
	NSString* _serialNumber;
	NSString* _firmwareRevision;
	NSString* _hardwareRevision;
	NSString* _macAddress;
	NSString* _preferredApp;
	int _classType;
	NSDictionary* _audioPorts;
	unsigned _capabilities;
	BOOL _notPresentInIAPAccessoriesArray;
	NSMutableArray* _sessionsList;
	NSArray* _eqNames;
	int _locationSentenceTypesMask;
	NSDictionary* _vehicleInfoSupportedTypes;
	NSDictionary* _vehicleInfoInitialData;
	NSDictionary* _protocols;
	id<EAAccessoryDelegate> _delegate;
	BOOL _pointOfInterestHandoffEnabled;
	BOOL _hasIPConnection;
	BOOL _isAvailableOverBonjour;
	unsigned _eqIndex;
	unsigned long long _pointOfInterestDataFormatMaximumSupportedVersion;
	NSString* _bonjourName;

}

@property (assign,nonatomic) BOOL connected;                                                         //@synthesize connected=_connected - In the implementation block
@property (assign,nonatomic) unsigned connectionID;                                                  //@synthesize connectionID=_connectionID - In the implementation block
@property (nonatomic,copy) NSString * manufacturer;                                                  //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,copy) NSString * name;                                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * modelNumber;                                                   //@synthesize modelNumber=_modelNumber - In the implementation block
@property (nonatomic,copy) NSString * serialNumber;                                                  //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,copy) NSString * firmwareRevision;                                              //@synthesize firmwareRevision=_firmwareRevision - In the implementation block
@property (nonatomic,copy) NSString * hardwareRevision;                                              //@synthesize hardwareRevision=_hardwareRevision - In the implementation block
@property (nonatomic,copy) NSString * macAddress;                                                    //@synthesize macAddress=_macAddress - In the implementation block
@property (nonatomic,copy) NSString * preferredApp;                                                  //@synthesize preferredApp=_preferredApp - In the implementation block
@property (assign,nonatomic) int classType;                                                          //@synthesize classType=_classType - In the implementation block
@property (nonatomic,retain) NSDictionary * audioPorts;                                              //@synthesize audioPorts=_audioPorts - In the implementation block
@property (assign,nonatomic) unsigned capabilities;                                                  //@synthesize capabilities=_capabilities - In the implementation block
@property (assign,nonatomic) BOOL notPresentInIAPAccessoriesArray;                                   //@synthesize notPresentInIAPAccessoriesArray=_notPresentInIAPAccessoriesArray - In the implementation block
@property (nonatomic,readonly) NSArray * sessionsList; 
@property (nonatomic,retain) NSArray * eqNames;                                                      //@synthesize eqNames=_eqNames - In the implementation block
@property (assign,nonatomic) unsigned eqIndex;                                                       //@synthesize eqIndex=_eqIndex - In the implementation block
@property (assign,nonatomic) int locationSentenceTypesMask;                                          //@synthesize locationSentenceTypesMask=_locationSentenceTypesMask - In the implementation block
@property (nonatomic,retain) NSDictionary * vehicleInfoSupportedTypes;                               //@synthesize vehicleInfoSupportedTypes=_vehicleInfoSupportedTypes - In the implementation block
@property (nonatomic,retain) NSDictionary * vehicleInfoInitialData;                                  //@synthesize vehicleInfoInitialData=_vehicleInfoInitialData - In the implementation block
@property (nonatomic,retain) NSDictionary * protocols;                                               //@synthesize protocols=_protocols - In the implementation block
@property (assign,nonatomic) id<EAAccessoryDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * bonjourName;                                                   //@synthesize bonjourName=_bonjourName - In the implementation block
@property (assign,nonatomic) BOOL hasIPConnection;                                                   //@synthesize hasIPConnection=_hasIPConnection - In the implementation block
@property (assign,nonatomic) BOOL isAvailableOverBonjour;                                            //@synthesize isAvailableOverBonjour=_isAvailableOverBonjour - In the implementation block
@property (assign) BOOL pointOfInterestHandoffEnabled;                                               //@synthesize pointOfInterestHandoffEnabled=_pointOfInterestHandoffEnabled - In the implementation block
@property (assign) unsigned long long pointOfInterestDataFormatMaximumSupportedVersion;              //@synthesize pointOfInterestDataFormatMaximumSupportedVersion=_pointOfInterestDataFormatMaximumSupportedVersion - In the implementation block
-(void)setConnectionID:(unsigned)arg1 ;
-(void)setModelNumber:(NSString *)arg1 ;
-(void)setFirmwareRevision:(NSString *)arg1 ;
-(void)setHardwareRevision:(NSString *)arg1 ;
-(void)setProtocols:(NSDictionary *)arg1 ;
-(void)setPreferredApp:(NSString *)arg1 ;
-(void)setClassType:(int)arg1 ;
-(void)setEqNames:(NSArray *)arg1 ;
-(void)setEqIndex:(unsigned)arg1 ;
-(void)setLocationSentenceTypesMask:(int)arg1 ;
-(void)setVehicleInfoSupportedTypes:(NSDictionary *)arg1 ;
-(void)setVehicleInfoInitialData:(NSDictionary *)arg1 ;
-(void)setAudioPorts:(NSDictionary *)arg1 ;
-(void)setPointOfInterestDataFormatMaximumSupportedVersion:(unsigned long long)arg1 ;
-(void)setPointOfInterestHandoffEnabled:(BOOL)arg1 ;
-(NSString *)firmwareRevision;
-(NSString *)hardwareRevision;
-(NSDictionary *)protocols;
-(void)setNotPresentInIAPAccessoriesArray:(BOOL)arg1 ;
-(NSArray *)sessionsList;
-(BOOL)notPresentInIAPAccessoriesArray;
-(NSString *)preferredApp;
-(int)classType;
-(NSDictionary *)audioPorts;
-(NSArray *)eqNames;
-(unsigned)eqIndex;
-(BOOL)pointOfInterestHandoffEnabled;
-(unsigned long long)pointOfInterestDataFormatMaximumSupportedVersion;
-(int)locationSentenceTypesMask;
-(NSDictionary *)vehicleInfoSupportedTypes;
-(NSDictionary *)vehicleInfoInitialData;
-(NSString *)bonjourName;
-(BOOL)hasIPConnection;
-(BOOL)isAvailableOverBonjour;
-(void)setBonjourName:(NSString *)arg1 ;
-(void)setHasIPConnection:(BOOL)arg1 ;
-(void)setIsAvailableOverBonjour:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<EAAccessoryDelegate>)arg1 ;
-(id)init;
-(id<EAAccessoryDelegate>)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setMacAddress:(NSString *)arg1 ;
-(void)addSession:(id)arg1 ;
-(NSString *)modelNumber;
-(unsigned)connectionID;
-(void)setCapabilities:(unsigned)arg1 ;
-(NSString *)manufacturer;
-(void)setManufacturer:(NSString *)arg1 ;
-(NSString *)serialNumber;
-(void)setSerialNumber:(NSString *)arg1 ;
-(unsigned)capabilities;
-(void)removeSession:(id)arg1 ;
-(NSString *)macAddress;
-(void)setConnected:(BOOL)arg1 ;
-(BOOL)connected;
@end

