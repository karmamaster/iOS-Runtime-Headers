/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPCameraFolder : ICCameraFolder {
    NSString *_path;
    void *_ptpCameraFolderProperties;
}

@property (copy) id info;
@property (readonly) unsigned long objHandle;
@property (retain) NSString *path;
@property (readonly) unsigned long storageID;
@property (readonly) unsigned int type;

- (void)dealloc;
- (BOOL)deleteItemFromCamera:(id)arg1;
- (id)description;
- (void)enumerateContent;
- (void)finalize;
- (id)folderForObjectHandle:(unsigned long)arg1;
- (id)folderForObjectHandleCreatingIfNeeded:(unsigned long)arg1 addUsedObjectIDs:(id)arg2 numFoldersCreated:(int*)arg3;
- (BOOL)hasDCIMParent;
- (id)info;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 type:(unsigned int)arg4 storageID:(unsigned long)arg5 objectHandle:(unsigned long)arg6;
- (id)itemForObjectHandle:(unsigned long)arg1;
- (unsigned long)objHandle;
- (id)path;
- (void)refreshInfo;
- (void)setInfo:(id)arg1;
- (void)setPath:(id)arg1;
- (unsigned long)storageID;
- (unsigned int)type;

@end
