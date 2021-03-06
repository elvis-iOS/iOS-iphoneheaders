/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class UIPDFPage, UIImage, UIPDFPageRenderOperation;

@interface UIPDFPageRenderJob : NSObject {

	UIPDFPage* _page;
	unsigned _pageIndex;
	CGSize _size;
	int _priority;
	UIImage* _image;
	UIPDFPageRenderOperation* _operation;
	id _target;
	SEL _callback;
	id _userData;
	BOOL _sendPending;
	BOOL _releaseWhenDone;
	int _lock;

}

@property (@dynamic,readonly) UIImage * image; 
@property (@dynamic) UIPDFPageRenderOperation * operation; 
@property (readonly) unsigned pageIndex;                                //@synthesize pageIndex=_pageIndex - In the implementation block
@property (readonly) int priority;                                      //@synthesize priority=_priority - In the implementation block
@property (assign) BOOL releaseWhenDone;                                //@synthesize releaseWhenDone=_releaseWhenDone - In the implementation block
@property (readonly) CGSize size;                                       //@synthesize size=_size - In the implementation block
-(void)dealloc;
-(CGSize)size;
-(id)operation;
-(void)setOperation:(id)arg1 ;
-(id)image;
-(void)cancel;
-(int)priority;
-(unsigned)pageIndex;
-(BOOL)hasPage;
-(id)initWithPage:(id)arg1 maxSize:(CGSize)arg2 queuePriority:(int)arg3 ;
-(void)cancelOperation;
-(void)cancelOperationForTarget:(id)arg1 ;
-(void)setTarget:(id)arg1 callback:(SEL)arg2 userData:(id)arg3 ;
-(void)releaseOperation;
-(void)renderImage;
-(void)sendImage;
-(void)sendImageTo:(id)arg1 callback:(SEL)arg2 userData:(id)arg3 ;
-(BOOL)releaseWhenDone;
-(void)setReleaseWhenDone:(BOOL)arg1 ;
@end

