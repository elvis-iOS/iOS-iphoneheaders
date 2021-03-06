/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:31:21 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference;

@interface AVAssetWriterFigAssetWriterNotificationHandler : NSObject {

	OpaqueFigAssetWriterRef _figAssetWriter;
	int _didNotCallDelegate;
	AVWeakReference* _weakReferenceToSelf;
	AVWeakReference* _weakReferenceToDelegate;
	int _notificationHandlersAreRegistered;

}

@property (retain) AVWeakReference * weakReferenceToDelegate;              //@synthesize weakReferenceToDelegate=_weakReferenceToDelegate - In the implementation block
-(void)_handleServerDiedNotification;
-(void)_teardownNotificationHandlers;
-(void)_callDelegateIfNotCalledWithSuccess:(char)arg1 error:(id)arg2 ;
-(id)initWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 weakReferenceToDelegate:(id)arg2 ;
-(void)_handleCompletedWritingNotification;
-(void)_handleFailedNotificationWithError:(id)arg1 ;
-(AVWeakReference *)weakReferenceToDelegate;
-(void)setWeakReferenceToDelegate:(AVWeakReference *)arg1 ;
-(void)dealloc;
-(void)finalize;
@end

