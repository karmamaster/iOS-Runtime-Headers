/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchUserIdentitiesOperation : CKOperation {
    NSMutableSet *_discoveredUserIdentities;
    id /* block */ _fetchIdentitiesCompletionBlock;
    NSArray *_identities;
    id /* block */ _identityFetchedBlock;
    NSMutableDictionary *_lookupErrors;
    NSMutableDictionary *_lookupInfoToUserIdentities;
}

@property (nonatomic, retain) NSMutableSet *discoveredUserIdentities;
@property (nonatomic, copy) id /* block */ fetchIdentitiesCompletionBlock;
@property (nonatomic, retain) NSArray *identities;
@property (nonatomic, copy) id /* block */ identityFetchedBlock;
@property (nonatomic, retain) NSMutableDictionary *lookupErrors;
@property (nonatomic, retain) NSMutableDictionary *lookupInfoToUserIdentities;

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)discoveredUserIdentities;
- (id /* block */)fetchIdentitiesCompletionBlock;
- (void)fillOutOperationInfo:(id)arg1;
- (id)identities;
- (id /* block */)identityFetchedBlock;
- (id)init;
- (id)initWithIdentitiesToFetch:(id)arg1;
- (id)lookupErrors;
- (id)lookupInfoToUserIdentities;
- (void)performCKOperation;
- (void)setDiscoveredUserIdentities:(id)arg1;
- (void)setFetchIdentitiesCompletionBlock:(id /* block */)arg1;
- (void)setIdentities:(id)arg1;
- (void)setIdentityFetchedBlock:(id /* block */)arg1;
- (void)setLookupErrors:(id)arg1;
- (void)setLookupInfoToUserIdentities:(id)arg1;

@end
