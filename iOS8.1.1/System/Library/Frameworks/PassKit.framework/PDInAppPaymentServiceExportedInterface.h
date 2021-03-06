/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:47 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol PDInAppPaymentServiceExportedInterface
@required
-(void)registerPaymentListenerEndpoint:(id)arg1 forHostIdentifier:(id)arg2 handler:(/*^block*/id)arg3;
-(void)retrievePaymentListenerEndpointForHostIdentifier:(id)arg1 handler:(/*^block*/id)arg2;
-(void)presentInAppPaymentInterfaceWithPaymentRequest:(id)arg1 forHostIdentifier:(id)arg2 orientation:(id)arg3 handler:(/*^block*/id)arg4;
-(void)inAppPaymentServiceResumed;
-(void)inAppPaymentServiceSuspended;

@end

