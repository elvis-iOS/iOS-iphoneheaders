/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class TSPIdentifierDictionary, NSMutableSet, TSPObjectContext;

@interface TSPDistributableWriteDataMapping : NSObject {

	TSPIdentifierDictionary* _identifierToPathMap;
	NSMutableSet* _paths;
	TSPObjectContext* _context;

}
-(void)setExportedPath:(id)arg1 forData:(id)arg2 ;
-(id)exportedPathForIdentifier:(long long)arg1 ;
-(void)dealloc;
-(id)initWithContext:(id)arg1 ;
@end

