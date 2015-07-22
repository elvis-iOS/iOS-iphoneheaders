/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:11 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSMutableArray, NSArray;

@interface UIPrintPageRenderer : NSObject {

	double _headerHeight;
	double _footerHeight;
	CGRect _paperRect;
	CGRect _printableRect;
	NSMutableArray* _printFormatters;
	CGContextRef _printContext;

}

@property (assign,nonatomic) double headerHeight;                  //@synthesize headerHeight=_headerHeight - In the implementation block
@property (assign,nonatomic) double footerHeight;                  //@synthesize footerHeight=_footerHeight - In the implementation block
@property (assign,nonatomic) CGRect paperRect;                     //@synthesize paperRect=_paperRect - In the implementation block
@property (assign,nonatomic) CGRect printableRect;                 //@synthesize printableRect=_printableRect - In the implementation block
@property (nonatomic,copy) NSArray * printFormatters;              //@synthesize printFormatters=_printFormatters - In the implementation block
-(void)dealloc;
-(long long)numberOfPages;
-(CGRect)printableRect;
-(void)_removePrintFormatter:(id)arg1 ;
-(double)headerHeight;
-(double)footerHeight;
-(CGRect)paperRect;
-(void)setPaperRect:(CGRect)arg1 ;
-(void)setPrintableRect:(CGRect)arg1 ;
-(void)addPrintFormatter:(id)arg1 startingAtPageAtIndex:(long long)arg2 ;
-(void)prepareForDrawingPages:(NSRange)arg1 ;
-(BOOL)_startPrintContext:(id)arg1 printSettings:(id)arg2 ;
-(void)_drawPage:(long long)arg1 ;
-(void)_endPrintContext:(id)arg1 success:(BOOL)arg2 ;
-(long long)_maxFormatterPage;
-(void)drawHeaderForPageAtIndex:(long long)arg1 inRect:(CGRect)arg2 ;
-(void)drawContentForPageAtIndex:(long long)arg1 inRect:(CGRect)arg2 ;
-(void)drawPrintFormatter:(id)arg1 forPageAtIndex:(long long)arg2 ;
-(void)drawFooterForPageAtIndex:(long long)arg1 inRect:(CGRect)arg2 ;
-(void)drawPageAtIndex:(long long)arg1 inRect:(CGRect)arg2 ;
-(void)setPrintFormatters:(NSArray *)arg1 ;
-(id)printFormattersForPageAtIndex:(long long)arg1 ;
-(void)setHeaderHeight:(double)arg1 ;
-(void)setFooterHeight:(double)arg1 ;
-(NSArray *)printFormatters;
@end
