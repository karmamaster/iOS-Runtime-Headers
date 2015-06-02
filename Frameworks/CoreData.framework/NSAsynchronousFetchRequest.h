/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSAsynchronousFetchRequest : NSPersistentStoreRequest {
    int _estimatedResultCount;
    NSFetchRequest *_fetchRequest;
    id _requestCompletionBlock;
}

@property (readonly) id /* block */ completionBlock;
@property (nonatomic) int estimatedResultCount;
@property (readonly) NSFetchRequest *fetchRequest;

- (id /* block */)completionBlock;
- (void)dealloc;
- (id)description;
- (int)estimatedResultCount;
- (id)fetchRequest;
- (id)initWithFetchRequest:(id)arg1 completionBlock:(id /* block */)arg2;
- (unsigned int)requestType;
- (void)setEstimatedResultCount:(int)arg1;

@end
