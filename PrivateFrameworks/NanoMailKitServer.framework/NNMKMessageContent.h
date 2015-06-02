/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKMessageContent : NSObject <NSSecureCoding> {
    NSArray *_attachments;
    BOOL _mainAlternativeValid;
    NSString *_messageId;
    BOOL _partiallyLoaded;
    NSData *_textData;
}

@property (nonatomic, retain) NSArray *attachments;
@property (nonatomic) BOOL mainAlternativeValid;
@property (nonatomic, retain) NSString *messageId;
@property (nonatomic) BOOL partiallyLoaded;
@property (nonatomic, retain) NSData *textData;

+ (id)classesForUnarchivingTextData;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attachments;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)mainAlternativeValid;
- (id)messageId;
- (BOOL)partiallyLoaded;
- (void)setAttachments:(id)arg1;
- (void)setMainAlternativeValid:(BOOL)arg1;
- (void)setMessageId:(id)arg1;
- (void)setPartiallyLoaded:(BOOL)arg1;
- (void)setTextData:(id)arg1;
- (id)textData;

@end
