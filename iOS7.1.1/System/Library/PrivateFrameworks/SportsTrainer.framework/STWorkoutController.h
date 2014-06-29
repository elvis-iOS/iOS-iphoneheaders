/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface STWorkoutController : NSObject {

	long long _workoutState;
	long long _workoutType;
	long long _calibrationType;
	long long _workoutPreset;
	float _customWorkoutDuration;
	float _customWorkoutDistance;
	long long _customWorkoutCalories;
	double _elapsedWorkoutTime;
	long long _distanceUnits;
	bool _skipNextEmpedSearch;

}
+(id)stringQuantificationForWorkoutType:(long long)arg1 preset:(long long)arg2 ;
+(id)shortDescriptionForWorkoutType:(long long)arg1 preset:(long long)arg2 ;
@end
