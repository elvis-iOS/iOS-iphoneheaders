/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:33 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MFLibraryContentIndexDataSource <NSObject>
@required
-(id)itemsRequiringIndexingForContentIndex:(id)arg1 limit:(unsigned long long)arg2;
-(void)contentIndex:(id)arg1 assignTransactionIdentifier:(unsigned)arg2 forDocumentIdentifiers:(id)arg3;
-(void)contentIndex:(id)arg1 invalidateItemsGreaterThanTransactionId:(unsigned)arg2;

@end
