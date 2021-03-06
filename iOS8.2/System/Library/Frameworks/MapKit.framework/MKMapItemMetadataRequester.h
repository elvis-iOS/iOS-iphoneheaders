/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:35 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/NSURLConnectionDelegate.h>

@class NSMapTable, ACAccountStore, ACAccountCredential, OAURLRequestSigner, NSString;

@interface MKMapItemMetadataRequester : NSObject <NSURLConnectionDelegate> {

	NSMapTable* _requestsForURLs;
	NSMapTable* _connectionsForURLs;
	NSMapTable* _dataForConnections;
	char _hasCheckedYelpAccountCredentials;
	ACAccountStore* _accountStore;
	ACAccountCredential* _yelpAccountCredentials;
	OAURLRequestSigner* _signer;

}

@property (nonatomic,readonly) OAURLRequestSigner * signer; 
@property (nonatomic,readonly) ACAccountCredential * yelpAccountCredentials; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)sendRequest:(id)arg1 ;
-(OAURLRequestSigner *)signer;
-(void)handleConnection:(id)arg1 withData:(id)arg2 error:(id)arg3 ;
-(ACAccountCredential *)yelpAccountCredentials;
-(void)cancelRequestsForBusinessMetadata:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(id)accountStore;
-(void)accountStoreDidChange:(id)arg1 ;
@end

