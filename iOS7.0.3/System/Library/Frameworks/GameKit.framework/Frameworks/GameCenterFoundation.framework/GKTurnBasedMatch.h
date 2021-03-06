/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GameKitServices/GKSessionDelegate.h>

@class GKTurnBasedMatchInternal, NSArray, NSString, NSDate, GKTurnBasedParticipant, NSData, GKPlayer, GKGame;

@interface GKTurnBasedMatch : NSObject <GKSessionDelegate> {

	GKTurnBasedMatchInternal* _internal;
	NSArray* _participants;
	NSArray* _exchanges;
	unsigned _state;

}

@property (nonatomic,@dynamic,readonly) NSString * matchID; 
@property (nonatomic,@dynamic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSArray * participants;                                                         //@synthesize participants=_participants - In the implementation block
@property (nonatomic,@dynamic,readonly) int status; 
@property (nonatomic,retain) GKTurnBasedParticipant * currentParticipant; 
@property (nonatomic,@dynamic,readonly) NSData * matchData; 
@property (nonatomic,copy) NSString * message; 
@property (assign,nonatomic,@dynamic) unsigned matchDataMaximumSize; 
@property (nonatomic,readonly) NSArray * exchanges;                                                            //@synthesize exchanges=_exchanges - In the implementation block
@property (nonatomic,readonly) NSArray * activeExchanges; 
@property (nonatomic,readonly) NSArray * completedExchanges; 
@property (nonatomic,@dynamic,readonly) unsigned exchangeDataMaximumSize; 
@property (nonatomic,@dynamic,readonly) unsigned exchangeMaxInitiatedExchangesPerPlayer; 
@property (retain) GKTurnBasedMatchInternal * internal;                                                        //@synthesize internal=_internal - In the implementation block
@property (nonatomic,@dynamic,copy) NSDate * lastTurnDate; 
@property (nonatomic,@dynamic,readonly) int turnNumber; 
@property (nonatomic,readonly) NSDate * dateSortKey; 
@property (nonatomic,readonly) GKTurnBasedParticipant * previousParticipant; 
@property (nonatomic,readonly) GKTurnBasedParticipant * previousParticipantOrFirstKnownPlayer; 
@property (nonatomic,readonly) GKTurnBasedParticipant * playingWithParticipantOrFirstKnownPlayer; 
@property (nonatomic,readonly) GKTurnBasedParticipant * localPlayerParticipant; 
@property (nonatomic,readonly) GKPlayer * showcasePlayer; 
@property (nonatomic,readonly) GKTurnBasedParticipant * firstWinnerOrTiedOrLastLoser; 
@property (nonatomic,@dynamic,readonly) GKPlayer * currentPlayer; 
@property (nonatomic,@dynamic,retain) NSString * bundleID; 
@property (nonatomic,@dynamic,retain) NSString * bundleVersion; 
@property (assign,nonatomic) unsigned state;                                                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,@dynamic,readonly) BOOL isMyTurn; 
@property (nonatomic,readonly) BOOL localPlayerHasRecentTurn; 
@property (nonatomic,@dynamic,readonly) GKGame * game; 
+(id)keyPathsForValuesAffectingStatus;
+(void)getTurnBasedBadgeCountWithHandler:(/*^block*/ id)arg1 ;
+(void)loadMatchesIncludingCompatibleBundleID:(BOOL)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
+(id)matchesWithInternalRepresentations:(id)arg1 ;
+(void)loadTurnBasedMatchDetailsForMatchIDs:(id)arg1 loadGameData:(BOOL)arg2 withCompletionHandler:(/*^block*/ id)arg3 ;
+(id)_localizableMessageWithKey:(id)arg1 arguments:(id)arg2 defaultMessage:(id)arg3 ;
+(void)loadMatchesWithCompletionHandler:(/*^block*/ id)arg1 ;
+(void)loadTurnBasedMatchSummaries:(/*^block*/ id)arg1 ;
+(void)loadTurnBasedMatchSummariesIncludingCompatibleBundleID:(BOOL)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
+(void)loadMatchWithID:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
+(void)loadTurnBasedMatchWithDetailsForMatchID:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
+(void)findMatchForRequest:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
-(void)setInternal:(id)arg1 ;
-(unsigned)exchangeDataMaximumSize;
-(unsigned)exchangeMaxInitiatedExchangesPerPlayer;
-(void)rematchWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)exchangeForID:(id)arg1 ;
-(void)_updateWithInternal:(id)arg1 ;
-(id)_participantsForInternalRepresentation:(id)arg1 ;
-(id)_exchangesForInternalRepresentation:(id)arg1 participants:(id)arg2 ;
-(id)exchanges;
-(id)currentPlayer;
-(void)setLocalizableMessageWithKey:(id)arg1 arguments:(id)arg2 ;
-(unsigned)matchDataMaximumSize;
-(void)setCurrentParticipant:(id)arg1 ;
-(id)previousParticipant;
-(void)endTurnWithNextParticipants:(id)arg1 turnTimeout:(double)arg2 matchData:(id)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(id)indexesForParticipants:(id)arg1 ;
-(void)participantQuitInTurnWithOutcome:(int)arg1 nextParticipants:(id)arg2 turnTimeout:(double)arg3 matchData:(id)arg4 completionHandler:(/*^block*/ id)arg5 ;
-(void)endMatchInTurnWithMatchData:(id)arg1 scores:(id)arg2 achievements:(id)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(BOOL)localPlayerHasRecentTurn;
-(id)completedExchanges;
-(void)endTurnWithNextParticipant:(id)arg1 matchData:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)participantQuitInTurnWithOutcome:(int)arg1 nextParticipant:(id)arg2 matchData:(id)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(void)endMatchInTurnWithMatchData:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)saveCurrentTurnWithMatchData:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)saveMergedMatchData:(id)arg1 withResolvedExchanges:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)sendExchangeToParticipants:(id)arg1 data:(id)arg2 localizableMessageKey:(id)arg3 arguments:(id)arg4 timeout:(double)arg5 completionHandler:(/*^block*/ id)arg6 ;
-(void)sendReminderToParticipants:(id)arg1 localizableMessageKey:(id)arg2 arguments:(id)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(id)game;
-(id)internal;
-(id)dateSortKey;
-(id)currentParticipant;
-(id)activeExchanges;
-(id)firstWinnerOrTiedOrLastLoser;
-(id)previousParticipantOrFirstKnownPlayer;
-(id)localPlayerParticipant;
-(id)participants;
-(id)showcasePlayer;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(id)playingWithParticipantOrFirstKnownPlayer;
-(void)acceptInviteWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)declineInviteWithCompletionHandler:(/*^block*/ id)arg1 ;
-(BOOL)isMyTurn;
-(void)loadMatchDataWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)participantQuitOutOfTurnWithOutcome:(int)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)removeWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned)state;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)setState:(unsigned)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)message;
-(int)compare:(id)arg1 ;
-(void)setMessage:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(int)status;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end

