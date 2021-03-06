/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSSecureCoding.h>

@class GKGameInternal, NSString, NSDictionary, NSNumber, GKStoreItemInternal;

@interface GKGame : NSObject <NSCoding, NSSecureCoding> {

	BOOL _sandboxed;
	GKGameInternal* _internal;

}

@property (nonatomic,@dynamic,retain) NSString * reason; 
@property (nonatomic,@dynamic,retain) NSString * engineID; 
@property (nonatomic,@dynamic,readonly) BOOL isGameRecommendation; 
@property (getter=isInstalled,nonatomic,readonly) BOOL installed; 
@property (getter=isInternal,nonatomic,readonly) BOOL internal; 
@property (getter=isDownloading,nonatomic,readonly) BOOL downloading; 
@property (retain) GKGameInternal * internal;                                             //@synthesize internal=_internal - In the implementation block
@property (assign,getter=isPrerendered,nonatomic,@dynamic) BOOL prerendered; 
@property (assign,getter=isSandboxed,nonatomic) BOOL sandboxed;                           //@synthesize sandboxed=_sandboxed - In the implementation block
@property (nonatomic,readonly) NSDictionary * gameDescriptor; 
@property (nonatomic,@dynamic,readonly) NSNumber * adamID; 
@property (nonatomic,@dynamic,readonly) NSNumber * externalVersion; 
@property (nonatomic,@dynamic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,@dynamic,readonly) NSString * bundleVersion; 
@property (nonatomic,readonly) NSString * cacheKey; 
@property (assign,nonatomic,@dynamic) unsigned char platform; 
@property (nonatomic,@dynamic,readonly) NSString * name; 
@property (nonatomic,@dynamic,readonly) NSString * defaultCategory; 
@property (nonatomic,@dynamic,retain) GKStoreItemInternal * storeItem; 
@property (nonatomic,readonly) GKGameInfo gameInfo; 
@property (nonatomic,@dynamic,readonly) BOOL supportsMultiplayer; 
@property (nonatomic,@dynamic,readonly) BOOL supportsTurnBasedMultiplayer; 
+(void)loadGamesWithBundleIDs:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
+(void)loadTopGamesWithCompletionHandler:(/*^block*/ id)arg1 ;
+(void)updateGames:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
+(void)markGameRecommendationsDisplayed:(id)arg1 complete:(/*^block*/ id)arg2 ;
+(void)markGameRecommendationsViewed:(id)arg1 complete:(/*^block*/ id)arg2 ;
+(BOOL)isPreferences;
+(BOOL)isGameCenter;
+(id)currentGame;
+(BOOL)supportsSecureCoding;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
-(BOOL)isDownloading;
-(void)setInternal:(id)arg1 ;
-(GKGameInfo)gameInfo;
-(BOOL)isStoreItemUnexpired;
-(void)setSandboxed:(BOOL)arg1 ;
-(void)loadGameRatingWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)submitRating:(float)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(id)internal;
-(BOOL)isGameCenter;
-(BOOL)isSandboxed;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(void)getFriendPlayersIncludingCompatibleGames:(BOOL)arg1 handler:(/*^block*/ id)arg2 ;
-(id)gameDescriptor;
-(BOOL)isGameRecommendation;
-(BOOL)isInternal;
-(void)loadTellAFriendMessageWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)getFriendPlayersForAchievement:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)getFriendPlayersForLeaderboard:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)cacheKey;
-(BOOL)isInstalled;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end

