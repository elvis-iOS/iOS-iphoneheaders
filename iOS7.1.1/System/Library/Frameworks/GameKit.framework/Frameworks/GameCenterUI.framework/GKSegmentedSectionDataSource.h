/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GKCollectionViewDataSource.h>
#import <GameCenterUI/GKSegmentInfoDelegagte.h>

@class NSString, NSMutableArray, GKSegmentedSectionHeaderView, GKCollectionViewPlaceholderView, GKSegmentInfo, GKCollectionViewDataSource, NSArray;

@interface GKSegmentedSectionDataSource : GKCollectionViewDataSource <GKSegmentInfoDelegagte> {

	bool _usePlaceholder;
	bool _waitingForAnimation;
	NSString* _noContentTitle;
	NSString* _noContentMessage;
	NSMutableArray* _segmentInfos;
	GKSegmentedSectionHeaderView* _headerView;
	GKCollectionViewPlaceholderView* _placeholderView;
	GKSegmentInfo* _selectedSegmentInfo;
	GKCollectionViewDataSource* _rootDataSource;

}

@property (nonatomic,readonly) NSArray * dataSources; 
@property (assign,nonatomic) GKCollectionViewDataSource * selectedDataSource; 
@property (assign,nonatomic) bool usePlaceholder;                                            //@synthesize usePlaceholder=_usePlaceholder - In the implementation block
@property (assign,nonatomic) unsigned long long selectedDataSourceIndex; 
@property (nonatomic,retain) NSString * noContentTitle;                                      //@synthesize noContentTitle=_noContentTitle - In the implementation block
@property (nonatomic,retain) NSString * noContentMessage;                                    //@synthesize noContentMessage=_noContentMessage - In the implementation block
@property (nonatomic,retain) NSMutableArray * segmentInfos;                                  //@synthesize segmentInfos=_segmentInfos - In the implementation block
@property (nonatomic,retain) GKSegmentedSectionHeaderView * headerView;                      //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) GKCollectionViewPlaceholderView * placeholderView;              //@synthesize placeholderView=_placeholderView - In the implementation block
@property (nonatomic,retain) GKSegmentInfo * selectedSegmentInfo;                            //@synthesize selectedSegmentInfo=_selectedSegmentInfo - In the implementation block
@property (assign,nonatomic) bool waitingForAnimation;                                       //@synthesize waitingForAnimation=_waitingForAnimation - In the implementation block
@property (nonatomic,retain) GKCollectionViewDataSource * rootDataSource;                    //@synthesize rootDataSource=_rootDataSource - In the implementation block
-(void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3 ;
-(void)configureCollectionView:(id)arg1 ;
-(void)setNoContentTitle:(id)arg1 ;
-(void)setNoContentMessage:(id)arg1 ;
-(void)setPlaceholderView:(id)arg1 ;
-(id)placeholderView;
-(id)noContentTitle;
-(id)noContentMessage;
-(void)dataSource:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2 ;
-(void)dataSource:(id)arg1 didRemoveItemsAtIndexPaths:(id)arg2 ;
-(void)dataSource:(id)arg1 didRefreshItemsAtIndexPaths:(id)arg2 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(void)removeItemAtIndexPath:(id)arg1 ;
-(id)_gkDescriptionWithChildren:(int)arg1 ;
-(void)collectionViewDidBecomeInactive:(id)arg1 ;
-(id)indexPathsForItem:(id)arg1 ;
-(void)collectionViewWillBecomeActive:(id)arg1 ;
-(void)resetViewFactories;
-(bool)item:(id)arg1 matchesSearchTerms:(id)arg2 inSection:(long long)arg3 ;
-(unsigned long long)selectedDataSourceIndex;
-(void)setSelectedDataSourceIndex:(unsigned long long)arg1 reload:(bool)arg2 ;
-(void)dataSource:(id)arg1 didMoveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)dataSource:(id)arg1 didInsertSections:(id)arg2 ;
-(void)dataSource:(id)arg1 didRemoveSections:(id)arg2 ;
-(void)dataSource:(id)arg1 didRefreshSections:(id)arg2 ;
-(void)dataSource:(id)arg1 didMoveSection:(long long)arg2 toSection:(long long)arg3 ;
-(void)dataSourceDidReloadData:(id)arg1 ;
-(void)dataSource:(id)arg1 performBatchUpdate:(/*^block*/ id)arg2 complete:(/*^block*/ id)arg3 ;
-(id)collectionView:(id)arg1 evaluateFactoryForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 isRecursive:(bool)arg4 ;
-(id)dataSourceForSection:(unsigned long long)arg1 ;
-(unsigned long long)sectionForDataSource:(id)arg1 ;
-(bool)containsDataSource:(id)arg1 ;
-(id)createMetricsTreeWithGridLayout:(id)arg1 ;
-(void)selectedSegmentChanged:(id)arg1 ;
-(void)removeDataSource:(id)arg1 ;
-(void)dataSourceDidLoad;
-(void)segmentDidChangeLoadingState:(id)arg1 ;
-(id)initWithDataSources:(id)arg1 rootDataSource:(id)arg2 ;
-(void)addDataSource:(id)arg1 ;
-(void)setRootDataSource:(id)arg1 ;
-(id)selectedDataSource;
-(id)allTitles;
-(id)infoForDataSource:(id)arg1 ;
-(void)infosChanged;
-(void)setSelectedDataSourceIndex:(unsigned long long)arg1 ;
-(void)updatePlaceholderNotify:(bool)arg1 ;
-(void)setSelectedSegmentInfo:(id)arg1 ;
-(void)setWaitingForAnimation:(bool)arg1 ;
-(void)dataSourceWillLoad;
-(void)groupDidLoad:(id)arg1 ;
-(bool)waitingForAnimation;
-(id)initWithDataSources:(id)arg1 ;
-(void)hoistSegmentedFactoryToRoot;
-(id)infoForSegment:(long long)arg1 ;
-(id)dataSources;
-(void)setTitle:(id)arg1 forDataSource:(id)arg2 ;
-(void)setSelectedDataSource:(id)arg1 ;
-(bool)usePlaceholder;
-(void)setUsePlaceholder:(bool)arg1 ;
-(id)segmentInfos;
-(void)setSegmentInfos:(id)arg1 ;
-(id)selectedSegmentInfo;
-(id)rootDataSource;
-(void)dealloc;
-(id)description;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(id)headerView;
-(void)setHeaderView:(id)arg1 ;
@end

