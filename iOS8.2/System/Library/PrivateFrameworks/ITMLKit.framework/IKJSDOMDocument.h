/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:19 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class IKDOMImplementation, IKDOMElement, NSString, IKJSNavigationDocument;


@protocol IKJSDOMDocument <JSExport>
@property (nonatomic,__weak,readonly) IKDOMImplementation * implementation; 
@property (nonatomic,retain,readonly) IKDOMElement * documentElement; 
@property (nonatomic,retain,readonly) NSString * inputEncoding; 
@property (nonatomic,retain,readonly) NSString * xmlEncoding; 
@property (assign,nonatomic) char xmlStandalone; 
@property (nonatomic,retain) NSString * xmlVersion; 
@property (assign,nonatomic) char strictErrorChecking; 
@property (nonatomic,retain) NSString * documentURI; 
@property (nonatomic,__weak,readonly) IKJSNavigationDocument * navigationDocument; 
@required
-(void)replace:(id)arg1;
-(id)createElement:(id)arg1;
-(IKDOMElement *)documentElement;
-(id)getElementsByTagName:(id)arg1;
-(id)snapshotImpressions;
-(id)recordedImpressions;
-(void)runTest:(id)arg1 :(id)arg2;
-(char)strictErrorChecking;
-(void)setStrictErrorChecking:(char)arg1;
-(void)scrollToTop;
-(IKJSNavigationDocument *)navigationDocument;
-(void)setNeedsUpdate;
-(IKDOMImplementation *)implementation;
-(NSString *)inputEncoding;
-(NSString *)xmlEncoding;
-(NSString *)xmlVersion;
-(void)setXmlVersion:(id)arg1;
-(char)xmlStandalone;
-(void)setXmlStandalone:(char)arg1;
-(NSString *)documentURI;
-(void)setDocumentURI:(id)arg1;
-(id)createDocumentFragment;
-(id)createTextNode:(id)arg1;
-(id)createComment:(id)arg1;
-(id)getElementById:(id)arg1;
-(id)adoptNode:(id)arg1;

@end

