/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSData : NSObject <CKRecordValue, NSCopying, NSMutableCopying, NSSecureCoding, PQLValuable, TSPSplitableData>

@property (nonatomic, readonly) NSData *SHA1Data;
@property (nonatomic, readonly) NSString *SHA1HexString;
@property (nonatomic, readonly) unsigned int br_qtnFlags;
@property (nonatomic, readonly) NSString *brc_hexadecimalString;
@property (nonatomic, readonly) NSData *brc_signature;
@property (nonatomic, readonly) BOOL brc_signatureIsPackage;
@property (nonatomic, readonly) BOOL brc_signatureIsPendingPlaceHolder;
@property (nonatomic, readonly) BOOL brc_signatureIsValid;
@property (readonly) const void*bytes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) unsigned int length;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/AddressBook.framework/AddressBook

- (id)abDecodeVCardBase64;
- (id)abDecodedUTF7;
- (id)abEncodeVCardBase64DataWithInitialLength:(unsigned int)arg1;
- (BOOL)abIsUTF16EntourageVCard;
- (id)abStringAtRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inEncoding:(unsigned int)arg2;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

- (BOOL)_isSafeResumeDataForBackgroundDownload:(int)arg1;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (id)CKDataFromBase64URLSafeString:(id)arg1;
+ (id)CKDataWithHexString:(id)arg1;
+ (id)CKDataWithHexString:(id)arg1 stringIsUppercase:(BOOL)arg2;

- (id)CKBase64URLSafeString;
- (id)CKHexString;
- (id)CKLowercaseHexStringWithoutSpaces;
- (id)CKUppercaseHexStringWithoutSpaces;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)data;
+ (id)dataWithBytes:(const void*)arg1 length:(unsigned int)arg2;
+ (id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2;
+ (id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2 freeWhenDone:(BOOL)arg3;
+ (id)dataWithContentsOfFile:(id)arg1;
+ (id)dataWithContentsOfFile:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
+ (id)dataWithContentsOfMappedFile:(id)arg1;
+ (id)dataWithContentsOfURL:(id)arg1;
+ (id)dataWithContentsOfURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
+ (id)dataWithData:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (BOOL)_allowsDirectEncoding;
- (id)_asciiDescription;
- (id)_base64EncodingAsString:(BOOL)arg1 withOptions:(unsigned int)arg2;
- (BOOL)_canReplaceWithDispatchDataForXPCCoder;
- (unsigned long)_cfTypeID;
- (BOOL)_copyWillRetain;
- (BOOL)_decodeBase64EncodedCharacterBuffer:(const char *)arg1 length:(unsigned int)arg2 options:(unsigned int)arg3 buffer:(char *)arg4 bufferLength:(unsigned int)arg5 state:(struct { BOOL x1; BOOL x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)arg6;
- (id)_initWithBase64EncodedObject:(id)arg1 options:(unsigned int)arg2;
- (BOOL)_isCompact;
- (BOOL)_isDispatchData;
- (id)_replaceCString:(const char *)arg1 withCString:(const char *)arg2;
- (id)_web_guessedMIMEType;
- (id)_web_guessedMIMETypeForExtension:(id)arg1;
- (id)_web_guessedMIMETypeForXML;
- (id)_web_parseRFC822HeaderFields;
- (id)base64EncodedDataWithOptions:(unsigned int)arg1;
- (id)base64EncodedStringWithOptions:(unsigned int)arg1;
- (id)base64Encoding;
- (const void*)bytes;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateByteRangesUsingBlock:(id /* block */)arg1;
- (void)getBytes:(void*)arg1;
- (void)getBytes:(void*)arg1 length:(unsigned int)arg2;
- (void)getBytes:(void*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)hash;
- (id)initWithBase64EncodedData:(id)arg1 options:(unsigned int)arg2;
- (id)initWithBase64EncodedString:(id)arg1 options:(unsigned int)arg2;
- (id)initWithBase64Encoding:(id)arg1;
- (id)initWithBytes:(const void*)arg1 length:(unsigned int)arg2;
- (id)initWithBytes:(void*)arg1 length:(unsigned int)arg2 copy:(BOOL)arg3 deallocator:(id /* block */)arg4;
- (id)initWithBytes:(void*)arg1 length:(unsigned int)arg2 copy:(BOOL)arg3 freeWhenDone:(BOOL)arg4 bytesAreVM:(BOOL)arg5;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2 deallocator:(id /* block */)arg3;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2 freeWhenDone:(BOOL)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 error:(id*)arg2;
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)initWithContentsOfMappedFile:(id)arg1;
- (id)initWithContentsOfMappedFile:(id)arg1 error:(id*)arg2;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)initWithData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToData:(id)arg1;
- (BOOL)isNSData__;
- (unsigned int)length;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfData:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (id)replacementObjectForCoder:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)subdataWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 error:(id*)arg3;
- (BOOL)writeToFile:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (unsigned int)hk_countOfUUIDs;
- (void)hk_enumerateUUIDsUsingBlock:(id /* block */)arg1;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (id)shortDescription;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

- (id)mf_attachmentWithFilename:(id)arg1 UTIType:(id)arg2 fromManager:(id)arg3 contextID:(id)arg4;

// Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit

+ (id)makeArchive:(const void*)arg1 length:(unsigned long)arg2 level:(float)arg3;

- (id)gzipDeflate:(float)arg1;
- (id)gzipInflate;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

- (id)aa_hexString;

// Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI

- (id)afui_dataByCompressingWithGzip;

// Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion

- (void)MD5:(unsigned char)arg1;

// Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo

- (id)hexString;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

+ (id)brc_pendingPlaceholderForPackage:(BOOL)arg1;
+ (id)newFromSqliteValue:(struct Mem { }*)arg1;

- (unsigned int)br_qtnFlags;
- (id)brc_SHA256WithSalt:(id)arg1;
- (id)brc_hexadecimalString;
- (id)brc_signature;
- (BOOL)brc_signatureIsPackage;
- (BOOL)brc_signatureIsPendingPlaceHolder;
- (BOOL)brc_signatureIsValid;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

+ (id)newFromSqliteValue:(struct Mem { }*)arg1;

- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

- (id)cplSyncAnchorDescription;
- (id)cplSyncAnchorSimpleDescription;
- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities

- (id)_CUTCopyGzippedData;
- (id)_CUTDecompressData;
- (id)_CUTOptionallyDecompressData;
- (id)_CUTStringFromBaseData;

// Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP

- (id)shortDescription;

// Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream

- (id)MSBase64Encoding;
- (id)MSHexString;
- (id)MSInitWithBase64Encoding:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents

- (id)cr_md5DigestHexString;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess

+ (id)dataWithHexString:(id)arg1;
+ (id)dataWithHexString:(id)arg1 stringIsUppercase:(BOOL)arg2;

- (id)hexString;
- (id)lowercaseHexStringWithoutSpaces;
- (id)uppercaseHexStringWithoutSpaces;

// Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices

- (id)_FTCopyGzippedData;
- (id)_FTDecompressData;
- (id)_FTOptionallyDecompressData;
- (id)_FTStringFromBaseData;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (void)_gkLoadRemoteImageDataForURL:(id)arg1 queue:(id)arg2 handler:(id /* block */)arg3;

- (id)_gkBase64EncodedString;
- (id)_gkMD5HashData;
- (id)_gkMD5HashString;
- (id)_gkSHA1HashData;
- (id)_gkSHA1HashString;
- (id)initWithBase64EncodedString_gk:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices

+ (id)dataWithSockAddr:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1;

- (const struct CDXTicket { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; struct { unsigned char x_5_1_1[6]; unsigned short x_5_1_2; } x5; unsigned int x6; unsigned char x7[0]; }*)CDXTicket;
- (id)CDXTicketExpirationDate;
- (BOOL)CDXTicketIsHolePunch;
- (BOOL)CDXTicketIsReflected;
- (BOOL)CDXTicketIsRelatedToTicket:(id)arg1;
- (BOOL)CDXTicketIsStub;
- (int)CDXTicketPCNT;
- (int)CDXTicketPID;
- (unsigned int)CDXTicketRevision;
- (unsigned long long)CDXTicketSID;
- (id)CDXTicketTrimmed;
- (BOOL)CDXTicketWellFormed;
- (struct CDXTicket { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; struct { unsigned char x_5_1_1[6]; unsigned short x_5_1_2; } x5; unsigned int x6; unsigned char x7[0]; }*)mutableCDXTicket;
- (struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)sockAddr;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (id)_geo_newXPCData;
- (id)_geo_uppercaseMD5HashString;

// Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing

+ (id)mappedDataWithContentsOfTemporaryFile:(id)arg1 error:(id*)arg2;

- (id)decompressedGzipData;
- (id)decompressedGzipDataUsingTemporaryFile;

// Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation

- (id)subdataWithRangeNoCopy:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

+ (id)__imDataWithHexString:(id)arg1;
+ (id)__imDataWithRandomBytes:(unsigned int)arg1;

- (id)SHA1Data;
- (id)SHA1HexString;
- (id)__imHexString;
- (id)__imHexStringOfBytes:(char *)arg1 withLength:(unsigned int)arg2;

// Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture

- (id)hexRepresentationWithSpaces_AS:(BOOL)arg1;

// Image: /System/Library/PrivateFrameworks/MIME.framework/MIME

- (id)mf_MD5Digest;
- (id)mf_copyHexString;
- (id)mf_dataByConvertingUnixNewlinesToNetwork;
- (id)mf_decodeBase64;
- (id)mf_decodeBase64InRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg1;
- (id)mf_decodeModifiedBase64;
- (id)mf_decodeQuotedPrintableForText:(BOOL)arg1;
- (id)mf_decodeUuencoded;
- (id)mf_encodeBase64;
- (id)mf_encodeBase64HeaderData;
- (id)mf_encodeBase64WithoutLineBreaks;
- (id)mf_encodeModifiedBase64;
- (BOOL)mf_immutable;
- (id)mf_locationsOfUnixNewlinesNeedingConversion;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfByteFromSet:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfByteFromSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfCString:(const char *)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfCString:(const char *)arg1 options:(unsigned int)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfCString:(const char *)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfData:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfRFC822HeaderData;
- (id)mf_subdataFromIndex:(unsigned int)arg1;
- (id)mf_subdataToIndex:(unsigned int)arg1;
- (id)mf_subdataWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;

// Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration

+ (id)MCDataWithCFData:(struct __CFData { }*)arg1;
+ (id)MCDataWithHexString:(id)arg1;

- (id)MCBase64String;
- (id)MCHexString;
- (id)MCInitWithBase64String:(id)arg1;
- (id)MCSHA1Hash;

// Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary

- (void)ml_bindToSQLiteStatement:(struct sqlite3_stmt { }*)arg1 atPosition:(int)arg2;
- (id)ml_stringValueForSQL;

// Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer

- (id)compressedData;
- (id)decompressedData;

// Image: /System/Library/PrivateFrameworks/NanoResourceGrabber.framework/NanoResourceGrabber

- (void)MD5:(unsigned char)arg1;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)nsDataWithOcBinaryData:(const struct OcBinaryData { int (**x1)(); unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; char *x6; bool x7; struct SsrwOOStream {} *x8; }*)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (id)SHA1Hash;
- (id)SHA256Hash;
- (id)fileSafeBase64Encoding;
- (id)hexEncoding;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

+ (id)pl_dataWithMappedContentsOfFileDescriptor:(int)arg1;
+ (id)pl_dataWithMappedContentsOfFileHandle:(id)arg1;

- (void)pl_adviceDoNotNeed;
- (void)pl_adviceWillNeed;
- (unsigned int)pl_advisoryLength;

// Image: /System/Library/PrivateFrameworks/Radio.framework/Radio

+ (id)dataForRadioRequestParameters:(id)arg1 isAsynchronousBackgroundRequest:(BOOL)arg2 error:(id*)arg3;
+ (id)dataForRadioRequestParameters:(id)arg1 protocolVersion:(int)arg2 isAsynchronousBackgroundRequest:(BOOL)arg3 error:(id*)arg4;

- (id)propertyListForRadioResponseReturningError:(id*)arg1;
- (id)propertyListForRadioResponseReturningError:(id*)arg1 unparsedResponseDictionary:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper

+ (id)SBKStringByMD5HashingString:(id)arg1;
+ (id)SBKStringFromDigestData:(id)arg1;

- (id)SBKDataByDeflatingWithGZip;
- (id)SBKDataByDeflatingWithNoZipHeader;
- (id)SBKDataByInflatingWithGZip;
- (id)SBKDataByInflatingWithNoZipHeader;
- (id)_SBKDataByDeflatingWithNoZipHeaderWithCompression:(unsigned int)arg1;
- (id)_SBKDataByInflatingWithNoZipHeader;

// Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote

- (id)TR_compressedGzipData;
- (id)TR_decompressedGzipData;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (BOOL)_web_isCaseInsensitiveEqualToCString:(const char *)arg1;
- (int)_web_locationAfterFirstBlankLine;
- (BOOL)_web_startsWithBlankLine;
- (id)_webkit_guessedMIMEType;
- (id)_webkit_guessedMIMETypeForXML;
- (id)_webkit_parseRFC822HeaderFields;

// Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI

- (BOOL)safari_dataAppearsToBeCompressed;
- (id)safari_dataByCompressingData;
- (id)safari_dataByDecompressingData;

// Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube

- (id)webSafeBase64Data;

// Image: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper

- (id)copyDeflatedData;

// Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar

- (void)_ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (id)tsp_dataFromDispatchData:(id)arg1;
+ (id)tsp_dataWithContentsOfURL:(id)arg1 decryptionKey:(id)arg2;

- (id)tsp_dispatchData;
- (id)tsp_dispatchDataWithApplier:(id /* block */)arg1;
- (void)tsp_splitDataWithMaxSize:(unsigned long)arg1 subdataHandlerBlock:(id /* block */)arg2;
- (BOOL)tsp_writeToURL:(id)arg1 encryptionKey:(id)arg2;

// Image: /usr/lib/libnfshared.dylib

+ (id)NF_dataWithHexString:(id)arg1;

- (id)NF_asHexString;

@end
