/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>
#import <CoreFoundation/NSCoding.h>

@class NSString;

@interface ASFolder : ASItem <NSCoding> {

	int _folderType;
	NSString* _serverID;
	NSString* _parentID;
	NSString* _displayName;
	int _changeType;
	BOOL _renameOnCollision;
	int _localID;

}

@property (retain) NSString * serverID;                 //@synthesize serverID=_serverID - In the implementation block
@property (retain) NSString * parentID;                 //@synthesize parentID=_parentID - In the implementation block
@property (retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (readonly) int folderType;                    //@synthesize folderType=_folderType - In the implementation block
@property (readonly) int dataclass; 
@property (readonly) int localID;                       //@synthesize localID=_localID - In the implementation block
@property (assign) int changeType;                      //@synthesize changeType=_changeType - In the implementation block
@property (assign) BOOL renameOnCollision;              //@synthesize renameOnCollision=_renameOnCollision - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)conciseDescription;
-(id)parentID;
-(void)setParentID:(id)arg1 ;
-(void)setChangeType:(int)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)displayName;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(void)setServerID:(id)arg1 ;
-(int)dataclass;
-(int)folderType;
-(id)serverID;
-(id)_folderTypeString;
-(void)setFolderTypeNumber:(id)arg1 ;
-(BOOL)mayContainDataclasses:(int)arg1 ;
-(id)initWithFolderType:(int)arg1 serverID:(id)arg2 parentID:(id)arg3 displayName:(id)arg4 localID:(int)arg5 ;
-(int)localID;
-(BOOL)renameOnCollision;
-(void)setRenameOnCollision:(BOOL)arg1 ;
-(int)changeType;
-(void)setDisplayName:(id)arg1 ;
@end

