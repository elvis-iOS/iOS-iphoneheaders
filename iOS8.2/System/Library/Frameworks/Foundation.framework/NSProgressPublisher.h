/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:32 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSProgressPublisher <NSObject>
@required
-(oneway void)prioritize;
-(oneway void)startProvidingValuesWithInitialAcceptor:(/*^block*/id)arg1;
-(oneway void)stopProvidingValues;
-(oneway void)appWithBundleID:(id)arg1 didAcknowledgeWithSuccess:(char)arg2;
-(oneway void)cancel;
-(oneway void)pause;

@end
