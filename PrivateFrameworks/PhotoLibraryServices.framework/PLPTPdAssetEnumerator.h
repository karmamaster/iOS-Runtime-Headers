/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPTPdAssetEnumerator : NSObject <NSFastEnumeration> {
    NSArray *_albumObjectIDs;
    NSArray *_assetObjectIDs;
    PLManagedObjectContext *_managedObjectContext;
    NSArray *_resultStore;
}

+ (id)enumeratorWithAssetObjectIDs:(id)arg1 albumObjectIDs:(id)arg2 managedObjectContext:(id)arg3;

- (id)assetsFromOffset:(unsigned int)arg1 count:(unsigned int)arg2;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (unsigned int)getPTPdInfo:(id*)arg1 count:(unsigned int)arg2 fetchOffset:(unsigned int)arg3;
- (id)init;

@end
