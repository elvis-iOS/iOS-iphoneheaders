/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol LabelManagerDelegate <NSObject>
@required
-(void)labelManager:(LabelManager*)arg1 setNeedsLayout:(bool)arg2;
-(void)labelManager:(LabelManager*)arg1 setNeedsDisplay:(bool)arg2;
-(void)labelManager:(LabelManager*)arg1 selectedLabelMarkerWillDisappear:(id)arg2;
-(void)labelManager:(LabelManager*)arg1 pendingArtworkIsReady:(bool)arg2;
@end

