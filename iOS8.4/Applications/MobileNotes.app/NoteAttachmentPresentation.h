/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:50 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <MobileNotes/NotesCIDDataProvider.h>

@class NSString, NSURL, NSError, NSData;

@interface NoteAttachmentPresentation : NSObject <NotesCIDDataProvider> {

	char _image;
	NSString* _contentID;
	NSURL* _contentIDURL;
	NSURL* _dataFileURL;
	NSString* _mimeType;
	NSString* _filename;
	NSError* _dataFileURLError;
	NSString* _contentIDURLAbsoluteString;
	NSData* _data;
	/*^block*/id _iconPNGDataProvider;
	CGSize _iconSize;

}

@property (nonatomic,copy) NSString * contentID;                               //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,copy) NSURL * contentIDURL;                               //@synthesize contentIDURL=_contentIDURL - In the implementation block
@property (nonatomic,copy) NSURL * dataFileURL;                                //@synthesize dataFileURL=_dataFileURL - In the implementation block
@property (nonatomic,copy) NSString * mimeType;                                //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,copy,readonly) NSString * filename;                       //@synthesize filename=_filename - In the implementation block
@property (nonatomic,retain) NSError * dataFileURLError;                       //@synthesize dataFileURLError=_dataFileURLError - In the implementation block
@property (nonatomic,copy) NSString * contentIDURLAbsoluteString;              //@synthesize contentIDURLAbsoluteString=_contentIDURLAbsoluteString - In the implementation block
@property (assign,getter=isImage,nonatomic) char image;                        //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSData * data;                                    //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id iconPNGDataProvider;                             //@synthesize iconPNGDataProvider=_iconPNGDataProvider - In the implementation block
@property (assign,nonatomic) CGSize iconSize;                                  //@synthesize iconSize=_iconSize - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sourceURLForElement:(id)arg1 ;
+(id)presentationSelector;
+(id)attachmentPresentationsForAttachments:(id)arg1 ;
+(void)prepareDOMDocumentForPresentation:(id)arg1 withAttachmentPresentations:(id)arg2 occurences:(id*)arg3 ;
+(void)prepareDOMDocumentForSerialization:(id)arg1 withAttachmentPresentations:(id)arg2 newPresentationProvider:(/*^block*/id)arg3 leftoverPresentations:(id*)arg4 ;
+(id)attachmentResourceURLsMentionedByPresentationDOMDocument:(id)arg1 ;
+(void)clearDOMDocumentAttachments:(id)arg1 ;
-(char)getData:(id*)arg1 mimeType:(id*)arg2 error:(id*)arg3 ;
-(id)initWithNoteAttachmentObject:(id)arg1 ;
-(void)updateContentIDURL;
-(NSURL *)dataFileURL;
-(NSError *)dataFileURLError;
-(id)iconPNGDataProvider;
-(void)setContentIDURL:(NSURL *)arg1 ;
-(void)setContentIDURLAbsoluteString:(NSString *)arg1 ;
-(void)setIconPNGDataProvider:(id)arg1 ;
-(void)setIconSize:(CGSize)arg1 ;
-(NSString *)contentIDURLAbsoluteString;
-(NSURL *)contentIDURL;
-(id)createPresentationNodeForDOMDocument:(id)arg1 ;
-(id)createSerializationNodeForDOMDocument:(id)arg1 ;
-(id)transformNodeForPresentation:(id)arg1 ;
-(void)transformNodeForSerialization:(id)arg1 ;
-(char)getPresentationData:(id*)arg1 mimeType:(id*)arg2 error:(id*)arg3 ;
-(id)initWithData:(id)arg1 contentID:(id)arg2 mimeType:(id)arg3 filename:(id)arg4 ;
-(void)setDataFileURL:(NSURL *)arg1 ;
-(void)setDataFileURLError:(NSError *)arg1 ;
-(void)setImage:(char)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSString *)mimeType;
-(void)clearCache;
-(NSString *)filename;
-(void)setContentID:(NSString *)arg1 ;
-(NSString *)contentID;
-(void)setMimeType:(NSString *)arg1 ;
-(char)isImage;
-(CGSize)iconSize;
@end
