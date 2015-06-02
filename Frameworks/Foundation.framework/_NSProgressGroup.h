/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSProgressGroup : NSObject {
    NSMutableSet *_children;
    _NSProgressFraction *_childrenFraction;
    BOOL _closed;
    unsigned long long _finishedChildrenCount;
    NSProgress *_parent;
    long long _portionOfParent;
}

- (id)_indentedDescription:(unsigned int)arg1;
- (void)addChild:(id)arg1;
- (void)cancel;
- (void)close;
- (void)dealloc;
- (id)description;
- (id)initWithParent:(id)arg1 portion:(long long)arg2;
- (id)parent;
- (void)pause;
- (void)prioritize;
- (void)stopNotifications;
- (void)updateChildWithOldFraction:(id)arg1 newFraction:(id)arg2;

@end
