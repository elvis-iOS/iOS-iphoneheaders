/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Maps/Maps-Structs.h>
@class GEOWaypoint, SearchResult, GEOLatLng;

@interface GEOWaypointSearchResultRequest : NSObject {

	GEOWaypoint* _waypoint;
	SearchResult* _searchResult;

}

@property (nonatomic,readonly) GEOWaypoint * waypoint;                   //@synthesize waypoint=_waypoint - In the implementation block
@property (nonatomic,readonly) SearchResult * searchResult;              //@synthesize searchResult=_searchResult - In the implementation block
@property (nonatomic,readonly) GEOLatLng * latLng; 
-(id)navDisplayName;
-(id)initWithDirectionsWaypoint:(id)arg1 mapViewSearchInfo:(id)arg2 ;
-(id)navAnnouncementName;
-(id)navAnnouncementAddress;
-(id)waypoint;
-(id)traceName;
-(id)persistentData;
-(BOOL)representsSearchString;
-(id)initWithGEOWaypoint:(id)arg1 searchResult:(id)arg2 placeSearchResponse:(id)arg3 ;
-(id)singleLineAddress;
-(void).cxx_destruct;
-(id)latLng;
-(SCD_Struct_Si13)coordinate;
-(id)searchResult;
@end
