/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDList : NSObject {
    WDDocument *mDocument;
    NSMutableArray *mLevelOverrides;
    long mListDefinitionId;
    long mListId;
}

@property (nonatomic, readonly) long listDefinitionId;
@property (nonatomic, readonly) long listId;

- (id)addLevelOverrideWithLevel:(unsigned char)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithDocument:(id)arg1 listId:(long)arg2 listDefinitionId:(long)arg3;
- (id)levelOverrideAt:(unsigned int)arg1;
- (unsigned int)levelOverrideCount;
- (id)levelOverrideForLevel:(unsigned char)arg1;
- (id)levelOverrides;
- (long)listDefinitionId;
- (long)listId;

@end
