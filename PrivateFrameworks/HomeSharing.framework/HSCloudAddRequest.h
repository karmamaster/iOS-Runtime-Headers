/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSCloudAddRequest : HSRequest {
    NSMutableArray *_adamIDs;
    NSMutableArray *_playlistGlobalIDs;
    NSMutableArray *_querySpecifierPredicates;
}

@property (nonatomic, readonly) NSArray *adamIDs;
@property (nonatomic, readonly) NSArray *playlistGlobalIDs;

+ (id)requestWithDatabaseID:(unsigned int)arg1 databaseRevision:(unsigned int)arg2 adamIDs:(id)arg3;
+ (id)requestWithDatabaseID:(unsigned int)arg1 databaseRevision:(unsigned int)arg2 playlistGlobalIDs:(id)arg3;

- (void).cxx_destruct;
- (id)_querySpecifierString;
- (id)adamIDs;
- (void)addAdamID:(unsigned int)arg1;
- (void)addPlaylistGlobalID:(id)arg1;
- (id)description;
- (id)initWithDatabaseID:(unsigned int)arg1 databaseRevision:(unsigned int)arg2;
- (id)playlistGlobalIDs;
- (id)requestURLForBaseURL:(id)arg1 sessionID:(unsigned int)arg2;
- (double)timeoutInterval;

@end
