/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:45 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PassKit/PassKit-Structs.h>
@class PKPassFieldTemplate, NSMutableArray;

@interface PKPassBucketTemplate : NSObject {

	char _sitsOnStripImage;
	int _bucketAlignment;
	float _minFieldPadding;
	PKPassFieldTemplate* _defaultFieldTemplate;
	unsigned _maxFields;
	NSMutableArray* _fieldTemplates;
	CGRect _bucketRect;

}

@property (assign,nonatomic) int bucketAlignment;                                     //@synthesize bucketAlignment=_bucketAlignment - In the implementation block
@property (assign,nonatomic) CGRect bucketRect;                                       //@synthesize bucketRect=_bucketRect - In the implementation block
@property (assign,nonatomic) float minFieldPadding;                                   //@synthesize minFieldPadding=_minFieldPadding - In the implementation block
@property (nonatomic,retain) PKPassFieldTemplate * defaultFieldTemplate;              //@synthesize defaultFieldTemplate=_defaultFieldTemplate - In the implementation block
@property (assign,nonatomic) unsigned maxFields;                                      //@synthesize maxFields=_maxFields - In the implementation block
@property (assign,nonatomic) char sitsOnStripImage;                                   //@synthesize sitsOnStripImage=_sitsOnStripImage - In the implementation block
@property (nonatomic,retain) NSMutableArray * fieldTemplates;                         //@synthesize fieldTemplates=_fieldTemplates - In the implementation block
-(PKPassFieldTemplate *)defaultFieldTemplate;
-(void)setBucketAlignment:(int)arg1 ;
-(void)setBucketRect:(CGRect)arg1 ;
-(void)setMinFieldPadding:(float)arg1 ;
-(void)setMaxFields:(unsigned)arg1 ;
-(void)addFieldTemplate:(id)arg1 ;
-(CGRect)bucketRect;
-(void)setDefaultFieldTemplate:(PKPassFieldTemplate *)arg1 ;
-(unsigned)maxFields;
-(id)templateForFieldAtIndex:(unsigned)arg1 ;
-(int)bucketAlignment;
-(float)minFieldPadding;
-(NSMutableArray *)fieldTemplates;
-(void)setFieldTemplates:(NSMutableArray *)arg1 ;
-(char)sitsOnStripImage;
-(void)setSitsOnStripImage:(char)arg1 ;
-(void)dealloc;
@end

