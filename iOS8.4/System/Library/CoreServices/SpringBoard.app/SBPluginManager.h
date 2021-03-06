/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface SBPluginManager : NSObject {

	NSString* _pluginsDirectory;
	NSMutableDictionary* _plugins;

}
+(id)sharedInstance;
-(void)loadAllLaunchPlugins;
-(id)springBoardPluginsDirectory;
-(Class)loadPluginBundle:(id)arg1 ;
-(Class)loadPluginNamed:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

