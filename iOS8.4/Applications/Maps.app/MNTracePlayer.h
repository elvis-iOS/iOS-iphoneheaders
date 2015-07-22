/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:39 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MKLocationProvider.h>
#import <Maps/MNMotionContextProvider.h>

@protocol MKLocationProviderDelegate, MNMotionContextProviderDelegate;
@class NSBundle, NSString, NSHashTable, MNTrace, MNTestLogger, NSDate, NSArray, NSTimer, SearchResult, NSMutableArray, NSIndexSet, CLLocation, GEODirectionsRequest, GEODirectionsResponse, NSData;

@interface MNTracePlayer : NSObject <MKLocationProvider, MNMotionContextProvider> {

	NSHashTable* _observers;
	id<MKLocationProviderDelegate> _locationDelegate;
	id<MNMotionContextProviderDelegate> _motionDelegate;
	MNTrace* _trace;
	MNTestLogger* _testLogger;
	unsigned _currentRequestId;
	int _dbResult;
	char _isPlaying;
	char _isPlayingETAUpdates;
	char _isPaused;
	char _rawGPSMode;
	NSDate* _playStartTime;
	NSArray* _locations;
	NSArray* _vehicleSpeedData;
	NSArray* _vehicleHeadingData;
	unsigned _lastPlayedIndex;
	NSArray* _guideMeSelections;
	unsigned _playingIndex;
	NSTimer* _vehicleUpdateSpeedTimer;
	NSTimer* _vehicleUpdateHeadingTimer;
	unsigned _lastReportedVehicleSpeedIndex;
	unsigned _lastReportedVehicleHeadingIndex;
	unsigned _etaUpdateIndex;
	char _requestingRoute;
	/*^block*/id _delayedFinishedHandler;
	/*^block*/id _delayedErrorHandler;
	NSArray* _directions;
	unsigned _routeRequestIndex;
	NSArray* _routeSelections;
	NSArray* _etaUpdates;
	NSDate* _dateOfLastSkip;
	unsigned bookmarkIndexOfLastSkip;
	sqlite3_stmtRef _selectBookmarkImage;
	NSArray* _likelyRoutes;
	double _speedMultiplier;
	double _traceStartTime;
	SearchResult* _source;
	SearchResult* _destination;
	int _mainTransportType;
	double _duration;
	char _isReplay;
	char _isSimulation;
	char _isRouteGenius;
	char _usesCLMapCorrection;
	int _traceVersion;
	int _originalVersion;
	double _initialCourse;
	NSMutableArray* _etaUpdaters;
	NSTimer* _playTimer;
	NSIndexSet* _boringIndices;
	/*^block*/id _authorizationRequestBlock;

}

@property (nonatomic,retain) MNTrace * trace;                                                                                              //@synthesize trace=_trace - In the implementation block
@property (nonatomic,retain) MNTestLogger * testLogger;                                                                                    //@synthesize testLogger=_testLogger - In the implementation block
@property (assign,nonatomic) char isPlaying;                                                                                               //@synthesize isPlaying=_isPlaying - In the implementation block
@property (assign,nonatomic) char isPaused;                                                                                                //@synthesize isPaused=_isPaused - In the implementation block
@property (assign,nonatomic) char isReplay;                                                                                                //@synthesize isReplay=_isReplay - In the implementation block
@property (assign,nonatomic) char isPlayingETAUpdates;                                                                                     //@synthesize isPlayingETAUpdates=_isPlayingETAUpdates - In the implementation block
@property (assign,nonatomic) double speedMultiplier;                                                                                       //@synthesize speedMultiplier=_speedMultiplier - In the implementation block
@property (nonatomic,readonly) CLLocation * startLocation; 
@property (nonatomic,retain) SearchResult * source;                                                                                        //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) SearchResult * destination;                                                                                   //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) int mainTransportType;                                                                                      //@synthesize mainTransportType=_mainTransportType - In the implementation block
@property (nonatomic,readonly) double initialCourse;                                                                                       //@synthesize initialCourse=_initialCourse - In the implementation block
@property (nonatomic,readonly) double duration;                                                                                            //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double currentRecordedTimestamp; 
@property (nonatomic,readonly) NSDate * currentRecordedDate; 
@property (nonatomic,retain) NSArray * locations;                                                                                          //@synthesize locations=_locations - In the implementation block
@property (nonatomic,retain) NSArray * directions;                                                                                         //@synthesize directions=_directions - In the implementation block
@property (nonatomic,retain) NSArray * routeSelections;                                                                                    //@synthesize routeSelections=_routeSelections - In the implementation block
@property (nonatomic,retain) NSArray * likelyRoutes;                                                                                       //@synthesize likelyRoutes=_likelyRoutes - In the implementation block
@property (nonatomic,readonly) NSArray * guideMeSelections;                                                                                //@synthesize guideMeSelections=_guideMeSelections - In the implementation block
@property (assign,nonatomic) char rawGPSMode;                                                                                              //@synthesize rawGPSMode=_rawGPSMode - In the implementation block
@property (nonatomic,readonly) NSArray * routeGeniusSuggestions; 
@property (nonatomic,readonly) GEODirectionsRequest * firstDirectionsRequest; 
@property (nonatomic,readonly) GEODirectionsResponse * firstDirectionsResponse; 
@property (nonatomic,readonly) NSArray * traceETAUpdaters;                                                                                 //@synthesize etaUpdaters=_etaUpdaters - In the implementation block
@property (nonatomic,readonly) NSData * firstDirectionsResponseID; 
@property (nonatomic,retain) NSDate * playStartTime;                                                                                       //@synthesize playStartTime=_playStartTime - In the implementation block
@property (nonatomic,retain) NSTimer * playTimer;                                                                                          //@synthesize playTimer=_playTimer - In the implementation block
@property (nonatomic,copy) id delayedFinishedHandler;                                                                                      //@synthesize delayedFinishedHandler=_delayedFinishedHandler - In the implementation block
@property (nonatomic,copy) id delayedErrorHandler;                                                                                         //@synthesize delayedErrorHandler=_delayedErrorHandler - In the implementation block
@property (assign,nonatomic) char requestingRoute;                                                                                         //@synthesize requestingRoute=_requestingRoute - In the implementation block
@property (nonatomic,retain) NSIndexSet * boringIndices;                                                                                   //@synthesize boringIndices=_boringIndices - In the implementation block
@property (nonatomic,readonly) double playCurrentTimestamp; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MKLocationProviderDelegate> delegate;                                                               //@synthesize locationDelegate=_locationDelegate - In the implementation block
@property (nonatomic,retain) NSBundle * effectiveBundle; 
@property (nonatomic,copy) NSString * effectiveBundleIdentifier; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) char locationServicesPreferencesDialogEnabled; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) char matchInfoEnabled; 
@property (assign,nonatomic) int headingOrientation; 
@property (nonatomic,copy) id authorizationRequestBlock;                                                                                   //@synthesize authorizationRequestBlock=_authorizationRequestBlock - In the implementation block
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (nonatomic,readonly) int authorizationStatus; 
@property (nonatomic,readonly) char airplaneModeBlocksLocation; 
@property (assign,nonatomic) int activityType; 
@property (nonatomic,readonly) char usesCLMapCorrection;                                                                                   //@synthesize usesCLMapCorrection=_usesCLMapCorrection - In the implementation block
@property (nonatomic,readonly) char isSimulation;                                                                                          //@synthesize isSimulation=_isSimulation - In the implementation block
@property (nonatomic,readonly) char isTracePlayer; 
@property (assign,nonatomic,__weak) id<MNMotionContextProviderDelegate> motionDelegate;                                                    //@synthesize motionDelegate=_motionDelegate - In the implementation block
-(MNTrace *)trace;
-(NSArray *)guideMeSelections;
-(void)loadImageForBookmarkId:(unsigned)arg1 onLoad:(/*^block*/id)arg2 ;
-(void)jumpToBookmarkId:(unsigned)arg1 ;
-(id)initWithPath:(id)arg1 isReplay:(char)arg2 ;
-(void)setIsPlaying:(char)arg1 ;
-(NSDate *)currentRecordedDate;
-(void)setIsPlayingETAUpdates:(char)arg1 ;
-(id)selectedRouteID;
-(MNTestLogger *)testLogger;
-(char)isReadyForRequest:(id)arg1 ;
-(char)requestNextRouteWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_logSqliteErrorWithFile:(const char*)arg1 line:(int)arg2 ;
-(void)setTrace:(MNTrace *)arg1 ;
-(void)stopMotionUpdates;
-(void)resumePlaying;
-(char)_loadTraceWithPath:(id)arg1 ;
-(id)_migratorSQLForVersion:(unsigned)arg1 ;
-(char)_runQuery:(id)arg1 withPreparedHandler:(/*^block*/id)arg2 stepHandler:(/*^block*/id)arg3 ;
-(char)_upgradeTraceFromVersion:(unsigned)arg1 ;
-(id)boringIndicesWithinTrace:(id)arg1 ;
-(void)setBoringIndices:(NSIndexSet *)arg1 ;
-(void)setRouteSelections:(NSArray *)arg1 ;
-(void)setLikelyRoutes:(NSArray *)arg1 ;
-(void)setPlayStartTime:(NSDate *)arg1 ;
-(double)playCurrentTimestamp;
-(void)playIndex;
-(void)_playETAUpdateRequestFromPlayIndex:(unsigned)arg1 ;
-(void)_updateETAUpdateIndexForCurrentTimestamp;
-(void)_updateVehicleSpeedTimerFired:(unsigned)arg1 ;
-(id)_scheduleVehicleDataUpdatesFromTime:(double)arg1 vehicleData:(id)arg2 lastReportedIndex:(unsigned)arg3 vehicleDataUpdatedCallback:(SEL)arg4 ;
-(void)_updateVehicleHeadingTimerFired:(unsigned)arg1 ;
-(NSDate *)playStartTime;
-(void)_scheduleVehicleSpeedUpdatesFromTime:(double)arg1 ;
-(void)_scheduleVehicleHeadingUpdatesFromTime:(double)arg1 ;
-(double)currentRecordedTimestamp;
-(void)startPlayTimerWithInterval:(double)arg1 ;
-(void)startPlayTimerWithTargetTimestamp:(double)arg1 ;
-(void)playStaleIndex;
-(void)setPlayTimer:(NSTimer *)arg1 ;
-(NSTimer *)playTimer;
-(id)_playbackAdjustedLocationFromLocationRow:(id)arg1 ;
-(double)initialCourse;
-(NSIndexSet *)boringIndices;
-(void)pausePlaying;
-(void)jumpToTime:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)killTimers;
-(void)setDelayedFinishedHandler:(id)arg1 ;
-(void)setDelayedErrorHandler:(id)arg1 ;
-(void)_playRouteResponseForRequestIndex:(unsigned)arg1 requestId:(unsigned)arg2 ;
-(NSArray *)routeSelections;
-(GEODirectionsResponse *)firstDirectionsResponse;
-(double)_responseTimeIntervalForRequest:(id)arg1 ;
-(void)startMotionUpdates;
-(id<MNMotionContextProviderDelegate>)motionDelegate;
-(void)setMotionDelegate:(id<MNMotionContextProviderDelegate>)arg1 ;
-(id)initWithTruthTracePath:(id)arg1 ;
-(void)setSpeedMultiplier:(double)arg1 ;
-(void)skipByTimeInterval:(double)arg1 ;
-(void)jumpToLeg:(id)arg1 ;
-(char)isPlayingPointTrace;
-(NSArray *)routeGeniusSuggestions;
-(GEODirectionsRequest *)firstDirectionsRequest;
-(NSData *)firstDirectionsResponseID;
-(void)addTraceETAUpdater:(id)arg1 ;
-(void)matchLocations;
-(void)setTestLogger:(MNTestLogger *)arg1 ;
-(NSArray *)likelyRoutes;
-(char)isPlayingETAUpdates;
-(char)rawGPSMode;
-(void)setRawGPSMode:(char)arg1 ;
-(char)requestingRoute;
-(void)setRequestingRoute:(char)arg1 ;
-(double)speedMultiplier;
-(id)delayedFinishedHandler;
-(id)delayedErrorHandler;
-(char)isReplay;
-(void)setIsReplay:(char)arg1 ;
-(NSArray *)traceETAUpdaters;
-(CLLocation *)startLocation;
-(double)distanceFilter;
-(double)expectedGpsUpdateInterval;
-(void)setLocationServicesPreferencesDialogEnabled:(char)arg1 ;
-(void)startUpdatingVehicleSpeed;
-(void)stopUpdatingVehicleSpeed;
-(void)startUpdatingVehicleHeading;
-(void)stopUpdatingVehicleHeading;
-(double)desiredAccuracy;
-(char)isLocationServicesPreferencesDialogEnabled;
-(void)setMatchInfoEnabled:(char)arg1 ;
-(int)headingOrientation;
-(void)dismissHeadingCalibrationDisplay;
-(void)requestWhenInUseAuthorizationWithPrompt;
-(void)setEffectiveBundle:(NSBundle *)arg1 ;
-(NSString *)effectiveBundleIdentifier;
-(void)setEffectiveBundleIdentifier:(NSString *)arg1 ;
-(char)matchInfoEnabled;
-(id)authorizationRequestBlock;
-(void)setAuthorizationRequestBlock:(id)arg1 ;
-(char)airplaneModeBlocksLocation;
-(char)usesCLMapCorrection;
-(char)isSimulation;
-(char)isTracePlayer;
-(void)requestWhenInUseAuthorization;
-(void)dealloc;
-(void)setLocations:(NSArray *)arg1 ;
-(void)setDelegate:(id<MKLocationProviderDelegate>)arg1 ;
-(id<MKLocationProviderDelegate>)delegate;
-(double)duration;
-(void)removeObserver:(id)arg1 ;
-(NSArray *)directions;
-(void)setDirections:(NSArray *)arg1 ;
-(NSBundle *)effectiveBundle;
-(SearchResult *)source;
-(void)setSource:(SearchResult *)arg1 ;
-(SearchResult *)destination;
-(void)setDestination:(SearchResult *)arg1 ;
-(int)activityType;
-(id)initWithPath:(id)arg1 ;
-(int)authorizationStatus;
-(void)addObserver:(id)arg1 ;
-(id)locationAtIndex:(int)arg1 ;
-(NSArray *)locations;
-(int)mainTransportType;
-(void)startUpdatingHeading;
-(void)stopUpdatingHeading;
-(void)setDistanceFilter:(double)arg1 ;
-(void)setDesiredAccuracy:(double)arg1 ;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(void)setHeadingOrientation:(int)arg1 ;
-(char)isPaused;
-(void)forceLocationUpdate;
-(char)isPlaying;
-(void)setActivityType:(int)arg1 ;
-(void)setIsPaused:(char)arg1 ;
@end
