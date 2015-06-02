/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface __NSBundleTables : NSObject {
    struct __CFDictionary { } *_bundleForClassMap;
    NSMutableSet *_loadedBundles;
    NSMutableSet *_loadedFrameworks;
    NSLock *_lock;
    NSMutableDictionary *_resolvedPathToBundles;
    NSMutableSet *_staticFrameworks;
}

+ (id)bundleTables;

- (id)addBundle:(id)arg1 forPath:(id)arg2;
- (void)addBundle:(id)arg1 type:(unsigned int)arg2;
- (void)addStaticFrameworkBundles:(id)arg1;
- (id)allBundles;
- (id)allFrameworks;
- (id)bundleForClass:(Class)arg1;
- (id)bundleForPath:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)loadedBundles;
- (void)removeBundle:(id)arg1 forPath:(id)arg2 type:(unsigned int)arg3;
- (void)setBundle:(id)arg1 forClass:(Class)arg2;

@end
