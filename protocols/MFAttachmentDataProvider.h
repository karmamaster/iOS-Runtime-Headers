/* Generated by RuntimeBrowser.
 */

@protocol MFAttachmentDataProvider <NSObject>

@required

- (BOOL)fetchDataForAttachment:(MFAttachment *)arg1 withDataConsumer:(id <MFDataConsumer>)arg2 error:(id*)arg3;
- (NSData *)fetchLocalDataForAttachment:(MFAttachment *)arg1;
- (MFMessage *)messageForAttachment:(MFAttachment *)arg1;

@end
