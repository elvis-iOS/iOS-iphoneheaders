/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:42 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/RAPTablePartSection.h>

@class NSString, RAPMapFeaturePickerViewController;

@interface RAPLocationPickerMapSection : RAPTablePartSection {

	NSString* _prompt;
	SCD_Struct_RA6 _initialMapRect;
	SCD_Struct_RA6 _placeDisplayMapRect;
	/*^block*/id _changeHandler;
	RAPMapFeaturePickerViewController* _coordinatePicker;
	SCD_Struct_RA2 _selectedCoordinate;

}

@property (nonatomic,readonly) SCD_Struct_RA2 selectedCoordinate;              //@synthesize selectedCoordinate=_selectedCoordinate - In the implementation block
-(id)cellForRowAtIndex:(int)arg1 ;
-(void)didSelectCellForRowAtIndex:(int)arg1 tableIndexPath:(id)arg2 ;
-(void)registerReuseIdentifiersForCells;
-(SCD_Struct_RA2)selectedCoordinate;
-(id)initWithLocationPickerPrompt:(id)arg1 initialPickingMapRect:(SCD_Struct_RA6)arg2 initialPlaceDisplayMapRect:(SCD_Struct_RA6)arg3 changeHandler:(/*^block*/id)arg4 ;
-(id)_coordinatePicker;
-(float)heightForRowAtIndex:(int)arg1 ;
-(int)rowsCount;
@end

