/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:20:12 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UIView.h>

@interface WKPDFPageNumberIndicator : UIView {

	RetainPtr<UILabel>* _label;
	RetainPtr<_UIBackdropView>* _backdropView;
	RetainPtr<NSTimer>* _timer;
	BOOL _hasValidPageCountAndCurrentPage;
	unsigned _currentPageNumber;
	unsigned _pageCount;

}

@property (assign,nonatomic) unsigned currentPageNumber;              //@synthesize currentPageNumber=_currentPageNumber - In the implementation block
@property (assign,nonatomic) unsigned pageCount;                      //@synthesize pageCount=_pageCount - In the implementation block
-(void)hide;
-(void)show;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_updateLabel;
-(unsigned)pageCount;
-(void)setPageCount:(unsigned)arg1 ;
-(void)_makeRoundedCorners;
-(void)setCurrentPageNumber:(unsigned)arg1 ;
-(void)moveToPoint:(CGPoint)arg1 animated:(char)arg2 ;
-(unsigned)currentPageNumber;
-(void)hide:(id)arg1 ;
@end

