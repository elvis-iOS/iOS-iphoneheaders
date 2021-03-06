/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OABReaderClient.h>

@interface WBOfficeArtReaderClient : NSObject <OABReaderClient>
+(void)readFrom:(EshContentProperties*)arg1 to:(id)arg2 ;
+(int)horizontalPosition:(EshContentProperties*)arg1 ;
+(int)relativeHorizontalPosition:(EshContentProperties*)arg1 ;
+(int)verticalPosition:(EshContentProperties*)arg1 ;
+(int)relativeVerticalPosition:(EshContentProperties*)arg1 ;
+(double)wrapDistanceLeft:(EshContentProperties*)arg1 ;
+(double)wrapDistanceTop:(EshContentProperties*)arg1 ;
+(double)wrapDistanceRight:(EshContentProperties*)arg1 ;
+(double)wrapDistanceBottom:(EshContentProperties*)arg1 ;
+(bool)allowOverlap:(EshContentProperties*)arg1 ;
+(bool)behindText:(EshContentProperties*)arg1 ;
+(void)readClientDataFromShape:(id)arg1 toGraphic:(id)arg2 state:(id)arg3 ;
+(void)readClientDataFromGroup:(id)arg1 toGroup:(id)arg2 state:(id)arg3 ;
+(void)readClientDataFromTableCell:(id)arg1 toTableCell:(id)arg2 state:(id)arg3 ;
+(bool)escherIsFullySupported;
+(bool)tablesAreAllowed;
@end

