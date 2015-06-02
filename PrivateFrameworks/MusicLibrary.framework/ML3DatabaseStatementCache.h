/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseStatementCache : NSObject {
    unsigned int _cacheSize;
    ML3StatementCacheList *_nodeList;
    NSMutableDictionary *_statementsDictionary;
}

@property (nonatomic, readonly) unsigned int cacheSize;

- (void).cxx_destruct;
- (id)allStatements;
- (unsigned int)cacheSize;
- (void)cacheStatement:(id)arg1;
- (id)cachedStatementForSQL:(id)arg1;
- (void)clearCache;
- (void)dealloc;
- (id)initWithCacheSize:(unsigned int)arg1;

@end
