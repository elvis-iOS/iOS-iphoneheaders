/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:32 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <Message/MFWebAttachmentSource.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, MFConditionLock, NSArray;

@interface MFGenericAttachmentStore : MFWebAttachmentSource {

	CFDictionaryRef _attachmentSizes;
	NSMutableArray* _attachmentsOrder;
	unsigned _size;
	NSObject<OS_dispatch_queue>* _scalingQueue;
	MFConditionLock* _scalingThrottle;
	int _pendingImageScalingOperations;
	bool _outgoing;
	bool _didCancelImageScalingOperations;
	bool _isScalingEnabled;
	bool _isScalingThrottled;

}

@property (assign,nonatomic) bool scalingThrottled;                //@synthesize isScalingThrottled=_isScalingThrottled - In the implementation block
@property (nonatomic,readonly) NSArray * attachments; 
+(void)beginPreventingInlinePDFs;
+(void)endPreventingInlinePDFs;
+(bool)isPreventingInlinePDFs;
+(void)addAttachmentUniqueIdentifierStore:(id)arg1 ;
-(unsigned long long)sizeForScale:(unsigned long long)arg1 imagesOnly:(bool)arg2 ;
-(void)cancelImageScalingOperations;
-(void)setScalingThrottled:(bool)arg1 ;
-(void)_enqueueScaleAttachment:(id)arg1 withFlags:(unsigned)arg2 originalSize:(unsigned long long)arg3 ;
-(void)_notifyAttachmentCachedSizesChanged;
-(bool)addAttachment:(id)arg1 allowingOverride:(/*^block*/ id)arg2 ;
-(void)_inrementPendingImageScalingOperations;
-(bool)didCancelImageScalingOperations;
-(void)_decrementPendingImageScalingOperations;
-(id)initOutgoing;
-(bool)hasPendingImageScalingOperations;
-(void)removeAttachmentsForURLs:(id)arg1 ;
-(bool)scalingThrottled;
-(void)dealloc;
-(id)description;
-(bool)addAttachment:(id)arg1 ;
-(id)attachments;
-(bool)setAttachment:(id)arg1 forURL:(id)arg2 ;
-(void)removeAttachmentForURL:(id)arg1 ;
@end
