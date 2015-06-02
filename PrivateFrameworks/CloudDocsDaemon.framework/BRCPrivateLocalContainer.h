/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCPrivateLocalContainer : BRCLocalContainer {
    BRContainer *_containerMetadata;
    NSString *_containerMetadataEtag;
    BOOL _containerMetadataNeedsSyncUp;
    NSMutableArray *_syncBarriers;
}

@property (nonatomic, readonly) BRContainer *containerMetadata;
@property (nonatomic, retain) NSString *containerMetadataEtag;
@property (nonatomic) BOOL containerMetadataNeedsSyncUp;
@property (nonatomic, readonly) BRCRelativePath *documentsPath;
@property (nonatomic, readonly) BOOL isPrivateContainer;
@property (nonatomic, readonly) BOOL isSharedContainer;
@property (nonatomic, readonly) BRCPrivateServerZone *privateZone;

- (void).cxx_destruct;
- (unsigned int)_activateState:(unsigned int)arg1 origState:(unsigned int)arg2;
- (void)_checkResultSetIsEmpty:(id)arg1 logToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg2 reason:(id)arg3 result:(BOOL*)arg4;
- (void)_updateContainerMetadataFromRecord:(id)arg1;
- (id)aliasByUnsaltedBookmarkData:(id)arg1;
- (id)asPrivateContainer;
- (id)containerMetadata;
- (id)containerMetadataEtag;
- (BOOL)containerMetadataNeedsSyncUp;
- (id)documentsPath;
- (BOOL)dumpActivityToContext:(id)arg1 error:(id*)arg2;
- (BOOL)dumpTablesToContext:(id)arg1 error:(id*)arg2;
- (BOOL)existsByParentID:(id)arg1 andName:(id)arg2;
- (id)faultByParentID:(id)arg1 andDisplayName:(id)arg2;
- (id)initWithContainerID:(id)arg1 dbRowID:(id)arg2 db:(id)arg3 session:(id)arg4 initialCreation:(BOOL)arg5;
- (BOOL)isPrivateContainer;
- (BOOL)isSharedContainer;
- (id)itemByParentID:(id)arg1 andName:(id)arg2;
- (BOOL)itemID:(id)arg1 isStrictChildOfItemID:(id)arg2;
- (void)notifyClient:(id)arg1 whenFaultingIsDone:(id /* block */)arg2;
- (id)pathRelativeToRoot;
- (void)performBlock:(id /* block */)arg1 whenSyncDownCompletesLookingForAliasWithBookmarkData:(id)arg2;
- (id)plist;
- (BOOL)printStatusLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 db:(id)arg2;
- (id)privateZone;
- (BOOL)recomputeSyncBlockState;
- (BOOL)removeSyncDownForAliasData:(id)arg1;
- (id)reservedItemByParentID:(id)arg1 andDisplayName:(id)arg2;
- (id)resolveClashOfAlias:(id)arg1 atPath:(id)arg2 withAlias:(id)arg3 atPath:(id)arg4;
- (void)resume;
- (void)scheduleContainerMetadataSyncUp;
- (id)serverAliasByUnsaltedBookmarkData:(id)arg1;
- (id)serverItemByParentID:(id)arg1 andName:(id)arg2;
- (void)setContainerMetadataEtag:(id)arg1;
- (void)setContainerMetadataNeedsSyncUp:(BOOL)arg1;
- (void)setServerZone:(id)arg1;
- (void)signalFaultingWatchers:(id)arg1;
- (void)updateWithPlist:(id)arg1;
- (BOOL)validateItemsLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 db:(id)arg2;
- (BOOL)validateStructureLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 db:(id)arg2;

@end
