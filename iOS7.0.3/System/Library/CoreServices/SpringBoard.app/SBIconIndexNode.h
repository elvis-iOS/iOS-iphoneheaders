/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol SBIconIndexNode <NSObject>
@required
-(id)nodeIdentifier;
-(BOOL)containsNodeIdentifier:(id)arg1;
-(void)addNodeObserver:(id)arg1;
-(void)removeNodeObserver:(id)arg1;
-(id)containedNodeIdentifiers;
-(id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
-(id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned)arg2;
-(id)nodeDescriptionWithPrefix:(id)arg1;
@end

