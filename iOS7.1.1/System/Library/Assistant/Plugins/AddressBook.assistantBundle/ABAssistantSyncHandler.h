/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/Plugins/AddressBook.assistantBundle/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABAssistantSyncHandler.h>

@protocol ABAssistantSyncHandler <AFSyncHandler,NSObject>
@property (assign,nonatomic) void* addressBook; 
@required
-(void*)addressBook;
-(void)setAddressBook:(void*)arg1;
@end


@class ABAssistantSyncWorker;

@interface ABAssistantSyncHandler : NSObject <ABAssistantSyncHandler> {

	void* _addressBook;
	ABAssistantSyncWorker* _syncWorker;

}

@property (nonatomic,retain) ABAssistantSyncWorker * syncWorker;              //@synthesize syncWorker=_syncWorker - In the implementation block
@property (assign,nonatomic) void* addressBook; 
-(void)setSyncWorker:(id)arg1 ;
-(void)syncDidEnd;
-(id)syncWorker;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 forKey:(id)arg3 beginInfo:(id)arg4 ;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2 ;
-(void)dealloc;
-(void).cxx_destruct;
-(void*)addressBook;
-(void)setAddressBook:(void*)arg1 ;
@end

