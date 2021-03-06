/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:18 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/_MFAddressBookPropertySearchOperation.h>
#import <MessageUI/ABPredicateDelegate.h>

@class NSString;

@interface MFPhoneSearchOperation : _MFAddressBookPropertySearchOperation <ABPredicateDelegate> {

	CFStringRef _countryCode;
	CFArrayRef _uids;
	CFArrayRef _addresses;
	CFArrayRef _identifiers;
	NSString* _searchTerm;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)property;
-(BOOL)predicateShouldContinue:(id)arg1 ;
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 ;
-(CFArrayRef)copyArrayOfUIDsMatchingText:(id)arg1 addresses:(const _CFArray*)arg2 identifiers:(const _CFArray*)arg3 ;
-(void)dealloc;
@end

