/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:52:17 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameController/CBCentralManagerDelegate.h>
#import <GameController/CBPeripheralDelegate.h>

@class NSMutableArray, CBCentralManager, NSString;

@interface GCControllerCBDelegate : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate> {

	NSMutableArray* _foundPeripherals;
	NSMutableArray* _connectedPeripherals;
	CBCentralManager* _centralManager;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) CBCentralManager * centralManager;              //@synthesize centralManager=_centralManager - In the implementation block
@property (nonatomic,copy) id completionHandler;                             //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startScanWithTimeout:(double)arg1 ;
-(id)init;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(CBCentralManager *)centralManager;
-(void)stopScan;
-(void)setCentralManager:(CBCentralManager *)arg1 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)centralManager:(id)arg1 didRetrievePeripherals:(id)arg2 ;
-(void)centralManager:(id)arg1 didRetrieveConnectedPeripherals:(id)arg2 ;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4 ;
-(void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2 ;
-(void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didDiscoverServices:(id)arg2 ;
-(void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didDiscoverDescriptorsForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didUpdateValueForDescriptor:(id)arg2 error:(id)arg3 ;
-(void)fireCompletionHandler;
-(void)startScan;
@end

