/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:53:22 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OAVReadClient.h>

@interface EXVmlClient : NSObject <OAVReadClient>
+(void)readClientDataFromShape:(xmlNode*)arg1 toGraphic:(id)arg2 state:(id)arg3 ;
+(void)readClientDataFromGroup:(xmlNode*)arg1 toGroup:(id)arg2 state:(id)arg3 ;
+(int)vmlSupportLevel;
+(void)readAnchor:(xmlNode*)arg1 to:(id)arg2 ;
+(id)readComment:(xmlNode*)arg1 to:(id)arg2 state:(id)arg3 ;
+(id)edTextBoxForVmlTextInShape:(xmlNode*)arg1 to:(id)arg2 state:(id)arg3 ;
@end

