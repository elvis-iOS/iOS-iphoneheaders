/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:19:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/AccessibilityBundles/VectorKit.axbundle/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface VKMapViewOutputManager : NSObject {

	NSMutableArray* _outputQueue;

}

@property (nonatomic,retain) NSMutableArray * outputQueue;              //@synthesize outputQueue=_outputQueue - In the implementation block
+(id)sharedOutputManager;
-(void)queueOutput:(id)arg1 ;
-(id)outputQueue;
-(void)setOutputQueue:(id)arg1 ;
-(void)clearOutputQueue;
-(void)_handleAccessibilityAnnouncementDidFinish:(id)arg1 ;
-(unsigned long long)outputQueueCount;
-(void)dealloc;
-(id)init;
@end
