/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:28 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/DataClassMigrators/MobileMailMigrator.migrator/MobileMailMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMailMigrator/MobileMailMigrator-Structs.h>
#import <DataMigration/DataClassMigrator.h>

@interface MobileMailMigrator : DataClassMigrator
-(BOOL)removeContentIndex;
-(BOOL)removeUnusedPreferences;
-(BOOL)migratePreferencesToContainer;
-(BOOL)removeOldFormatAutosaveMessages;
-(BOOL)migrateUserAttachmentScalePeference;
-(BOOL)migrateAttachmentsProtectionClass;
-(BOOL)migrateUbiquitousKeyValueStoreToContainer;
-(BOOL)migrateMessageLibrary;
-(BOOL)_migratePreferencesToContainerWithDomain:(CFStringRef)arg1 guardKey:(CFStringRef)arg2 ;
-(id)dataClassName;
-(BOOL)performMigration;
-(float)estimatedDuration;
-(float)migrationProgress;
-(void)setVersion:(unsigned long long)arg1 ;
-(long long)currentVersion;
@end

