/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSArray, SSMetricsConfiguration, NSString;

@interface SKUISearchPage : NSObject <NSCopying> {

	bool _autoCorrected;
	NSArray* _facets;
	SSMetricsConfiguration* _metricsConfiguration;
	NSString* _metricsPageDescription;
	long long _preAutoCorrectCount;
	NSArray* _relatedQueries;
	NSArray* _resultGroups;
	NSString* _searchTerm;
	NSString* _spellCorrectedTerm;

}

@property (nonatomic,copy) NSArray * facets;                                             //@synthesize facets=_facets - In the implementation block
@property (nonatomic,retain) SSMetricsConfiguration * metricsConfiguration;              //@synthesize metricsConfiguration=_metricsConfiguration - In the implementation block
@property (nonatomic,copy) NSString * metricsPageDescription;                            //@synthesize metricsPageDescription=_metricsPageDescription - In the implementation block
@property (nonatomic,readonly) long long numberOfResults; 
@property (nonatomic,copy) NSArray * resultGroups;                                       //@synthesize resultGroups=_resultGroups - In the implementation block
@property (nonatomic,copy) NSString * searchTerm;                                        //@synthesize searchTerm=_searchTerm - In the implementation block
@property (nonatomic,copy) NSString * spellCorrectedTerm;                                //@synthesize spellCorrectedTerm=_spellCorrectedTerm - In the implementation block
@property (assign,nonatomic) bool autoCorrected;                                         //@synthesize autoCorrected=_autoCorrected - In the implementation block
@property (assign,nonatomic) long long preAutoCorrectCount;                              //@synthesize preAutoCorrectCount=_preAutoCorrectCount - In the implementation block
@property (nonatomic,retain) NSArray * relatedQueries;                                   //@synthesize relatedQueries=_relatedQueries - In the implementation block
-(id)searchTerm;
-(void)setSearchTerm:(id)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(void).cxx_destruct;
-(long long)numberOfResults;
-(void)setMetricsConfiguration:(id)arg1 ;
-(void)setMetricsPageDescription:(id)arg1 ;
-(id)metricsConfiguration;
-(id)metricsPageDescription;
-(id)facets;
-(void)setRelatedQueries:(id)arg1 ;
-(id)relatedQueries;
-(id)resultGroups;
-(id)spellCorrectedTerm;
-(void)setSpellCorrectedTerm:(id)arg1 ;
-(bool)autoCorrected;
-(void)setAutoCorrected:(bool)arg1 ;
-(long long)preAutoCorrectCount;
-(void)setPreAutoCorrectCount:(long long)arg1 ;
-(void)setResultGroups:(id)arg1 ;
-(void)setFacets:(id)arg1 ;
@end
