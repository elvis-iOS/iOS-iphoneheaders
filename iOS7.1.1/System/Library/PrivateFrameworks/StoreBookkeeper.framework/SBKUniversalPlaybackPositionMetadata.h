/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreBookkeeper/StoreBookkeeper-Structs.h>
#import <StoreBookkeeper/SBKSyncKeyValuePair.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface SBKUniversalPlaybackPositionMetadata : NSObject <SBKSyncKeyValuePair, NSCopying> {

	bool _hasBeenPlayed;
	NSString* _itemIdentifier;
	double _timestamp;
	double _bookmarkTime;
	unsigned long long _playCount;

}

@property (copy) NSString * itemIdentifier;                   //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (assign) double timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign) double bookmarkTime;                       //@synthesize bookmarkTime=_bookmarkTime - In the implementation block
@property (assign) bool hasBeenPlayed;                        //@synthesize hasBeenPlayed=_hasBeenPlayed - In the implementation block
@property (assign) unsigned long long playCount;              //@synthesize playCount=_playCount - In the implementation block
+(id)keyValueStoreItemIdentifierForItem:(id)arg1 ;
+(id)metadataWithItemIdentifier:(id)arg1 keyValueStorePayload:(id)arg2 failuresOkay:(bool)arg3 ;
+(id)_testableMetadataItem_1;
+(id)metadataWithValuesFromDataSourceItem:(id)arg1 ;
+(id)metadataWithItemIdentifier:(id)arg1 keyValueStorePayload:(id)arg2 ;
-(double)bookmarkTime;
-(unsigned long long)playCount;
-(void)setPlayCount:(unsigned long long)arg1 ;
-(bool)hasBeenPlayed;
-(void)setHasBeenPlayed:(bool)arg1 ;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(void).cxx_destruct;
-(void)setBookmarkTime:(double)arg1 ;
-(id)kvsPayload;
-(id)initAsTestableItem;
-(id)keyValueStorePayload;
-(id)kvsKey;
-(id)kvsValueDescription;
-(id)itemIdentifier;
-(void)setItemIdentifier:(id)arg1 ;
@end

