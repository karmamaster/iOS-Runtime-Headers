/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSMutableDictionary : NSDictionary

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)dictionaryWithCapacity:(unsigned int)arg1;
+ (id)dictionaryWithSharedKeySet:(id)arg1;

- (void)__addObject:(id)arg1 forKey:(id)arg2;
- (void)__setObject:(id)arg1 forKey:(id)arg2;
- (void)_mutate;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)addObject:(id)arg1 forKey:(id)arg2;
- (void)addObjects:(id)arg1 forKeys:(id)arg2;
- (void)addObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned int)arg3;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned int)arg3;
- (void)invert;
- (void)removeAllObjects;
- (void)removeEntriesInDictionary:(id)arg1;
- (void)removeEntriesPassingTest:(id /* block */)arg1;
- (void)removeEntriesWithOptions:(unsigned int)arg1 passingTest:(id /* block */)arg2;
- (void)removeKeysForObject:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)replaceObject:(id)arg1 forKey:(id)arg2;
- (void)replaceObjects:(id)arg1 forKeys:(id)arg2;
- (void)replaceObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned int)arg3;
- (void)setDictionary:(id)arg1;
- (void)setEntriesFromDictionary:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObjects:(id)arg1 forKeys:(id)arg2;
- (void)setObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned int)arg3;

// Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation

- (void)addEntriesFromDictionaryWithRecursion:(id)arg1;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

- (void)_web_setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)_web_setInt:(int)arg1 forKey:(id)arg2;
- (void)_web_setObject:(id)arg1 forUncopiedKey:(id)arg2;
- (Class)classForCoder;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)_dictionaryWithContentsOfDictionaries:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AOSNotification.framework/AOSNotification

- (void)safelyMapKey:(id)arg1 toObject:(id)arg2;
- (void)safelySetObject:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant

- (id)mutableCopyDeep;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (void)bs_setSafeObject:(id)arg1 forKey:(id)arg2;
- (id)bs_takeObjectForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

- (id)CALsafeObjectForKey:(id)arg1 calculatedWithBlock:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial

- (void)bw_addEntriesFromDictionaryWithRecursion:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV

- (void)CDVAddObjectsAndKeys:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream

+ (id)MSASDictionaryWithCopyOfDictionary:(id)arg1;

- (id)MSASAddDictionary:(id)arg1;
- (id)MSASAddEventIsDueToAlbumDeletionAlbumGUID:(id)arg1;
- (id)MSASAddEventIsDueToAssetCollectionDeletionAssetCollectionGUID:(id)arg1;
- (id)MSASAddIsAlbumResetSyncAlbumGUID:(id)arg1;
- (id)MSASAddIsErrorRecovery;
- (id)MSASAddIsGlobalResetSync;
- (id)MSASAddIsLocalChange;
- (id)MSASAddNotInterestingKey;

// Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents

- (void)cr_setNonNilObject:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice

- (void)safelyMapKey:(id)arg1 toObject:(id)arg2;
- (void)safelySetObject:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

- (void)_gkAddEntriesFromFormEncodedString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore

- (void)setAsString:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

+ (id)nonRetainingDictionary;
+ (id)nonRetainingKeyAndValueDictionary;
+ (id)retainingKeyDictionary;

// Image: /System/Library/PrivateFrameworks/MIME.framework/MIME

- (void)mf_fixupRFC2231Values;

// Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration

- (void)MCDeepCopyEntriesFromDictionary:(id)arg1;
- (void)MCDeepCopyMissingEntriesFromDictionary:(id)arg1;
- (void)MCDeleteBoolRestriction:(id)arg1;
- (void)MCFixUpRestrictionsDictionaryForMDMReporting;
- (id)MCMutableDictionaryContainingValidatedKeysAndClasses:(id)arg1 removeKeys:(BOOL)arg2 outError:(id*)arg3;
- (void)MCSetBoolRestriction:(id)arg1 value:(BOOL)arg2;
- (void)MCSetIntersectionRestriction:(id)arg1 values:(id)arg2;
- (void)MCSetObjectIfNotNil:(id)arg1 forKey:(id)arg2;
- (void)MCSetUnionRestriction:(id)arg1 values:(id)arg2;
- (void)MCSetValueRestriction:(id)arg1 value:(id)arg2;
- (id)MCValidateAndRemoveArrayOfClass:(Class)arg1 withKey:(id)arg2 isRequired:(BOOL)arg3 outError:(id*)arg4;
- (id)MCValidateAndRemoveNonZeroLengthStringWithKey:(id)arg1 isRequired:(BOOL)arg2 outError:(id*)arg3;
- (id)MCValidateAndRemoveObjectOfClass:(Class)arg1 withKey:(id)arg2 isRequired:(BOOL)arg3 outError:(id*)arg4;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

- (void)mf_addObject:(id)arg1 forKey:(id)arg2;
- (id)mf_objectForKey:(id)arg1 ofClass:(Class)arg2;
- (void)mf_setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)mf_setInteger:(int)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary

- (void)mergeWithDictionary:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

+ (BOOL)_processArgumentWithMutableDictionary:(id)arg1 object:(id)arg2 key:(id)arg3;
+ (id)npkDictionaryWithObjectsAndKeys:(id)arg1;

- (void)npkSetObject:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)dictionaryByInvertingDictionary:(id)arg1;
+ (id)dictionaryByInvertingDictionaryIfPossible:(id)arg1;

- (id)addToCacheAndReturnCssString:(id)arg1;
- (id)objectForKey:(id)arg1 withDefaultOfClass:(Class)arg2;
- (id)objectForKey:(id)arg1 withDefaultUsingBlock:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport

- (void)bl_copyObjectFromDictionary:(id)arg1 forKey:(id)arg2;
- (void)bl_copyObjectFromDictionaryRemoveIfNotPresent:(id)arg1 forKey:(id)arg2;
- (void)bl_copyObjectsFromDictionary:(id)arg1 forKeys:(id)arg2;
- (void)bl_copyObjectsFromDictionaryRemoveIfNotPresent:(id)arg1 forKeys:(id)arg2;
- (void)bl_setAffineTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 forKey:(id)arg2;
- (void)bl_setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)bl_setBoolIfNotPresent:(BOOL)arg1 forKey:(id)arg2;
- (void)bl_setDouble:(double)arg1 forKey:(id)arg2;
- (void)bl_setDoubleIfNotPresent:(double)arg1 forKey:(id)arg2;
- (void)bl_setFloat:(float)arg1 forKey:(id)arg2;
- (void)bl_setFloatIfNotPresent:(float)arg1 forKey:(id)arg2;
- (void)bl_setInt:(int)arg1 forKey:(id)arg2;
- (void)bl_setIntIfNotPresent:(int)arg1 forKey:(id)arg2;
- (void)bl_setInteger:(int)arg1 forKey:(id)arg2;
- (void)bl_setNonRetainedObject:(id)arg1 forKey:(id)arg2;
- (void)bl_setObject:(id)arg1 forIndex:(int)arg2;
- (void)bl_setObjectIfNotNil:(id)arg1 forKey:(id)arg2;
- (void)bl_setObjectIfNotPresent:(id)arg1 forKey:(id)arg2;
- (void)bl_setPointAsString:(struct CGPoint { float x1; float x2; })arg1 forKey:(id)arg2;
- (void)bl_setPointAsStringIfNotPresent:(struct CGPoint { float x1; float x2; })arg1 forKey:(id)arg2;
- (void)bl_setRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)bl_setRectAsString:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)bl_setRectAsStringIfNotPresent:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)bl_setRectIfNotPresent:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (void)pl_applyOrientation:(int)arg1 toNormalizedPointWithXKey:(id)arg2 yKey:(id)arg3;
- (void)pl_enforceCorrectValuesForMinKey:(id)arg1 maxKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices

- (void)setSafeObject:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices

- (void)sbs_setSafeObject:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail

+ (BOOL)_processArgumentWithMutableDictionary:(id)arg1 object:(id)arg2 key:(id)arg3;
+ (id)vmDictionaryWithObjectsAndKeys:(id)arg1;

- (void)vmSetObject:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (void)_web_setObjectIfNotNil:(id)arg1 forKey:(id)arg2;
- (void)_webkit_setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)_webkit_setFloat:(float)arg1 forKey:(id)arg2;
- (void)_webkit_setInt:(int)arg1 forKey:(id)arg2;
- (void)_webkit_setLongLong:(long long)arg1 forKey:(id)arg2;
- (void)_webkit_setUnsignedInt:(unsigned int)arg1 forKey:(id)arg2;
- (void)_webkit_setUnsignedLongLong:(unsigned long long)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/iPhotoMigrationSupport.framework/iPhotoMigrationSupport

- (void)blj_setObjectIfNotNil:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (id)tsu_dictionaryByInvertingDictionary:(id)arg1;
+ (id)tsu_dictionaryByInvertingDictionaryIfPossible:(id)arg1;

- (void)tsp_addObject:(id)arg1 toArrayWithKey:(id)arg2;
- (void)tsp_delayArchivingObjectDuringDeepCopy:(id)arg1;
- (void)tsp_setDeepCopyObjectProxy:(id)arg1 forReferencedObject:(id)arg2;
- (void)tsp_skipArchivingObjectDuringDeepCopy:(id)arg1;
- (id)tsu_objectForKey:(id)arg1 withDefaultOfClass:(Class)arg2;
- (id)tsu_objectForKey:(id)arg1 withDefaultUsingBlock:(id /* block */)arg2;
- (void)tsu_setNonNilObject:(id)arg1 forKey:(id)arg2;
- (void)tsu_setNonNilValueForKey:(id)arg1 fromDictionary:(id)arg2;

@end
