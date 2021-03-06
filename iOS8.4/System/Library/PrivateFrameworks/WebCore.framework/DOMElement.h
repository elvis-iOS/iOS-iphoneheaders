/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:46 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/DOMNode.h>

@class NSString, DOMCSSStyleDeclaration;

@interface DOMElement : DOMNode

@property (readonly) BOOL mf_isContainedInTable; 
@property (readonly) BOOL mf_isContainedInQuoteBlock; 
@property (readonly) DOMElement * mf_containingQuoteBlockElement; 
@property (copy,readonly) NSString * tagName; 
@property (readonly) DOMCSSStyleDeclaration * style; 
@property (readonly) int offsetLeft; 
@property (readonly) int offsetTop; 
@property (readonly) int offsetWidth; 
@property (readonly) int offsetHeight; 
@property (readonly) int clientLeft; 
@property (readonly) int clientTop; 
@property (readonly) int clientWidth; 
@property (readonly) int clientHeight; 
@property (assign) int scrollLeft; 
@property (assign) int scrollTop; 
@property (readonly) int scrollWidth; 
@property (readonly) int scrollHeight; 
@property (readonly) DOMElement * offsetParent; 
@property (copy) NSString * className; 
@property (readonly) DOMElement * firstElementChild; 
@property (readonly) DOMElement * lastElementChild; 
@property (readonly) DOMElement * previousElementSibling; 
@property (readonly) DOMElement * nextElementSibling; 
@property (readonly) unsigned childElementCount; 
@property (copy,readonly) NSString * innerText; 
+(BOOL)isRichTextStyle:(id)arg1 ;
+(id)_DOMElementFromJSContext:(OpaqueJSContextRef)arg1 value:(OpaqueJSValueRef)arg2 ;
-(void)mf_stripCSSStyle;
-(BOOL)isRichTextElementType;
-(BOOL)hasMarginsOfZero;
-(void)recursivelyRemoveMailAttributes;
-(DOMElement *)mf_containingQuoteBlockElement;
-(id)mf_computedBackgroundColor;
-(BOOL)isRichTextElement;
-(int)mf_quoteLevelDelta;
-(BOOL)mf_isContainedInTable;
-(BOOL)mf_isContainedInQuoteBlock;
-(BOOL)mf_isContainedInAnyElementInSet:(id)arg1 ;
-(BOOL)mf_hasBackgroundColorOrImage;
-(BOOL)selectable;
-(BOOL)hasCustomLineHeight;
-(BOOL)exceedsStructuralComplexity:(int)arg1 ;
-(BOOL)isHidden;
-(BOOL)inDocument;
-(BOOL)touchCalloutEnabled;
-(id)tapHighlightColor;
-(void)getTextWritingDirection:(long long*)arg1 override:(BOOL*)arg2 ;
-(int)structuralComplexityContribution;
-(CTFontRef)_font;
-(BOOL)isFocused;
-(id)_getURLAttribute:(id)arg1 ;
-(DOMCSSStyleDeclaration *)style;
-(void)setAttribute:(id)arg1 value:(id)arg2 ;
-(NSString *)innerText;
-(NSString *)tagName;
-(id)getAttribute:(id)arg1 ;
-(int)scrollLeft;
-(int)scrollTop;
-(int)scrollWidth;
-(int)scrollHeight;
-(void)setScrollLeft:(int)arg1 ;
-(void)setScrollTop:(int)arg1 ;
-(NSString *)className;
-(id)getElementsByTagName:(id)arg1 ;
-(int)offsetWidth;
-(int)offsetHeight;
-(DOMElement *)firstElementChild;
-(DOMElement *)nextElementSibling;
-(void)remove;
-(void)blur;
-(void)focus;
-(id)getElementsByTagNameNS:(id)arg1 localName:(id)arg2 ;
-(id)getElementsByTagNameNS:(id)arg1 :(id)arg2 ;
-(id)getElementsByClassName:(id)arg1 ;
-(id)querySelector:(id)arg1 ;
-(id)querySelectorAll:(id)arg1 ;
-(int)offsetLeft;
-(int)offsetTop;
-(int)clientLeft;
-(int)clientTop;
-(int)clientWidth;
-(int)clientHeight;
-(DOMElement *)offsetParent;
-(void)setClassName:(NSString *)arg1 ;
-(id)classList;
-(DOMElement *)lastElementChild;
-(DOMElement *)previousElementSibling;
-(unsigned)childElementCount;
-(id)webkitRegionOverset;
-(void)setAttribute:(id)arg1 :(id)arg2 ;
-(void)removeAttribute:(id)arg1 ;
-(id)getAttributeNode:(id)arg1 ;
-(id)setAttributeNode:(id)arg1 ;
-(id)removeAttributeNode:(id)arg1 ;
-(id)getAttributeNS:(id)arg1 localName:(id)arg2 ;
-(id)getAttributeNS:(id)arg1 :(id)arg2 ;
-(void)setAttributeNS:(id)arg1 qualifiedName:(id)arg2 value:(id)arg3 ;
-(void)setAttributeNS:(id)arg1 :(id)arg2 :(id)arg3 ;
-(void)removeAttributeNS:(id)arg1 localName:(id)arg2 ;
-(void)removeAttributeNS:(id)arg1 :(id)arg2 ;
-(id)getAttributeNodeNS:(id)arg1 localName:(id)arg2 ;
-(id)getAttributeNodeNS:(id)arg1 :(id)arg2 ;
-(id)setAttributeNodeNS:(id)arg1 ;
-(BOOL)hasAttribute:(id)arg1 ;
-(BOOL)hasAttributeNS:(id)arg1 localName:(id)arg2 ;
-(BOOL)hasAttributeNS:(id)arg1 :(id)arg2 ;
-(void)scrollIntoView:(BOOL)arg1 ;
-(void)scrollIntoViewIfNeeded:(BOOL)arg1 ;
-(void)scrollByLines:(int)arg1 ;
-(void)scrollByPages:(int)arg1 ;
-(BOOL)matches:(id)arg1 ;
-(BOOL)webkitMatchesSelector:(id)arg1 ;
@end

