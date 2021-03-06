/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:50 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/NanoLeash.framework/companionproximityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <companionproximityd/NFMLLeashBreakDelegate.h>
#import <companionproximityd/CBScalablePipeManagerDelegate.h>

@class NFMLeashManager, CBScalablePipeManager, NSString;

@interface LPCompanionProximity : NSObject <NFMLLeashBreakDelegate, CBScalablePipeManagerDelegate> {

	NFMLeashManager* _leashManager;
	CBScalablePipeManager* _leashPipeManager;

}

@property (nonatomic,retain) NFMLeashManager * leashManager;                        //@synthesize leashManager=_leashManager - In the implementation block
@property (nonatomic,retain) CBScalablePipeManager * leashPipeManager;              //@synthesize leashPipeManager=_leashPipeManager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_queue:(/*^block*/id)arg1 ;
-(CBScalablePipeManager *)leashPipeManager;
-(void)setLeashPipeManager:(CBScalablePipeManager *)arg1 ;
-(void)scalablePipeManagerDidUpdateState:(id)arg1 ;
-(void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3 ;
-(void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2 ;
-(void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2 ;
-(void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)leashed;
-(void)leashBroke;
-(NFMLeashManager *)leashManager;
-(void)setLeashManager:(NFMLeashManager *)arg1 ;
@end

