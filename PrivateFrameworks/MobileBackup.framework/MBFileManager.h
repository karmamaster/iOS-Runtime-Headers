/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBFileManager : NSObject

+ (id)defaultManager;

- (BOOL)copyPath:(id)arg1 toPath:(id)arg2;
- (BOOL)createDirectoryAtPath:(id)arg1 attributes:(id)arg2;
- (id)directoryContentsAtPath:(id)arg1;
- (id)fileAttributesAtPath:(id)arg1 traverseLink:(BOOL)arg2;
- (BOOL)fileExistsAtPath:(id)arg1;
- (BOOL)movePath:(id)arg1 toPath:(id)arg2;
- (BOOL)removeFileAtPath:(id)arg1;

@end
