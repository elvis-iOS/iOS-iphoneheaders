/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:07:58 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/voiced
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <voiced/voiced-Structs.h>
#import <voiced/VSSpeechService.h>
#import <voiced/VSSpeechServiceDelegate.h>

@class NSXPCConnection, NSString;

@interface VSSpeechClient : NSObject <VSSpeechService, VSSpeechServiceDelegate> {

	NSXPCConnection* _connection;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_delegate;
-(id)initWithConnection:(id)arg1 ;
-(oneway void)startSpeechRequest:(id)arg1 ;
-(oneway void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(int)arg2 gender:(int)arg3 custom:(char)arg4 reply:(/*^block*/id)arg5 ;
-(oneway void)setLogToFile:(char)arg1 ;
-(oneway void)getLogToFile:(/*^block*/id)arg1 ;
-(oneway void)downloadVoiceAsset:(id)arg1 progress:(id)arg2 completion:(/*^block*/id)arg3 ;
-(oneway void)setAutoDownloadedVoiceAssets:(id)arg1 ;
-(oneway void)getAutoDownloadedVoiceAssets:(/*^block*/id)arg1 ;
-(oneway void)pauseSpeechRequestAtMark:(int)arg1 ;
-(oneway void)continueSpeechRequest;
-(oneway void)stopSpeechRequestAtMark:(int)arg1 ;
-(oneway void)getVoiceNamesForLanguage:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)getFootprintsForVoiceName:(id)arg1 languageCode:(id)arg2 reply:(/*^block*/id)arg3 ;
-(oneway void)getSpeechIsActiveReply:(/*^block*/id)arg1 ;
-(oneway void)getSpeechIsActiveForConnectionReply:(/*^block*/id)arg1 ;
-(oneway void)getCustomVoicesReply:(/*^block*/id)arg1 ;
-(oneway void)getLocalCustomVoicesReply:(/*^block*/id)arg1 ;
-(oneway void)speechRequestDidStart;
-(oneway void)speechRequestDidPause;
-(oneway void)speechRequestDidContinue;
-(oneway void)speechRequestMark:(int)arg1 didStartForRange:(NSRange)arg2 ;
-(oneway void)speechRequestDidStopWithSuccess:(char)arg1 phonemesSpoken:(id)arg2 error:(id)arg3 ;
@end
