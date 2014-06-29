/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface _UIAppearanceCustomizableClassInfo : NSObject {

	bool _isGuideClassRoot;
	bool _isCustomizableViewClassRoot;
	NSString* _appearanceNodeKey;
	unsigned long long _hash;
	Class _customizableViewClass;
	Class _guideClass;

}

@property (nonatomic,readonly) Class _customizableViewClass;               //@synthesize customizableViewClass=_customizableViewClass - In the implementation block
@property (nonatomic,readonly) Class _guideClass;                          //@synthesize guideClass=_guideClass - In the implementation block
@property (nonatomic,readonly) NSString * _appearanceNodeKey;              //@synthesize appearanceNodeKey=_appearanceNodeKey - In the implementation block
@property (nonatomic,readonly) unsigned long long _hash;                   //@synthesize hash=_hash - In the implementation block
+(id)_customizableClassInfoForViewClass:(Class)arg1 withGuideClass:(Class)arg2 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(Class)_customizableViewClass;
-(id)_appearanceNodeKey;
-(Class)_guideClass;
-(id)_superClassInfo;
-(unsigned long long)_hash;
@end
