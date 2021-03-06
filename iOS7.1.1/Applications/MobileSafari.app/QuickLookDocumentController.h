/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/QuickLookBannerViewDelegate.h>
#import <UIKit/UIDocumentInteractionControllerDelegate.h>
#import <UIKit/UIDocumentInteractionControllerDelegatePrivate.h>

@class QuickLookDocumentView, TabDocument, UIDocumentInteractionController;

@interface QuickLookDocumentController : NSObject <QuickLookBannerViewDelegate, UIDocumentInteractionControllerDelegate, UIDocumentInteractionControllerDelegatePrivate> {

	QuickLookDocumentView* _documentView;
	TabDocument* _tabDocument;
	UIDocumentInteractionController* _documentInteractionController;
	BOOL _isShowingQuickLookOpenInMenu;

}

@property (nonatomic,retain) UIDocumentInteractionController * documentInteractionController;              //@synthesize documentInteractionController=_documentInteractionController - In the implementation block
@property (nonatomic,retain) QuickLookDocumentView * documentView;                                         //@synthesize documentView=_documentView - In the implementation block
-(id)initWithTabDocument:(id)arg1 ;
-(id)_urlForQuickLookDocument;
-(void)openInApplication:(id)arg1 ;
-(void)openInOtherApplications:(id)arg1 ;
-(void)dealloc;
-(id)documentView;
-(void)setDocumentView:(id)arg1 ;
-(id)documentInteractionController;
-(void)setDocumentInteractionController:(id)arg1 ;
-(void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1 ;
-(id)documentProxyForPreview:(id)arg1 name:(id)arg2 UTI:(id)arg3 ;
-(void)documentInteractionControllerWillPresentOpenInMenu:(id)arg1 ;
-(void)documentInteractionController:(id)arg1 willBeginSendingToApplication:(id)arg2 ;
@end

