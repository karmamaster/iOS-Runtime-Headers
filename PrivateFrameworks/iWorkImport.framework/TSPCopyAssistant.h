/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPCopyAssistant : TSPPasteboardWriteAssistant {
    BOOL _didAttemptToCopy;
    TSPPasteboard *_pasteboard;
}

- (void).cxx_destruct;
- (void)copyToPasteboard;
- (void)copyToPasteboardIsSmartCopy:(BOOL)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithPasteboard:(id)arg1 sourceContext:(id)arg2;
- (void)loadData;

@end
