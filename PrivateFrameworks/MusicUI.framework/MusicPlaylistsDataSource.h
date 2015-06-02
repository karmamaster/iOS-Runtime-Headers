/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@interface MusicPlaylistsDataSource : MusicQueryDataSource {
    NSObject<OS_dispatch_queue> *_cacheQueue;
    NSCache *_cachedCounts;
    NSCache *_cachedDurations;
    NSCache *_cachedRepresentativeItems;
    BOOL _hasParentPlaylist;
}

- (void).cxx_destruct;
- (void)_bfsNonFolderPlaylistsWithRootPlaylist:(id)arg1 visitedPlaylistPIDs:(id)arg2 stop:(BOOL*)arg3 visitor:(id /* block */)arg4;
- (void)_breadthFirstVisitNonFolderPlaylistsWithRootPlaylist:(id)arg1 visitor:(id /* block */)arg2;
- (void)_invalidateCalculatedEntities;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (id)_representativePlaylistForEntityAtIndex:(unsigned int)arg1;
- (unsigned int)cachedCountForEntityAtIndex:(unsigned int)arg1;
- (double)cachedDurationForEntityAtIndex:(unsigned int)arg1;
- (id)cachedRepresentativeItemForEntityAtIndex:(unsigned int)arg1;
- (BOOL)canEditEntityAtIndex:(unsigned int)arg1;
- (unsigned int)countForEntityAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (void)deleteEntityAtIndex:(unsigned int)arg1;
- (double)durationForEntityAtIndex:(unsigned int)arg1;
- (int)editingTypeForEntityAtIndex:(unsigned int)arg1;
- (id)entityCountFormat;
- (BOOL)entityIsNowPlayingAtIndex:(unsigned int)arg1;
- (id)initWithQuery:(id)arg1 entityType:(int)arg2;
- (BOOL)isFolderForEntityAtIndex:(unsigned int)arg1;
- (id)representativeItemForEntityAtIndex:(unsigned int)arg1;
- (void)resetCaches;
- (BOOL)showsEntityCountFooter;
- (BOOL)showsIndexBar;

@end
