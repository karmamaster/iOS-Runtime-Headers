/* Generated by RuntimeBrowser.
 */

@protocol TSDCanvasSelection <NSObject, NSCopying>

@required

+ (TSKSelection<TSDCanvasSelection> *)emptySelection;

- (BOOL)containsKindOfClass:(Class)arg1;
- (BOOL)containsUnlockedKindOfClass:(Class)arg1;
- (id)copyExcludingInfo:(NSObject<TSDInfo> *)arg1;
- (id)copyIncludingInfo:(NSObject<TSDInfo> *)arg1;
- (unsigned int)infoCount;
- (NSSet *)infos;
- (NSSet *)infosOfClass:(Class)arg1;
- (BOOL)isEmpty;
- (unsigned int)unlockedInfoCount;
- (NSSet *)unlockedInfos;

@end
