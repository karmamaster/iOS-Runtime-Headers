/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBOcclusionsStack : NSObject {
    NSMutableSet *_dirtyKeys;
    NSMutableDictionary *_keyToEntry;
    NSMutableDictionary *_levelToCompositeOcclusions;
    NSCountedSet *_levels;
    NSMutableArray *_orderedEntries;
}

- (void)_adjustEntry:(id)arg1 forLevel:(float)arg2 occlusions:(id)arg3;
- (void)dealloc;
- (id)dirtyKeys;
- (void)enumerateKeysByLevelWithBlock:(id /* block */)arg1;
- (id)init;
- (BOOL)isDirty;
- (BOOL)isEmpty;
- (id)occlusionsAppliedToKey:(id)arg1;
- (void)removeKey:(id)arg1;
- (void)setKey:(id)arg1 toLevel:(float)arg2 withOcclusions:(id)arg3;

@end
