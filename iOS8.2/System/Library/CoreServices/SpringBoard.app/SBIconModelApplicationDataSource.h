/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:19 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBIconModelApplicationDataSource <NSObject>
@required
-(id)defaultIconState;
-(char)updateAppIconVisibilityOverridesShowing:(id*)arg1 hiding:(id*)arg2;
-(int)appVisibilityOverrideForBundleIdentifier:(id)arg1;
-(char)isNewsstandSupported;
-(char)isNewsstandEnabled;
-(id)firstPageLeafIdentifiers;
-(id)allApplications;

@end
