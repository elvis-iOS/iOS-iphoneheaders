/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ADCalendarJSO_Bindings <JSExport>
@property (nonatomic,retain) NSDictionary * event; 
@property (nonatomic,retain) JSValue * listener; 
@property (assign,nonatomic) JSValue * rect; 
@optional
-(void)presentComposerWithEventProperties:(id)arg1 listener:(id)arg2 popoverRect:(id)arg3 __JS_EXPORT_AS__presentComposer:(id)arg4;

@required
-(void)presentComposerWithEventProperties:(id)arg1 listener:(id)arg2 popoverRect:(id)arg3;
-(void)setListener:(id)arg1;
-(id)rect;
-(void)setRect:(id)arg1;
-(void)setEvent:(id)arg1;
-(id)event;
-(id)listener;
@end

