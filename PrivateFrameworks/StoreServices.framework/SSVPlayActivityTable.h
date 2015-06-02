/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPlayActivityTable : NSObject {
    SSSQLiteDatabase *_database;
}

@property (nonatomic) unsigned long long currentEventsRevision;
@property (nonatomic, readonly, copy) NSString *eventsRevisionVersionToken;

+ (id)_eventsDatabaseTableName;
+ (id)_propertiesDatabaseTableName;
+ (BOOL)_setupDatabase:(id)arg1;
+ (id)databasePath;

- (void).cxx_destruct;
- (void)_getPlayActivityEvents:(id*)arg1 relevantRevisionsIndexSet:(id*)arg2 withStartRevision:(unsigned long long)arg3 endRevision:(unsigned long long)arg4 storeAccountID:(unsigned long long)arg5 shouldFilterStoreAccountID:(BOOL)arg6 additionalRevisionsIndexSet:(id)arg7 error:(id*)arg8;
- (BOOL)_removeDatabaseReturningError:(id*)arg1;
- (id)_revisionsIndexSetUsingPersisentIDGenerationBlock:(id /* block */)arg1 count:(unsigned int)arg2;
- (BOOL)_setValue:(id)arg1 forDatabasePropertyKey:(id)arg2;
- (id)_valueForDatabasePropertyKey:(id)arg1;
- (unsigned long long)currentEventsRevision;
- (id)eventsRevisionVersionToken;
- (void)getPlayActivityEvents:(id*)arg1 relevantRevisionsIndexSet:(id*)arg2 withStartRevision:(unsigned long long)arg3 endRevision:(unsigned long long)arg4 additionalRevisionsIndexSet:(id)arg5 error:(id*)arg6;
- (void)getPlayActivityEvents:(id*)arg1 relevantRevisionsIndexSet:(id*)arg2 withStartRevision:(unsigned long long)arg3 endRevision:(unsigned long long)arg4 storeAccountID:(unsigned long long)arg5 additionalRevisionsIndexSet:(id)arg6 error:(id*)arg7;
- (id)init;
- (BOOL)insertPlayActivityEvent:(id)arg1 withRevision:(unsigned long long)arg2 returningError:(id*)arg3;
- (void)performTransactionWithBlock:(id /* block */)arg1;
- (BOOL)removePlayActivityEventsUpToRevision:(unsigned long long)arg1 returningError:(id*)arg2;
- (id)revisionsIndexSetForPlayActivityEventPersistentIDs:(id)arg1;
- (id)revisionsIndexSetForPlayActivityEvents:(id)arg1;
- (void)setCurrentEventsRevision:(unsigned long long)arg1;

@end
