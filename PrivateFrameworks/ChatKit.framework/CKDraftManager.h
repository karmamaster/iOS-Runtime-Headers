/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKDraftManager : NSObject {
    NSMutableDictionary *_cachedDrafts;
    NSMutableSet *_dirtyDraftIDs;
    NSArray *_pendingRecipients;
}

+ (id)sharedInstance;

- (void)_clearDraftForConversation:(id)arg1;
- (id)_draftForKey:(id)arg1;
- (id)_pendingRecipients;
- (id)_pendingRecipientsURL;
- (void)_setDraft:(id)arg1 forKey:(id)arg2;
- (void)_setPendingRecipients:(id)arg1;
- (void)clearDraftForPendingConversation;
- (void)dealloc;
- (id)draftForConversation:(id)arg1;
- (id)draftForPendingConversationWithRecipients:(id*)arg1;
- (void)flushCache;
- (void)save:(BOOL)arg1;
- (void)setDraft:(id)arg1 forConversation:(id)arg2;
- (void)setDraftForPendingConversation:(id)arg1 withRecipients:(id)arg2;

@end
