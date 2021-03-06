/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:15:42 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/AccessoryUpdaterBundles/AppleEmbeddedAccessoryUpdater.bundle/AppleEmbeddedAccessoryUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FudPlugin <NSObject,NSCoding>
@required
-(id)initWithDeviceClass:(id)arg1 delegate:(id)arg2 info:(id*)arg3 options:(id)arg4;
-(void)bootstrapWithOptions:(id)arg1;
-(void)findFirmwareWithOptions:(id)arg1 remote:(BOOL)arg2;
-(void)downloadFirmwareWithOptions:(id)arg1;
-(void)prepareFirmwareWithOptions:(id)arg1;
-(void)applyFirmwareWithOptions:(id)arg1;
-(void)finishWithOptions:(id)arg1;
-(void)setDelegate:(id)arg1;

@end

