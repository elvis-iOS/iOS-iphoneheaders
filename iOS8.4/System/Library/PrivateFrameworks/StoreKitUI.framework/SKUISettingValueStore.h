/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:46 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface SKUISettingValueStore : NSObject {

	NSObject*<OS_dispatch_queue> _mutexQueue;
	NSMutableDictionary* _originalValues;
	NSMutableDictionary* _modifiedValues;

}
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(id)valueForKeyPath:(id)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(BOOL)hasChanges;
-(void)clearValueForKey:(id)arg1 ;
-(void)commitChanges;
-(void)discardChanges;
-(id)modifiedKeys;
-(id)originalValueForKey:(id)arg1 ;
-(id)resolvedValueForKey:(id)arg1 ;
-(void)setModifiedValue:(id)arg1 forKey:(id)arg2 ;
-(void)setOriginalValue:(id)arg1 forKey:(id)arg2 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end

