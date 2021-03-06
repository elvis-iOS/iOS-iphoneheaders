/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MFSearchAlternativesGenerator.h>

@class NSRegularExpression, NSArray;

@interface MFSearchAlternativesTimePeriodGenerator : MFSearchAlternativesGenerator {

	NSRegularExpression* _relativeDatesRegularExpression;
	NSArray* _dateFormatters;

}
-(void)generateAlternativesForPhrase:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
-(id)_relativeDatesRegularExpression;
-(id)_addFormat:(id)arg1 units:(unsigned)arg2 to:(id)arg3 usedFormatStrings:(id)arg4 ;
-(id)_addLocalizedFormat:(id)arg1 units:(unsigned)arg2 to:(id)arg3 usedFormatStrings:(id)arg4 ;
-(id)_dateFormatters;
-(id)_relativeAlternativesForPhrase:(id)arg1 ;
-(id)_dateFormatterAlternativesForPhrase:(id)arg1 ;
-(void)dealloc;
@end

