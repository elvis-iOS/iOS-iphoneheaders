/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:52 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKitLegacy/WebKitLegacy-Structs.h>
#import <WebKitLegacy/WebOpenPanelResultListener.h>

@protocol WebOpenPanelResultListener <NSObject>
@required
-(void)cancel;
-(void)chooseFilename:(id)arg1 displayString:(id)arg2 iconImage:(CGImageRef)arg3;
-(void)chooseFilenames:(id)arg1 displayString:(id)arg2 iconImage:(CGImageRef)arg3;
-(void)chooseFilename:(id)arg1;
-(void)chooseFilenames:(id)arg1;

@end


@class NSString;

@interface WebOpenPanelResultListener : NSObject <WebOpenPanelResultListener> {

	FileChooser* _chooser;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)chooseFilename:(id)arg1 displayString:(id)arg2 iconImage:(CGImageRef)arg3 ;
-(void)chooseFilenames:(id)arg1 displayString:(id)arg2 iconImage:(CGImageRef)arg3 ;
-(id)initWithChooser:(PassRefPtr<WebCore::FileChooser>*)arg1 ;
-(void)chooseFilename:(id)arg1 ;
-(void)chooseFilenames:(id)arg1 ;
@end

