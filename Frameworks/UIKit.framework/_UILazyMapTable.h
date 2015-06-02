/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UILazyMapTable : NSObject {
    NSMapTable *_keysToClientTables;
    NSMapTable *_keysToValues;
    id /* block */ _mappingBlock;
    NSMapTable *_valuesToKeys;
}

- (id)cachedObjectEnumerable;
- (id)cachedObjects;
- (unsigned int)count;
- (void)dealloc;
- (id)description;
- (BOOL)hasCachedObjectForKey:(id)arg1;
- (id)initWithMappingBlock:(id /* block */)arg1;
- (id)keyEnumerable;
- (id)keys;
- (id)objectForKey:(id)arg1;
- (void)registerClient:(id)arg1 ofObjectForKey:(id)arg2;
- (void)unregisterClient:(id)arg1 ofObjectForKey:(id)arg2;

@end
